/* This is a C program that tests the user's ability to multiply two numbers from 1 x 1 up to 12 x 12
****************************************************************************************************
**************************************  TIMES TABLES  **********************************************
****************************************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    printf("\n");
    printf("Welcome to TIMES TABLES!!!!!! \n");
    printf("**************************** \n");
    printf("\n");

    srand(time(0));
    int i=1;
    int score = 0;
    int result, response;
    double factor1, factor2;

    for(int i = 1; i < 11; i++){

    factor1 = rand() %12 + 1;
    factor2 = rand() %12 + 1;
    result = factor1 * factor2;

    printf("%.0f x %.0f = \n", factor1, factor2);
    scanf("%d", &response);

    if (response == result)
        score++;

}

printf("Your score is %d/10. \n" , score);

return (0);
}
