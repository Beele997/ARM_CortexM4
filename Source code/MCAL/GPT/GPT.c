 /********************************************************************************************************************
 * FILE DESCRIPTION 
 * -----------------------------------------------------------------------------------------------------------------*/
/**        \GPT.c   
 *         \General Purpose Timer Driver   
 *
 *         \The driver configure all MCU Timers  
 *          Enable and Initialize GPT
 *
 ********************************************************************************************************************/
 
/********************************************************************************************************************
 *    INCLUDES
 ********************************************************************************************************************/
 
 #include "Std_types.h"
 #include "GPT.h"
 #include "Mcu_HW.h"
 
/********************************************************************************************************************
 *    LOCAL MACROS CONTANTS/FUNTIONS
 ********************************************************************************************************************/
 void(*GPT_POINTER_CALLBACK_T0)(void)=NULL;
 void(*GPT_POINTER_CALLBACK_T1)(void)=NULL;
/********************************************************************************************************************
 *    LOCAL DATA
 ********************************************************************************************************************/
 
/********************************************************************************************************************
 *    GLOBAL DATA
 ********************************************************************************************************************/
 
/********************************************************************************************************************
 *    LOCAL FUNCTION PROTOTYPES
 ********************************************************************************************************************/

 
 
/********************************************************************************************************************
 *    LOCAL FUNCTION
 ********************************************************************************************************************/
 
 
