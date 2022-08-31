#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours = 0;
    float basePay = 12.00;
    int overtimeCut = 40;
    float overtimePay = basePay * 1.5;
    double pay = 0.00;
    int hoursOver = 0;
    float taxes = 0;
    float tax300 = .15;
    float tax450 = .2;
    float taxHigh = .25;
    float netPay = 0.00;

    printf("Enter the number of hours you worked this week: ");
    scanf("%i", &hours);

    if (hours <= overtimeCut)
    {
        pay = basePay * hours;
    }
    else
    {
        hoursOver = hours - overtimeCut;
        pay = (basePay * overtimeCut) + (hoursOver * overtimePay);
    }

    printf("\nYour gross pay is %.2f: \n", pay);

    if (pay <= 300.00)
    {
        taxes = (pay * tax300);
    }
    else if (pay <= 450.00)
    {
        taxes = (300 * tax300);
        taxes += (pay - 300) * tax450;
    }
    else
    {
        taxes = (300 * tax300);
        taxes += (450 - 300) * tax450;
        taxes += (pay - 450) * taxHigh;
    }

    netPay = pay - taxes;

    printf("%.2f\n", pay);
    printf("%.2f\n", taxes);
    printf("%.2f\n", netPay);

    return 0;
}
