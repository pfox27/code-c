/* This program will allow the user to input their name and will then output their name in reverse. */

#include <stdio.h>
#include <string.h>


int main(){

	char name[20];
	printf("Please enter your full name\n");
	scanf("%[^\n]", name);
	//printf("Hello %s \n", name);
	size_t length = strlen(name);
	for(int count=length; count=0; count--){  /* A loop to reverse all the characters in the name string */
		char character = name[count];
		printf("Your name reversed is %d", character);
		}

		return 0;
}
