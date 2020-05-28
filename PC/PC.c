/*
 * PC.c
 *
 * Created: 24/05/2020 4:51:36 AM
 *  Author: M
 */ 


#include "LCD.h"
#include "UART.h"
uint8_t x;
int main(void)
{
	Uart_init();
	LCD_init();
	sei();
    while(1)
    {

    }
}
ISR(USART_RXC_vect){
 x=UDR;
 LCD_write_char(x);
}