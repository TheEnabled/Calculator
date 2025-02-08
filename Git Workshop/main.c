#include <stdio.h>
#include "operations.h"


void inputnumbers(float *firstnum, float *secondnum)
{
    printf("Enter first num: ");
    scanf("%f", firstnum);
    printf("Enter second num: ");
    scanf("%f", secondnum);
}

int main()
{
    float firstnum, secondnum, ans;

    inputnumbers(&firstnum, &secondnum);
    ans = Addition(firstnum, secondnum);
	
	printf("The answer is: %.2f", ans);
    return 0;
}