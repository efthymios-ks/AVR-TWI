﻿#ifndef TWI_SETTINGS_H_INCLUDED
#define TWI_SETTINGS_H_INCLUDED
/*
||
||  Filename:	 		TWI_Settings.h
||  Title: 			    TWI Driver Settings
||  Author: 			Efthymios Koktsidis
||	Email:				efthymios.ks@gmail.com
||  Compiler:		 	AVR-GCC
||	Description:
||	Settings for the TWI hardware.
||
*/

//----- Configuration -------------//
//SCL Frequency
#define F_SCL				400000UL

//TWI pins
#define TWI_SCL				C, 0
#define TWI_SDA				C, 1
//---------------------------------//
#endif