/* A program that outputs characters typed to the screen, using getchar and putchar. */

#include<stdio.h>
#include<stdlib.h>

int main(void){
  int c;
  c = getchar();
  while(c != EOF){
    putchar(c);
    c = getchar();
  }
  return 0;
}
