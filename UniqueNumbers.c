/* A program to generate a unique list of random numbers */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n = 0;
	int RandomNumber;
	int UniqueNumber[20];
	UniqueNumber[0] = 0;
	time_t t;

	printf("Please enter a value from 1-20 to indicate the number of random numbers between 1 and 40 you'd like to generate:\n ");
	scanf("%d", &n);
	srand((unsigned) time(&t));

	for(int i = 0; i < n; i++){
		RandomNumber = rand() % 40 + 1;

			for(int c = 0; c <= i; c++){
				
				printf("RandomNumber is: %d \n", RandomNumber);
				printf("UniqueNumber[c] at index %d is %d \n", c, UniqueNumber[c]); 

				if(RandomNumber == UniqueNumber[c - 1]){
					printf("Number is not unique, trying again. \n");
					i--;
				}
				else{
					printf("RandomNumber is: %d \n", RandomNumber);
					printf("... and it's unique \n");
					UniqueNumber[i] = RandomNumber;
				}
				}
			}
				printf("The list of unique random numbers is: \n");
				
			for(int counter = 0; counter < n; counter++){
				printf("%d, ", UniqueNumber[counter]);
	}
		return 0;	
	}