/********************************************************************************************************************
 *    GLOBAL FUNCTION
 ********************************************************************************************************************/
 
 
 
 
 
 
 /********************************************************************************************************************
 *   \Syntax                  :  void GPT_Init(void)
 *   \Description             :  Intialization GPT Module by parsing the configuration
 *                               
 *
 *   \Sync\Async              :  Synchronous
 *   \Reentrancy              :  Non Reentrant
 *   \Parameters (in)         :  Parameter Name  Parameter Description
 *   \Parameters (out)        :  None
 *   \Return value            :  Std_ReturnType  E_OK
 *                                               E_NOT_OK
 ********************************************************************************************************************/
 void GPT_SetClcRunMode(uint8 GPT_TimerBit,uint8 GPT_TimerType,uint8 GPT_ClcState)
 {
	 switch(GPT_TimerBit)
	 {
		 case  GPT_TIMER_16_32BIT:
		 switch(GPT_TimerType)
		 {
			 case GPT_Timer0:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer1:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer2:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer3:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer4:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer5:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCTIMER,GPT_TimerType);
			 }
			 break;
		 }
		 break;
		 
		 case GPT_TIMER_32_65BIT:
		 switch(GPT_TimerType)
		 {
			 case GPT_Timer0:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer1:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer2:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer3:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer4:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 break;
			 
			 case GPT_Timer5:
			 if(GPT_ClcState==GPT_ENABLE_CLOCK)
			 {
				 SET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 else if(GPT_ClcState==GPT_DISABLE_CLOCK)
			 {
				 RESET_BIT(RCGCWTIMER,GPT_TimerType);
			 }
			 break;
		 }
		 break;
		 
		 default:
		 //Warning
		 break;
	 }
 }
 void GPT_Init(uint8 GPT_TimerBit,uint8 GPT_TimerType,uint32 GPT_CTRL)
 {
	 switch(GPT_TimerBit)
	 {
		 case  GPT_TIMER_16_32BIT:
		 switch(GPT_TimerType)
		 {
			 case GPT_Timer0:
			 if(GPT_CTRL==GPT_ENABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_0_16,8);
				 RESET_BIT(GPTMCTL_0_16,0);
				 
				 GPTMCFG_0_16 = 0x00000000;
				 
				 GPTMTAMR_0_16 = GPT_PERIODIC_MODE;
				 GPTMTBMR_0_16 = GPT_PERIODIC_MODE;
				 
				 GPTMTAILR_0_16 = GPT_COUNTING_TIME0;
				 
				 RESET_BIT(GPTMICR_0_16,0);
				 
				 SET_BIT(GPTMIMR_0_16,4);
				 SET_BIT(GPTMIMR_0_16,11);
				 
				 SET_BIT(GPTMCTL_0_16,8);
				 SET_BIT(GPTMCTL_0_16,0);
			 }
			 break;
			 
			 case GPT_Timer1:
			 if(GPT_CTRL==GPT_ENABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_1_16,8);
				 RESET_BIT(GPTMCTL_1_16,0);
				 
				 GPTMCFG_1_16 = 0x00000000;
				 
				 GPTMTAMR_1_16 = GPT_PERIODIC_MODE;
				 GPTMTBMR_1_16 = GPT_PERIODIC_MODE;
				 
				 GPTMTAILR_0_16= GPT_COUNTING_TIME1; // COUNTING VALUE

				 RESET_BIT(GPTMICR_1_16,0);
								 
				 SET_BIT(GPTMIMR_1_16,4);
				 SET_BIT(GPTMIMR_1_16,11);
				 
				 SET_BIT(GPTMCTL_1_16,8);
				 SET_BIT(GPTMCTL_1_16,0);
				 
				 
			 }
			 break;
			 
			 case GPT_Timer2:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_2_16,8);
				 RESET_BIT(GPTMCTL_2_16,0);
				 GPTMCFG_2_16 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer3:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_3_16,8);
				 RESET_BIT(GPTMCTL_3_16,0);
				 GPTMCFG_3_16 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer4:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_4_16,8);
				 RESET_BIT(GPTMCTL_4_16,0);
				 GPTMCFG_4_16 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer5:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_5_16,8);
				 RESET_BIT(GPTMCTL_5_16,0);
				 GPTMCFG_5_16 = 0x00000000;
			 }
			 break;
		 }
		 break;
		 
		 case GPT_TIMER_32_65BIT:
		 switch(GPT_TimerType)
		 {
			 case GPT_Timer0:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_0_32,8);
				 RESET_BIT(GPTMCTL_0_32,0);
				 GPTMCFG_0_32 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer1:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_1_32,8);
				 RESET_BIT(GPTMCTL_1_32,0);
				 GPTMCFG_1_32 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer2:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_2_32,8);
				 RESET_BIT(GPTMCTL_2_32,0);
				 GPTMCFG_2_32 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer3:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_3_32,8);
				 RESET_BIT(GPTMCTL_3_32,0);
				 GPTMCFG_3_32 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer4:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_4_32,8);
				 RESET_BIT(GPTMCTL_4_32,0);
				 GPTMCFG_4_32 = 0x00000000;
			 }
			 break;
			 
			 case GPT_Timer5:
			 if(GPT_CTRL==GPT_DISABLE_TIMER)
			 {
				 RESET_BIT(GPTMCTL_5_32,8);
				 RESET_BIT(GPTMCTL_5_32,0);
				 GPTMCFG_5_32 = 0x00000000;
			 }
			 break;
		 }
		 break;
		 
		 default:
		 //Warning
		 break;
	 }
	 
 }
 
 void TIMER1A_Handler()
 {
	 if(GET_BIT(GPTMMIS_1_16)==1)
	 {
	 GPT_timer1_SetCallBack();
	 }
	 SET_BIT(GPTMICR_1_16,0);
 }
 
 void TIMER0A_Handler()
 {
	 if(GET_BIT(GPTMMIS_0_16)==1)
	 {
	 GPT_timer0_SetCallBack();
	 }
	 SET_BIT(GPTMICR_0_16,0);
 }
 
 void GPT_timer1_SetCallBack(void(*POINTER_FUNC)(void))
{
	GPT_POINTER_CALLBACK_T1 = POINTER_FUNC;
}

void GPT_timer0_SetCallBack(void(*POINTER_FUNC)(void))
{
	GPT_POINTER_CALLBACK_T0 = POINTER_FUNC;
}
 /********************************************************************************************************************
 *    END OF FILE: GPT.c
 ********************************************************************************************************************/
 
 /*
  16000000Hz
  0 pre
  tick time =0.0624 us
  time till interrupt happens 0.0624 * load value
 
 
 
 */