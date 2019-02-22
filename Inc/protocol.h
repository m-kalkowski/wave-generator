#ifndef PROTOCOL_H_
#define PROTOCOL_H_

#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#define MINIMUM_MESSAGE_LENGTH (2)
#define MAXIMUM_MESSAGE_LENGTH (16 + 1) // add \n

/**
 * @brief Possible message codes
 */
typedef enum EMessageID 
{
	eMESSAGE_ID_UNKNOWN_MESSAGE = 0x00,
	eMESSAGE_ID_START_DAC       = 0x01,
	eMESSAGE_ID_STOP_DAC        = 0x02,
	eMESSAGE_ID_START_SUM       = 0x03
} EMessageID;

/**
 * @brief Possible message codes
 */
typedef enum EMessageLength 
{
	eMESSAGE_LENGTH_START_DAC = 9,
	eMESSAGE_LENGTH_START_SUM = 16,
	eMESSAGE_LENGTH_STOP_DAC  = 2
} EMessageLength;

typedef enum ESignalType 
{
	eSIGNAL_TYPE_SINE     = 0x00,
	eSIGNAL_TYPE_SQUARE   = 0x01,
	eSIGNAL_TYPE_TRIANGLE = 0x02,
	eSIGNAL_TYPE_SAW      = 0x03
} ESignalType;

#pragma pack(1)
typedef struct StartDac
{
	uint8_t length;
	uint8_t id;
	
	ESignalType signalType;
	
	uint16_t frequency;
	uint16_t phase;
	uint16_t amplitude;
} StartDac;

typedef struct StartSum
{
    uint8_t length;
    uint8_t id;

    ESignalType signalType_1;
    ESignalType signalType_2;

    uint16_t frequency_1;
    uint16_t phase_1;
    uint16_t amplitude_1;

    uint16_t frequency_2;
    uint16_t phase_2;
    uint16_t amplitude_2;
} StartSum;

typedef struct StopDac 
{
	uint8_t length;
	uint8_t id;
} StopDac;

EMessageID protocol__checkIfValid(const char* pMessageBuffer);

void protocol__decodeMessage(EMessageID eMessageID, const char *pData);


#endif /* PROTOCOL_H_ */
