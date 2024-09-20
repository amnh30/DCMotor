#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <avr/delay.h>
#define C_CPU 8000000UL

/* MCAL Layer Include */
#include "MDIO/MDIO_Interface.h"


int main(void)
{
u8 Local_u8Pressed = 1;
    // Initialize the LCD
    MDIO_IntialPins();
while(1){
MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_HIGH);
MDIO_u8GetPinValue(MDIO_PORTD,MDIO_PIN_3,&Local_u8Pressed);
_delay_ms(200);
while(0 == Local_u8Pressed){
	MDIO_u8GetPinValue(MDIO_PORTD,MDIO_PIN_3,&Local_u8Pressed);
	MDIO_u8SetPinValue(MDIO_PORTD,MDIO_PIN_6,MDIO_LOW);

}
Local_u8Pressed = 1;

}

}
