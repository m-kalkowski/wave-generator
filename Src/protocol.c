#include "protocol.h"

#include "main.h"
#include "math.h"

#define MAX_DAC_DMA_BUFFER_SIZE (3200) 
#define PI 3.14159265358979323846

uint16_t buff[MAX_DAC_DMA_BUFFER_SIZE];
uint16_t buff_2[MAX_DAC_DMA_BUFFER_SIZE];
int signal_1_Size;
int signal_2_Size;

EMessageID protocol__checkIfValid(const char* pMessageBuffer) 
{
	EMessageID result = eMESSAGE_ID_UNKNOWN_MESSAGE;

	const char MESSAGE_LENGTH = pMessageBuffer[0];

	if (MESSAGE_LENGTH < MINIMUM_MESSAGE_LENGTH)
		return result;

	const char MESSAGE_ID = pMessageBuffer[1];
	
	switch (MESSAGE_ID)
	{
		case eMESSAGE_ID_START_DAC: 
		{
			if ((MESSAGE_LENGTH == eMESSAGE_LENGTH_START_DAC)) 
			{
				result = eMESSAGE_ID_START_DAC;
			}
			break;
		}
		case eMESSAGE_ID_STOP_DAC:
		{
			if (MESSAGE_LENGTH == eMESSAGE_LENGTH_STOP_DAC) 
			{
				result = eMESSAGE_ID_STOP_DAC;
			}
			break;
		}
		case eMESSAGE_ID_START_SUM:
		{
			if (MESSAGE_LENGTH == eMESSAGE_LENGTH_START_SUM) 
			{
				result = eMESSAGE_ID_START_SUM;
			}
			break;
		}
		default:
		{
			break;
    }
	}

	return result;
}

void protocol__generateSine(double f, double A, double p, uint16_t *pBuff, int *size)
{
	double step = 1.0 / 32000.0;
	double t = 0;
	int i = 0;
	double T = 1.0 / f;
	while (t < T)
	{
		pBuff[i] = A*sin(2.0 * PI * f * t + p) + (0xFFF / 2);
		t += step;
		i++;
	}
	*size = i - 1;
}

void protocol__generateSquare(double f, double A, double p, uint16_t *pBuff, int *size)
{
	double step = 1.0 / 32000.0;
	double t = 0;
	int i = 0;
	double T = 1.0 / f;
	while (t < T)
	{
		pBuff[i] = t < (T / 2) ? A + (0xFFF / 2) : (0xFFF / 2) - A;
		t += step;
		i++;
	}
	*size = i - 1;
}

void protocol__generateTriangle(double f, double A, double p, uint16_t *pBuff, int *size)
{
	double step = 1.0 / 32000.0;
	double t = 0;
	int i = 0;
	double T = 1.0 / f;
	
	while (t < T / 2)
	{
		pBuff[i] =  t * 2 * A / T + ((0xFFF - A )/ 2);
		t += step;
		i++;
	}
	while (t > 0)
	{
		pBuff[i] =  t * 2 * A / T + ((0xFFF - A )/ 2);
		t -= step;
		i++;
	}
	*size = i - 1;
}

void protocol__generateSaw(double f, double A, double p, uint16_t *pBuff, int *size)
{
	double step = 1.0 / 32000.0;
	double t = 0;
	int i = 0;
	double T = 1.0 / f;
	while (t < T)
	{
		pBuff[i] = t * A / T + ((0xFFF - A )/ 2);
		t += step;
		i++;
	}
	*size = i - 1;
}

uint16_t *sumSignals()
{
	int biggerSize;
	int smallerSize;
	
	uint16_t *biggerBuff;
	uint16_t *smallerBuff;
	
	if (signal_2_Size > signal_1_Size)
	{
		biggerSize = signal_2_Size;
		smallerSize = signal_1_Size;
		biggerBuff = buff_2;
		smallerBuff = buff;
	}
	else
	{
		biggerSize = signal_1_Size;
		smallerSize = signal_2_Size;
		biggerBuff = buff;
		smallerBuff = buff_2;
	}
	
	uint32_t y;
	for (int i=0, j=0; i<biggerSize; ++i, ++j)
	{	
		if (j == smallerSize)
			j = 0;
		
		y = (biggerBuff[i] + smallerBuff[j]) / 2;
		if (y > 0xFFF)
			y = 0xFFF;
			
		biggerBuff[i] = y;
	}
	
	return biggerBuff;
}

