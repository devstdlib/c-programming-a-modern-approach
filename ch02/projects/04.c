/* 04.c -- computes tax included price */

#include <stdio.h>

#define TAX 5.0f

int main(void)
{
    float price;
    float tax_included;

    printf("Enter the product price: ");
    scanf("%f", &price);

    tax_included = price * (1 + (TAX / 100));

    printf("Tax included price: $%.2f", tax_included);

    return 0;
}