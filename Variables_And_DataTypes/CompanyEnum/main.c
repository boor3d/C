#include <stdio.h>
#include <stdlib.h>

int main()
{

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company company1, company2, company3;

    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;

    printf("The value of Xerox is: %d\n", company1);
    printf("The value of Google is: %d\n", company2);
    printf("The value of Ebay is: %d\n", company3);

    return 0;
}
