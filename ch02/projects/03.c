/* 03.c computes -- the volume of a sphere */

#include <stdio.h>

int main(void)
{
    float pi = 3.14159;
    float r;
    float volume;

    printf("Enter radius: ");
    scanf("%f", &r);

    volume = (4.0f/3.0f) * pi * (r * r * r);
    printf("Volume: %.2f", volume);

    return 0;
}