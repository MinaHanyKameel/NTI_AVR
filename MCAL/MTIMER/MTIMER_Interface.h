/*
 * MTIMER_Interface.h
 *
 *  Created on: Nov 18, 2021
 *      Author: Mina-Ryad
 */

#ifndef MCAL_MTIMER_MTIMER_INTERFACE_H_
#define MCAL_MTIMER_MTIMER_INTERFACE_H_

/*-----------------------------------------------------------------------------------*/
/*-------------------------------------- TIMER 0 ------------------------------------*/
/*-----------------------------------------------------------------------------------*/

/*******************************/
/*** Timer 0 Initialization ****/
/*******************************/
void MTIMER0_VidInit(void);

/*******************************/
/*** Set Preload Function ******/
/*******************************/
void MTIMER0_VidSetPreload(u8 Copy_u8Preload);

/*********************************/
/*** Set CTC Value Function ******/
/*********************************/
void MTIMER0_VidSetCTCValue(u8 Copy_u8SetCTCValue);

/*********************************/
/****** CTC Set Call Back ********/
/*********************************/
void MTIMER0_VidCTC_SetCallBack(void(*Copy_VidCallBack)(void));

/*********************************/
/**** Over Flow Set Call Back ****/
/*********************************/
void MTIMER0_VidOverFlow_SetCallBack(void(*Copy_VidCallBack)(void));


#endif /* MCAL_MTIMER_MTIMER_INTERFACE_H_ */
