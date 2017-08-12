/*
 * main.c
 *
 *  Created on: Jul 24, 2017
 *      Author: hor
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "usbdrv.h"

int main(void)
{
	cli();

	usbInit();

	// Set pin 02 as output pin. All other pins remain input pins.
	DDRB = (1<<DDB2);
	// Switch the pull-ups of the input pins on. Switch pin 02 off.
	PORTB = ~(1<<PB2);


    while (1)
    {
    	// wait 0.25 seconds
    	_delay_ms (250);

    	// Toggle port 02
    	PORTB ^= (1<<PB2);

    }

    return (1);	// should never happen
}

// Until I understand that stuff better just return USB_NO_MSG as indicated by usbdrv.h :)
usbMsgLen_t usbFunctionSetup(uchar data[8]) {
	return USB_NO_MSG;
}
