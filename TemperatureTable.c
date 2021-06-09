/* A program that outputs the Fahrenheit-Celcius Temperature Table.  */

#include<stdio.h>
#include<stdlib.h>

int main(){

  int fahrenheit, celcius;

  printf("Fahrenheit --> Celcius \n");
  printf("~~~~~~~~~~~~~~~~~~~~~~ \n");

  for(fahrenheit = 0; fahrenheit < 300; fahrenheit = fahrenheit + 10){
    celcius = (fahrenheit - 32)*5/9;
    printf("%3d            %3d \n", fahrenheit, celcius);
  }

  return 0;
}

    
