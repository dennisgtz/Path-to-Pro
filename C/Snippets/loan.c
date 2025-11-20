/*
A program that calculates the remaining balance on a loan after the first, second, and
third monthly payments
*/
#include <stdio.h>

int main(void)
{
    float loan, rate, balance, monthly, month_1, month_2, month_3, monthly_rate;

    printf("Enter the loan amount: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    monthly_rate = rate / 100.0 / 12.0;
    balance = loan;

    month_1 = balance + (balance * monthly_rate) - monthly;
    month_2 = month_1 + (balance * monthly_rate) - monthly;
    month_3 = month_2 + (balance * monthly_rate) - monthly;


    printf("Balance remaining after first payment: $%.2f\n", month_1);
    printf("Balance remaining after second payment: $%.2f\n", month_2);
    printf("Balance remaining after third payment: $%.2f\n", month_3);

    return 0;

}