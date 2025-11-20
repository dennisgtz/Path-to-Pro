/*
program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills
*/

#include <stdio.h>

int main(void)
{
    int bills_20, bills_10, bills_5, bills_1, change;
    
    printf("How much money do you need change for: ");
    scanf("%d", &change);

    bills_20 = change / 20;
    bills_10 = (change - (20 * bills_20)) / 10;
    bills_5 = (change - ((20 * bills_20) + (10 * bills_10))) / 5;
    bills_1 = (change - ((20 * bills_20) + (10 * bills_10) + (5 * bills_5))) / 1;

    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);

    return 0;
}