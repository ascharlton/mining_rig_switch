#include <stdio.h>
#include <wiringPi.h>

#define	LED	7

int main (void)
{
  printf ("Power Switch...\n") ;

  wiringPiSetup () ;
  pinMode (LED, OUTPUT) ;
  {
    digitalWrite (LED, HIGH) ;	// On
    delay (1000) ;		
    digitalWrite (LED, LOW) ;	// Off
    delay (5000) ;
  }
  return 0 ;
}
