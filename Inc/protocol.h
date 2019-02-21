#ifndef PROTOCOL_H_
#define PROTOCOL_H_

#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#define MINIMUM_MESSAGE_LENGTH (4)
#define MAXIMUM_MESSAGE_LENGTH (9 + 1) // add \n

/**
 * @brief Possible message codes
 */
typedef enum EMessageID 
{
	eMESSAGE_ID_UNKNOWN_MESSAGE = 0x00,
	eMESSAGE_ID_START_DAC       = 0x01,
	eMESSAGE_ID_STOP_DAC        = 0x02,
	eMESSAGE_ID_ACK             = 0x03,
	eMESSAGE_ID_NACK            = 0x04
} EMessageID;

/**
 * @brief Possible message codes
 */
typedef enum EMessageLength 
{
	eMESSAGE_LENGTH_START_DAC = 0x09,
	eMESSAGE_LENGTH_STOP_DAC  = 0x04,
	eMESSAGE_LENGTH_ACK       = 0x04,
	eMESSAGE_LENGTH_NACK      = 0x05
} EMessageLength;

typedef enum ESignalType 
{
	eSIGNAL_TYPE_SINE     = 0x00,
	eSIGNAL_TYPE_SQUARE   = 0x01,
	eSIGNAL_TYPE_TRIANGLE = 0x02,
	eSIGNAL_TYPE_SAW      = 0x03
} ESignalType;

typedef enum ENumOfChannels 
{
	eNUM_OF_CHANNELS_1 = 0x01,
	eNUM_OF_CHANNELS_2 = 0x02
} ENumOfChannels;

typedef enum EFrequency 
{
	eFREQUENCY_50Hz   = 0x01,
	eFREQUENCY_100Hz  = 0x02,
	eFREQUENCY_200Hz  = 0x03,
	eFREQUENCY_500Hz  = 0x04,
	eFREQUENCY_1000Hz = 0x05,
} EFrequency;

/**
 * @brief Start Display message structure
 */
#pragma pack(1)
typedef struct StartDac
{
	uint8_t length;
	uint8_t id;
	
	ESignalType signalType;
	ENumOfChannels numOfChannels;
	EFrequency frequency;
	
	uint8_t phase;
	uint8_t amplitude;
	
	uint16_t checksum;

} StartDac;

/**
 * @brief Stop Display message structure
 */
typedef struct StopDac 
{
	uint8_t length;
	uint8_t id;
	
	uint16_t checksum;
} StopDac;

/**
 * @brief Ack message structure
 */
typedef struct AckMessage 
{
	uint8_t length;
	uint8_t id;

	uint16_t checksum;
} AckMessage;

/**
 * @brief Nack message structure
 */
typedef struct NackMessage
{
	uint8_t length;
	uint8_t id;

	char reason;

	uint16_t checksum;
} NackMessage;


EMessageID protocol__checkIfValid(const char* pMessageBuffer);

size_t protocol__createAck(char* _usbOutputBuffer);

size_t protocol__createNack(char reason, char* _usbOutputBuffer);

void protocol__decodeMessage(EMessageID eMessageID, const char *pData);


#endif /* PROTOCOL_H_ */
