#include <stdio.h>
#define TAX (5.0f/100.0f * amount)

int main()
{
    int amount, total;
    printf("Enter an amount to get total with tax: ");
    scanf("%d", &amount);
    total = amount + TAX;
    printf("Amount with tax: %d\n", total);

    return 0;
}
