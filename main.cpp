#include <stdint.h>
#define __AVR_ATmega328p__
#include <avr/io.h>
#include <avr/interrupt.h>
/* *************************************************************************************************************************** */
//                                                settings        
/* *************************************************************************************************************************** */
/* *************************************************************************************************************************** */

#ifndef F_CPU
    #define F_CPU 16000000UL // 16 MHz
#endif
#define buffSize 100
//#define IPADRESS 10,0,0,222
#define IPADRESS 192,168,2,222

#define PORTNO 7010
#define daisyPots 4 /*amound of daisy chained pots*/

int main(void){
	while(1){

	}
	return 0;
}
