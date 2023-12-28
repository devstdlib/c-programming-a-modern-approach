#include <stdio.h>

int main(void)
{
    int number, first_digit, second_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first_digit = number % 10;
    second_digit = number / 10;

    printf("%d%d",first_digit,second_digit);

    return 0;
}