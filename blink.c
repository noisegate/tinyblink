//dont change anything, this is a working example
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//set bit 0 in register B to output
	DDRB |= 1 << DDB0;
		
	for (;;){
		PORTB ^= 1 << PB0;
		_delay_ms(500);
	}
	return 0;
}
