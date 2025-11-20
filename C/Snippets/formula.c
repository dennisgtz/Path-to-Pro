/*
This program takes user radius input to calculate the volume of the sphere
*/

#include <stdio.h>

#define PI (22.0f / 7.0f)
#define FRACTION (4.0f / 3.0f)


int main()
{
    int radius;
    float volume;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    volume = FRACTION * PI * radius * radius * radius;
    printf("Volume of sphere(cubic meters): %f\n", volume);

    return 0;
}
