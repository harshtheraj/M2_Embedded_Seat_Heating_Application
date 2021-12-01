
void Activity1()
{
    DDRD &= ~(1<<PD2); //input pin Port D pin 2 (clear bit)
    DDRD &= ~(1<<PD4);  //input pin Port D pin 4 (clear bit)

    PORTD |= (1<<PD2);  //set bit
    PORTD |= (1<<PD4);  //set bit

    DDRD |= (1<<PD3);   //output pin Port D pin 3(set bit)

   if ((!(PIND & (1<<PD2))) & (!(PIND & (1<<PD4))))
    {
        LED_ON;  //TURN ON LED
    }

    else
    {
        LED_OFF; //TURN OFF LED
    }
}
