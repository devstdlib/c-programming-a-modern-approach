/* loan - payment */

#include <stdio.h>

int main(void)
{
    float loan;
    float interest_rate;
    float monthly_payment;
    float monthly_interest_rate;
    float balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = 1 + ((interest_rate / 100) / 12);
    
    balance = (loan * monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = (balance * monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = (balance * monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}