/* File description: Header File constaing the methods to initialize */
/*					 and use the board RGB LED                       */
/*                                                                   */
/* Author name:      Henrique Amitay				                 */
/* Creation date:    29mar2017                                       */
/* Revision date:    29mar2017                                       */
/* ***************************************************************** */

#include "led_hal.h"
#include "gpio1.h"

/* ************************************************** */
/* Method name: 	   led_setLed()		              */
/* Method description: Set the RGB on a given color   */
/* Input params:	   int iColor: which of the nine  */
/*					   possible colors to light       */
/* Outpu params:	   n/a 							  */
/* ************************************************** */
void led_setLed(int iColor) {

	//Check which LEDs of the RGB system to turn on
	if (iColor & 0b100) {
		//Turns RED on
		GPIO_DRV_ClearPinOutput(RedLed);
	}

	if (iColor & 0b010) {
		//Turns GREEN on
		GPIO_DRV_ClearPinOutput(GreenLed);

	}

	if (iColor & 0b001) {
		//Turns BLUE on
		GPIO_DRV_ClearPinOutput(BlueLed);

	}
}

/* ************************************************** */
/* Method name: 	   led_clearLed()	              */
/* Method description: Clears the RGB LED ports 	  */
/* Input params:	   int iColor: which of the nine  */
/*					   possible colors to turn off    */
/* Outpu params:	   n/a 							  */
/* ************************************************** */
void led_clearLed(int iColor) {

	//Check which LEDs of the RGB system to turn off
	if (iColor & 0b100) {
		//Turns RED off
		GPIO_DRV_SetPinOutput(RedLed);
	}

	if (iColor & 0b010) {
		//Turns GREEN off
		GPIO_DRV_SetPinOutput(GreenLed);

	}

	if (iColor & 0b001) {
		//Turns BLUE off
		GPIO_DRV_SetPinOutput(BlueLed);

	}

}

