/* A program to determine whether an input character is a letter, and number or neither. */

#include<stdio.h>
#include<ctype.h>

int main(){
  char ch1;
  printf("\nPlease enter a character: ");
  ch1 = getchar();
  if(isalpha(ch1) > 0)
    printf("\nYou've entered an alphabetical character.\n");
  else if(isdigit(ch1) > 0)
    printf("\nYou've entered a numerical character.\n");
  else
    printf("\nYou've entered a character that is not alphanumeric; it is a special character.\n");
  
  return 0;
}
