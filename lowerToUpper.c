/* A program to change a lower case letter to the upper case equivalent or vice-versa*/

#include <stdio.h>
#include <ctype.h>

char makeupper (char character){
	if (islower(character)){
		printf("Character is lower case \n");
		return toupper (character);
	}
		else if (isupper(character)){
			printf("Character is upper case \n");
			return tolower (character);
		}
		else{
		printf("Character can't be converted \n");
		return character;
		}
	}

int main (void){

char c;

	printf("Enter an upper or lower case letter to be converted: \n");
	scanf("%c", &c);
//	makeupper (c);
	printf("The end result is %c", makeupper(c));

    return 0;
}
