﻿ /********************************************************************************************************************
 * FILE DESCRIPTION 
 * -----------------------------------------------------------------------------------------------------------------*/
/**        \LED.h   
 *         \  
 *
 *         
 *
 ********************************************************************************************************************/
#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
/********************************************************************************************************************
 *    LOCAL MACROS CONTANTS/FUNTIONS
 ********************************************************************************************************************/
#define LED0                     0
#define LED1                     1
#define LED2                     2
 
 
/********************************************************************************************************************
 *    GLOBAL FUNCTION PROTOTYPES
 ********************************************************************************************************************/
 void LED_INIT(u8 LED_Num);
 void LED_ON(u8 LED_Num);
 void LED_OFF(u8 LED_Num);
 void LED_Toggle(u8 LED_Num);
 
 
 
 
 
 /********************************************************************************************************************
 *   \Syntax                  :  void LED_Init(void)
 *   \Description             :  
 *
 *   \Sync\Async              :  Synchronous
 *   \Reentrancy              :  Non Reentrant
 *   \Parameters (in)         :  Parameter Name  Parameter Description
 *   \Parameters (out)        :  None
 *   \Return value            :  Std_ReturnType  E_OK
 *                                               E_NOT_OK
 ********************************************************************************************************************/
 
 #endif
 /********************************************************************************************************************
 *    END OF FILE: LED_INTERFACE.h
 ********************************************************************************************************************/