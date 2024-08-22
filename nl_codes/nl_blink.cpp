// dit  is een example code om de wiringpi code te runnen met cmake.
#include <wiringPi.h> // Include de WiringPi library!
#include <iostream> // include  de standaard c++ input output library.

int led = 14; // is de  pin nummer voor de led pin.
int main()
{
  // gebruitkt de BCM nummering van de GPIOs om toegang te krijgen van registers.
  wiringPiSetupGpio();

  // zet pin 14 naar output pin: 
 
pinMode(led, OUTPUT);
  
 

while (1)
{


// Nu gaat de led aan en uit in een while loop.

// Nu gaat het aan. 
   digitalWrite(led,HIGH);
   std::cout <<"het is aan "<<'\n';
   // vertraagt 2 sec.
   delay(2000);
   // Nu gaat het uit .
   digitalWrite(led,LOW);
   std::cout <<"it Is off"<<'\n';
    // vertraagt 2 sec.
   delay(2000);
}}
