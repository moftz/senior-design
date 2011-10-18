/************************************************************************/
/*                                                                      */
/*  This file contains functions declaration for use with the  Digilent */
/*  PMODSF on Digilent Pic32 based boards                               */
/*                                                                      */
/************************************************************************/
/*	Author: 	Ryan Hoffman											*/
/*	                                									*/
/************************************************************************/
/*  Module Description: 												*/
/*                                                                      */
/*  This file contains definitions for functions for testing            */
/*  the  Digilent PMODSF on Digilent Pic32 based boards                 */
/************************************************************************/
/*  Revision History:													*/
/*                                                                      */
/*  5/5/2011(RyanH):                                                    */
/*                                                                      */
/************************************************************************/

#ifndef _PMODSF_TEST_DRIVER_H_
#define _PMODSF_TEST_DRIVER_H_
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <peripheral/spi.h>
#include <peripheral/ports.h>	// Enable port pins for input or output 
#include <peripheral/uart.h>	// Enable UARTs 1 and 2 for reception and transmission of serial data
#include <peripheral/system.h>	// Set up the system and perihperal clocks for best performance
#include "./PmodSF/pmodsf.h"
#include "./TestHarness/Common/test_harness_common.h"

#define PMODSF_16_SECTOR_SIZE  0x10000
#define PMODSF_128_SECTOR_SIZE 0x40000 

#define PMODSF_128_MFID 0x202018
#define PMODSF_16_MFID 0x202015
#define PMODSF_16_RES_SIG 0x14


static uint8_t pmodFlashCapacity = PMODSF_16_MBIT;

uint8_t UNIT_spfPMOD_DPD_Release(uint8_t chn, UART_MODULE uartID);
uint8_t UNIT_spfPMOD_ReadID(uint8_t chn, UART_MODULE uartID);
uint8_t UNIT_sfPMODF_ReadStatusReg(uint8_t chn, UART_MODULE uartID);
uint8_t UNIT_sfPMODF_ClearSetReadWriteStatusRegBits(uint8_t chn, UART_MODULE uartID);
uint8_t UNIT_sfPMODF_PageProgram(uint8_t chn, UART_MODULE uartID);
uint8_t UNIT_sfPMODF_BulkErase(uint8_t chn, UART_MODULE uartID);
uint8_t UNIT_sfPMODF_SectorErase(uint8_t chn, UART_MODULE uartID);
void fnSetPmodFlashCapacity(uint8_t chn,UART_MODULE uart);
void fnInitPmodSF(SpiChannel chn,uint32_t pbClock,uint32_t bitRate,UART_MODULE uart);
#endif

