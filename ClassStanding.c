/* A program to output a student's standing when a percentage grade is entered. */

#include<stdio.h>

int main(){
  int percentage;

  printf("\nPlease enter the percentage grade: \n");
  scanf("%d", &percentage);

  if(percentage >= 80)
    printf("Grade is First Class.\n");
  else if((percentage >= 60) && (percentage < 80))
    printf("Grade is Second Class.\n");
  else if((percentage >= 50) && (percentage < 60))
    printf("Grade is Third Class.\n");
  else
    printf("Grade is not a passing grade.\n");

  return 0;
}
