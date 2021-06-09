/* A program to compute the greatest common divisor of two given integers */

#include <stdio.h>
#include <math.h>

int main (void){

int number1, number2, gcd, counter;
int modValue1, modValue2;

//int counter = 0;

printf("Please enter the first number: \n");
scanf("%d", &number1);

printf("Please enter the second number: \n");
scanf("%d", &number2);

if(number1 < number2){

for(counter =1; counter <= number1; counter++){

modValue1 = number1%counter;
modValue2 = number2%counter;
printf("Modulus 1 is %d \n", modValue1);
printf("Modulus 2 is %d \n", modValue2);

if (modValue1 == 0 && modValue2 == 0){
	gcd = counter;
	//printf("Counter in loop 1 is %d \n", counter);
}
}	
 
}

else {

for(counter =1; counter <= number2; counter++){

modValue1 = number1%counter;
modValue2 = number2%counter;
printf("Modulus 1 is %d \n", modValue1);
printf("Modulus 2 is %d \n", modValue2);

if (modValue1 == 0 && modValue2 == 0){
	gcd = counter;
	//printf("Counter in loop 2 is %d \n", counter);
}
}	
 
}
printf("The greatest common divisor for the integers %d and %d is %d \n", number1, number2, gcd);

    return 0;
}
