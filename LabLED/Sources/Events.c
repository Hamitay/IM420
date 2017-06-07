/* ###################################################################
**     Filename    : Events.c
**     Project     : LabLED
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-04-19, 14:56, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"
#include "os_tasks.h"
#include "customComponents/led_hal.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */
void pitTimer1_IRQHandler(void)
{
  /* Clear interrupt flag.*/
  PIT_HAL_ClearIntFlag(g_pitBase[FSL_PITTIMER1], FSL_PITTIMER1_CHANNEL);
  /* Write your code here ... */
  //char cInput = debug_getchar();


  debug_printf("SCHE_IM420:");

  //Get command
  char cInput = debug_getchar();

  switch(cInput) {

  case 'p':
	  debug_printf("Pausing tasks...\n\r");
	  vTaskSuspendAll();
	  break;
  case 's':
	  debug_printf("Task status:\n\r");
	  //Suspends the tasks
	  vTaskSuspendAll();
	  //Get tasks state
	  int iNumberOfTasks = uxTaskGetNumberOfTasks();
	  TaskStats_t stats[iNumberOfTasks];
	  uxTaskGetSystemState(stats,iNumberOfTasks,NULL);
	  //Now prints all the stats
	  debug_printf("Sucess!");
	  xTaskResumeAll();
	  break;
  case'r':
	  debug_printf("Resuming tasks...\n\r");
	  xTaskResumeAll();
	  break;
  default:
	  debug_printf("ERROR: Unknown command \n\r");
	  break;
  }

}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
