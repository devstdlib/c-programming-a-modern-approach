#include <stdio.h>

int main(void)
{
    int gsl_prefix;
    int group_identifier;
    int publisher_code;
    int item_number;
    int check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsl_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("GSl prefix: %d\n", gsl_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number : %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}