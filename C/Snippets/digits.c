 /* Calculates the number of digits in an integer */
#include <stdio.h>

int main(void){
    int digits = 0, n; //declares 2 variables i.e digits and n
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n); //reads an integer value from user and stores it in n

    do{  //executes the loop at least once before checking the condition
        n /= 10;  //removes the last digit from n since it is an integer division i.e it truncates the decimal part
        digits++; //increments the digit count for every number stripped off
    }while(n > 0); //continues looping until n becomes 0 or negative

    printf("The number has %d digit(s).\n", digits);

    return 0;
}