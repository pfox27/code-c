#include<stdio.h>
#include<string.h>

int main(){
	char name[30];
	char ReverseName[30];
	printf("\n");
	printf("Hello, please enter your full name: \n");


	gets (name);
	printf("Hi %s \n", name);

	int length = strlen(name);
	printf("Your name in reverse is: \n");

	for(int i=0; i<=length; i++){


		int ReverseLength = length - i;


		printf("%c", name[ReverseLength]);

	}	




	printf("\n");
	return 0;
}







