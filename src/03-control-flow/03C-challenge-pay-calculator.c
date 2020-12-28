#include <stdio.h>

// constants
#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main()
{
    // declare variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    // From the terminal, run as: ./03C-challenge-pay-calculator 45
    printf("Please enter the number of hours worked this week: ");

    scanf("%d", &hours);

    // calculate gross pay
    if (hours <= 40)
        grossPay = hours * PAYRATE;
    else
    {
        grossPay = 40 * PAYRATE;
        double overtimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overtimePay;
    }

    // calculate taxes
    if (grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }
    else
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }

    // calculate net pay
    netPay = grossPay - taxes;

    // output results
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}