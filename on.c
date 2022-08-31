#include <stdio.h>
#include <wiringPi.h>

// LED Pin - wiringPi pin 0 is BCM_GPIO 17.

#define	LED	7

int main (void)
{
  printf ("Raspberry Pi blink\n") ;

  wiringPiSetup () ;
  pinMode (LED, OUTPUT) ;
  {
    digitalWrite (LED, HIGH) ;	// On
    delay (1000) ;		// mS
    digitalWrite (LED, LOW) ;	// Off
    delay (5000) ;
  }
  return 0 ;
}
