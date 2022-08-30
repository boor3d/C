#include <stdio.h>
#include <stdlib.h>


// Display byte size of basic data types


int main()
{
    printf("Variables of type char occupy %u \n", sizeof(char));
    printf("Variables of type short occupy %u \n", sizeof(short));
    printf("Variables of type int occupy %u \n", sizeof(int));
    printf("Variables of type double occupy %u \n", sizeof(double));
    printf("Variables of type long occupy %u \n", sizeof(long));
    printf("Variables of type long long occupy %u \n", sizeof(long long));
    printf("Variables of type float occupy %u \n", sizeof(float));
    printf("Variables of type long double occupy %u", sizeof(long double));

    return 0;
}
