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
/* UART0 interrupt handler */
void UART0_IRQHandler(void)
{
	//TO DO:
	//BETTER UNDERSTAND THIS SERIAL INTERRUPT

	//Prints sheel prompt (SCHED_IM420)
	char[] prompt = "SCHED_IM420:";

	//Waits for an char to be put on the stream

	//getthechar
	char cInput;

	switch(cInput) {
		case p:				//Pause all the tasks and the scheduler
			//How to pause all tasks? Can this be easily done with another semaphore?
			//Search for vTaskSuspendAll();
			break;
		case s:				//Show RTOS state
			//Search for all the tasks handlers, maybe a method will give me this
			//With the handlers I can get all the tasks info
			//Print header
			//Print all the tasks info
			break;
		case r:				//Resumes the scheduler
			//Check if the scheduler is paused
			//If not output to user that the scheduler is already on, keep going
			//If it is indeed paused, unpause (how?), the proceeds give feedback to user
			//Search for xTaskResumeAll();
			//Remember to now switch context on this part of the code
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
