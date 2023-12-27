#include <stdio.h>

int main(void)
{
    int prefix_code;
    int number_partA;
    int number_partB;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &prefix_code, &number_partA, &number_partB);

    printf("You entered %d.%d.%d", prefix_code, number_partA, number_partB);

    return 0;
}