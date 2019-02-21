#include "protocol.h"

#include "main.h"
#include "tables.h"


uint16_t protocol__createChecksum(const char* buf, size_t size) 
{
	unsigned char i;
	unsigned int data;
	unsigned int crc = 0xffff;

	if (size == 0)
		return (~crc);

	do
	{
		for (i=0, data=(unsigned int) 0xff & *buf++; i < 8; i++, data >>= 1)
		{
			if ((crc & 0x0001) ^ (data & 0x0001))
					crc = (crc >> 1) ^ 0x8408;
			else  
				crc >>= 1;
		}
	} while (--size);

	crc = ~crc;
	data = crc;
	crc = (crc << 8) | (data >> 8 & 0xff);
	
	return (crc);
}

EMessageID protocol__checkIfValid(const char* pMessageBuffer) 
{
	EMessageID result = eMESSAGE_ID_UNKNOWN_MESSAGE;

	const char MESSAGE_LENGTH = pMessageBuffer[0];

	if (MESSAGE_LENGTH < MINIMUM_MESSAGE_LENGTH)
		return result;

	const size_t checksumIndex = MESSAGE_LENGTH - 2;
	const uint16_t ACTUAL_CHECKSUM = protocol__createChecksum(pMessageBuffer, checksumIndex);
	const uint16_t READ_CHECKSUM = (pMessageBuffer[checksumIndex + 1] << 8) | pMessageBuffer[checksumIndex];

	if (READ_CHECKSUM != ACTUAL_CHECKSUM)
	{
		return result;
	}

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
		default:
		{
			break;
    }
	}

	return result;
}

size_t protocol__createAck(char* pBuffer) {
    struct AckMessage* pMessage = (struct AckMessage*) pBuffer;

    pMessage->length = eMESSAGE_LENGTH_ACK;
    pMessage->id = eMESSAGE_ID_ACK;
    const size_t checksumIndex = eMESSAGE_LENGTH_ACK - 2;
    pMessage->checksum = protocol__createChecksum(pBuffer, checksumIndex);
    return sizeof(AckMessage);
}

size_t protocol__createNack(char reason, char* pBuffer) {
    struct NackMessage* pMessage = (struct NackMessage*) pBuffer;

    pMessage->length = eMESSAGE_LENGTH_NACK;
    pMessage->id = eMESSAGE_ID_NACK;
    pMessage->reason = reason;
    const size_t checksumIndex = eMESSAGE_LENGTH_NACK - 2;
    pMessage->checksum = protocol__createChecksum(pBuffer, checksumIndex);
    return sizeof(NackMessage);
}

void protocol__onStartDacReceived(StartDac *pStartDac)
{
	const uint16_t *pSignalType;
	int signalSize;
	
	switch (pStartDac->signalType)
	{
		case eSIGNAL_TYPE_SINE:
		{
			switch (pStartDac->frequency)
			{
				case eFREQUENCY_50Hz:
				{
					pSignalType = sine_50Hz;
					signalSize = sine_50Hz_size;
					break;
				}
				case eFREQUENCY_100Hz:
				{
					pSignalType = sine_100Hz;
					signalSize = sine_100Hz_size;
					break;
				}
				case eFREQUENCY_200Hz:
				{
					pSignalType = sine_200Hz;
					signalSize = sine_200Hz_size;
					break;
				}
				case eFREQUENCY_500Hz:
				{
					pSignalType = sine_500Hz;
					signalSize = sine_500Hz_size;
					break;
				}
				case eFREQUENCY_1000Hz:
				{
					pSignalType = sine_1000Hz;
					signalSize = sine_1000Hz_size;
					break;
				}
				default:
				{
					break;
				}
			}
			break;
		}
		case eSIGNAL_TYPE_SQUARE:
		{
			switch (pStartDac->frequency)
			{
				case eFREQUENCY_50Hz:
				{
					pSignalType = square_50Hz;
					signalSize = square_50Hz_size;
					break;
				}
				case eFREQUENCY_100Hz:
				{
					pSignalType = square_100Hz;
					signalSize = square_100Hz_size;
					break;
				}
				case eFREQUENCY_200Hz:
				{
					pSignalType = square_200Hz;
					signalSize = square_200Hz_size;
					break;
				}
				case eFREQUENCY_500Hz:
				{
					pSignalType = square_500Hz;
					signalSize = square_500Hz_size;
					break;
				}
				case eFREQUENCY_1000Hz:
				{
					pSignalType = square_1000Hz;
					signalSize = square_1000Hz_size;
					break;
				}
				default:
				{
					break;
				}
			}
			break;
		}
		case eSIGNAL_TYPE_TRIANGLE:
		{
			switch (pStartDac->frequency)
			{
				case eFREQUENCY_50Hz:
				{
					pSignalType = triangle_50Hz;
					signalSize = triangle_50Hz_size;
					break;
				}
				case eFREQUENCY_100Hz:
				{
					pSignalType = triangle_100Hz;
					signalSize = triangle_100Hz_size;
					break;
				}
				case eFREQUENCY_200Hz:
				{
					pSignalType = triangle_200Hz;
					signalSize = triangle_200Hz_size;
					break;
				}
				case eFREQUENCY_500Hz:
				{
					pSignalType = triangle_500Hz;
					signalSize = triangle_500Hz_size;
					break;
				}
				case eFREQUENCY_1000Hz:
				{
					pSignalType = triangle_1000Hz;
					signalSize = triangle_1000Hz_size;
					break;
				}
				default:
				{
					break;
				}
			}
			break;
		}
		case eSIGNAL_TYPE_SAW:
		{
			switch (pStartDac->frequency)
			{
				case eFREQUENCY_50Hz:
				{
					pSignalType = saw_50Hz;
					signalSize = saw_50Hz_size;
					break;
				}
				case eFREQUENCY_100Hz:
				{
					pSignalType = saw_100Hz;
					signalSize = saw_100Hz_size;
					break;
				}
				case eFREQUENCY_200Hz:
				{
					pSignalType = saw_200Hz;
					signalSize = saw_200Hz_size;
					break;
				}
				case eFREQUENCY_500Hz:
				{
					pSignalType = saw_500Hz;
					signalSize = saw_500Hz_size;
					break;
				}
				case eFREQUENCY_1000Hz:
				{
					pSignalType = saw_1000Hz;
					signalSize = saw_1000Hz_size;
					break;
				}
				default:
				{
					break;
				}
			}
			break;
		}
		default:
		{
			break;
		}	
	}
	
	HAL_DAC_Start(&hdac, DAC_CHANNEL_1);
	HAL_DAC_Start_DMA(&hdac, DAC_CHANNEL_1, (uint32_t*)pSignalType, signalSize, DAC_ALIGN_12B_R);
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
		default:
		{
			break;
		}
	}
}
