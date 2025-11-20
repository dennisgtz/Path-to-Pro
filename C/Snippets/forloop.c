#include <stdio.h>

int main(void)
{
    int i;
    for(i=10; i>0; i--)
    printf("Tminus %d second to lift off\n", i);

    do{
    printf("Lift of started");}
    while(i = 0);

    return 0;
}