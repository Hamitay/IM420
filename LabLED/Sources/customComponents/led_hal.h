/* File description: Header File constaing the methods to initialize */
/*					 and use the board RGB LED                       */
/*                                                                   */
/* Author name:      Henrique Amitay				                 */
/* Creation date:    29mar2017                                       */
/* Revision date:    29mar2017                                       */
/* ***************************************************************** */


#ifndef SOURCES_CUSTOMCOMPONENTS_LED_HAL_H_
#define SOURCES_CUSTOMCOMPONENTS_LED_HAL_H_

/*Colors definitions*/
#define BLUE  	0b001
#define GREEN 	0b010
#define LBLUE   0b011
#define RED   	0b100
#define PINK	0b101
#define YELLOW	0b110
#define WHITE   0b111

/* ************************************************** */
/* Method name: 	   led_setLed()		              */
/* Method description: Set the RGB on a given color   */
/* Input params:	   int iColor: which of the nine  */
/*					   possible colors to light       */
/* Outpu params:	   n/a 							  */
/* ************************************************** */
void led_setLed(int iColor);

/* ************************************************** */
/* Method name: 	   led_clearLed()	              */
/* Method description: Clears the RGB LED ports 	  */
/* Input params:	   int iColor: which of the nine  */
/*					   possible colors to turn off    */
/* Outpu params:	   n/a 							  */
/* ************************************************** */
void led_clearLed(int iColor);


#endif /* SOURCES_CUSTOMCOMPONENTS_LED_HAL_H_ */
