/* 02.c computes -- the volume of a sphere with a 10 meter radius */

#include <stdio.h>

int main(void)
{
    float pi = 3.14159;
    int r = 10;
    float volume;

    volume = (4.0f/3.0f) * pi * (r * r * r);
    printf("Volume: %.2f", volume);

    return 0;
}