#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare variables
    double base;
    double height;
    double perimeter;
    double area;

    // Set output variables to 0
    perimeter = 0.0;
    area = 0.0;

    // User Inputs
    printf("Please enter the base and height of the rectangle: ");
    scanf("%lf %lf" , &base, &height);

    // Confirm user inputs in terminal
    printf("The base is: %lf\n", base);
    printf("The height is: %lf\n", height);

    // Calculations
    perimeter = (base + height)*2;
    area = (base * height);

    // Output calculations to terminal
    printf("The perimeter is: %.2lf\n", perimeter);
    printf("The area is: %.2lf", area);

    return 0;
}
