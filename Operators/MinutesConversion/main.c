#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Declare Variables
    int minutes = 0;
    double years = 0.0;
    double minutesInYear = 0;

    printf("Please enter the number of minutes (must be a whole number)\n");
    // User input of minutes

    scanf("%d", &minutes);
    printf("\nThe number of minutes is %d \n", minutes);


    minutesInYear = (60 * 24 * 365);

    years = minutes / (int) minutesInYear;;



    printf("%d minutes is roughly %f years", minutes, years);
    return 0;
}
