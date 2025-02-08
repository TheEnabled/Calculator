#include <stdio.h>
#include "operations.h"


void inputnumbers(float *firstnum, float *secondnum)
{
    printf("Enter first num: ");
    scanf("%f", firstnum);
    printf("Enter second num: ");
    scnaf("%f", secondnum);
}

int main()
{
    float firstnum, secondnum, ans;

    inputnumbers(&firstnum, &secondnum);
    ans = Addition(&firstnum, &secondnum);

    return 0;
}