void protocol__onStartDacReceived(StartDac *pStartDac)
{
	HAL_DAC_Stop(&hdac, DAC_CHANNEL_1);
	HAL_DAC_Stop_DMA(&hdac, DAC_CHANNEL_1);
	
	switch (pStartDac->signalType)
	{
		case eSIGNAL_TYPE_SINE:
		{
			protocol__generateSine(pStartDac->frequency, pStartDac->amplitude, pStartDac->phase, buff, &signal_1_Size);
			break;
		}
		case eSIGNAL_TYPE_SQUARE:
		{
			protocol__generateSquare(pStartDac->frequency, pStartDac->amplitude, pStartDac->phase, buff, &signal_1_Size);
			break;
		}
		case eSIGNAL_TYPE_TRIANGLE:
		{
			protocol__generateTriangle(pStartDac->frequency, pStartDac->amplitude, pStartDac->phase, buff, &signal_1_Size);
			break;
		}
		case eSIGNAL_TYPE_SAW:
		{
			protocol__generateSaw(pStartDac->frequency, pStartDac->amplitude, pStartDac->phase, buff, &signal_1_Size);
			break;
		}
		default:
		{
			return;
		}	
	}
	
	HAL_DAC_Start(&hdac, DAC_CHANNEL_1);
	HAL_DAC_Start_DMA(&hdac, DAC_CHANNEL_1, (uint32_t*)buff, signal_1_Size, DAC_ALIGN_12B_R);
}

void protocol__onStartSumReceived(StartSum *pStartSum)
{
	HAL_DAC_Stop(&hdac, DAC_CHANNEL_1);
	HAL_DAC_Stop_DMA(&hdac, DAC_CHANNEL_1);
	
	switch (pStartSum->signalType_1)
	{
		case eSIGNAL_TYPE_SINE:
		{
			protocol__generateSine(pStartSum->frequency_1, pStartSum->amplitude_1, pStartSum->phase_1, buff, &signal_1_Size);
			break;
		}
		case eSIGNAL_TYPE_SQUARE:
		{
			protocol__generateSquare(pStartSum->frequency_1, pStartSum->amplitude_1, pStartSum->phase_1, buff, &signal_1_Size);
			break;
		}
		case eSIGNAL_TYPE_TRIANGLE:
		{
			protocol__generateTriangle(pStartSum->frequency_1, pStartSum->amplitude_1, pStartSum->phase_1, buff, &signal_1_Size);
			break;
		}
		case eSIGNAL_TYPE_SAW:
		{
			protocol__generateSaw(pStartSum->frequency_1, pStartSum->amplitude_1, pStartSum->phase_1, buff, &signal_1_Size);
			break;
		}
		default:
		{
			return;
		}	
	}
	
	switch (pStartSum->signalType_2)
	{
		case eSIGNAL_TYPE_SINE:
		{
			protocol__generateSine(pStartSum->frequency_2, pStartSum->amplitude_2, pStartSum->phase_2, buff_2, &signal_2_Size);
			break;
		}
		case eSIGNAL_TYPE_SQUARE:
		{
			protocol__generateSquare(pStartSum->frequency_2, pStartSum->amplitude_2, pStartSum->phase_2, buff_2, &signal_2_Size);
			break;
		}
		case eSIGNAL_TYPE_TRIANGLE:
		{
			protocol__generateTriangle(pStartSum->frequency_2, pStartSum->amplitude_2, pStartSum->phase_2, buff_2, &signal_2_Size);
			break;
		}
		case eSIGNAL_TYPE_SAW:
		{
			protocol__generateSaw(pStartSum->frequency_2, pStartSum->amplitude_2, pStartSum->phase_2, buff_2, &signal_2_Size);
			break;
		}
		default:
		{
			return;
		}	
	}
	
	uint16_t *outBuff;
	outBuff = sumSignals();
	
	int signalSize = signal_2_Size > signal_1_Size ? signal_2_Size : signal_1_Size;
	
	HAL_DAC_Start(&hdac, DAC_CHANNEL_1);
	HAL_DAC_Start_DMA(&hdac, DAC_CHANNEL_1, (uint32_t*)outBuff, signalSize, DAC_ALIGN_12B_R);
}

void protocol__onStopDacReceived(StopDac *pStopDac)
{
	HAL_DAC_Stop(&hdac, DAC_CHANNEL_1);
	HAL_DAC_Stop_DMA(&hdac, DAC_CHANNEL_1);
}

void protocol__decodeMessage(EMessageID eMessageID, const char *pData)
{
	switch (eMessageID)
	{
		case eMESSAGE_ID_START_DAC: 
		{	
			StartDac *pStartDac = (StartDac*)pData;
			protocol__onStartDacReceived(pStartDac);
			break;
		}
		case eMESSAGE_ID_STOP_DAC:
		{
			StopDac *pStopDac = (StopDac*)pData;
			protocol__onStopDacReceived(pStopDac);
			break;
		}
		case eMESSAGE_ID_START_SUM:
		{
			StartSum *pStartSum = (StartSum*)pData;
			protocol__onStartSumReceived(pStartSum);
			break;
		}
		default:
		{
			break;
		}
	}
}
