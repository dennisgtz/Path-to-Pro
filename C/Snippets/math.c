#include <stdio.h>

int main(void)
{
    int x, function;
    printf("Enter value of x to find value of function: ");
    scanf("%d", &x);
    
    function = (3  * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    printf("Value of function: %d\n", function);

    return 0;
}