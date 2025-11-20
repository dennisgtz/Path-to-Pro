#include <stdio.h>

int main(void)
{
    int i;
    i = 5;
    while (i > 0)
    {
    printf("T minus %d and counting\n", i);
    i--;  //or can be written as printf("T minus %d and counting\n", i--)
    }

    return 0;
}