#include "uart.h"
unsigned char string_buffer[100]="Learn-in-depth:<yousef_mossad>";
void main (void)
{
	uart_send_string(string_buffer);
}