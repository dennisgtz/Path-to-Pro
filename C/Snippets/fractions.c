/*adding to fractions*/
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, num_sum, denom_sum;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    num_sum = num1 * denom2 + num2 * denom1;
    denom_sum = denom2 * denom1;

    printf("sum of two factions is %d/%d\n: ", num_sum, denom_sum);

    return 0;
}