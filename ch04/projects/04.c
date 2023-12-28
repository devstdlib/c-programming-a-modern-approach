/*
C Program to convert Decimal number into Octal number. 
Decimal number is a number with base 10 
whereas octal number is a number with base 8. 
Valid decimal numbers are (0-9) whereas valid octal numbers are (0-7). 
In decimal to octal conversion, we divide the decimal number by 8 
and write the remainder in the reverse order to get the equivalent octal number.
*/

#include <stdio.h>

int main(void)
{
    int number;
    int n1, n2, n3, n4, n5;

    printf("Enter a number between 0 abd 32767: ");
    scanf("%d", &number);
    
    n5 = (number % 8);
    n4 = (number / 8) % 8;
    n3 = ((number / 8) / 8) % 8;
    n2 = (((number / 8) / 8) / 8) % 8;
    n1 = ((((number / 8) / 8) / 8) / 8) % 8;

    printf("Octal: %d%d%d%d%d", n1, n2, n3, n4, n5);

    return 0;
}