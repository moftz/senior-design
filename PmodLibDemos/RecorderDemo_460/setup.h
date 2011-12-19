/************************************************************************/
/*																		*/
/*	setup.h	--	contains function prototypes for the RecorderDemo for	*/
/*				the Cerebot 32MX4										*/
/************************************************************************/
/*	Author: 	Ross Kristof											*/
/*	Copyright (C) 2011 Ross Kristof										*/
/************************************************************************/
/*  Module Description: 												*/
/*  The RecorderDemo contains a sample project that demonstrates the	*/
/*	use of the PmodDA2, PmodMIC and BufferLib libraries included		*/
/*	in the PmodLib Library												*/
/*																		*/
/************************************************************************/
/*  Revision History:													*/
/*																		*/
/* <12/09/11>(RossK): Created											*/
/*																		*/
/************************************************************************/

#ifndef SETUP_H
#define SETUP_H

/* ------------------------------------------------------------ */
/*				Include File Definitions						*/
/* ------------------------------------------------------------ */
#include <stdint.h>
#include <plib.h>
#include <pmodlib.h>

/* ------------------------------------------------------------ */
/*				Local Type Definitions							*/
/* ------------------------------------------------------------ */
#define SYSTEM_CLOCK 80000000L  // system clock speed (8 MHz Crystal/ FPLLIDIV * FPLLMUL / FPLLODIV)
#define PB_CLOCK (SYSTEM_CLOCK/2) // peripheral bus clock
#define PMOD_DA2_BITRATE 20000000 // 20Mhz bit rate for PmodDA2
#define PMOD_MIC_BITRATE 12500000 // 12.5Mhz bit rate for PmodMIC
#define PMOD_DA2_SPI SPI_CHANNEL2
#define PMOD_MIC_SPI SPI_CHANNEL1

/* ------------------------------------------------------------ */
/*				Global Variables								*/
/* ------------------------------------------------------------ */
volatile uint16_t InputSound;
volatile uint16_t OutputSound;

/* ------------------------------------------------------------ */
/*				Forward Declarations							*/
/* ------------------------------------------------------------ */
uint8_t RecorderInit(uint8_t BufferCount, uint16_t BufferSize);
uint8_t HandleBTN1(uint8_t action);
uint8_t HandleBTN2(uint8_t action);

#endif