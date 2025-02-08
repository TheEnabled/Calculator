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

    printf("What operation would you like to use: \n");
    printf("1. Addition, 2. Subtraction, 3. Multiplication, 4. Division\n" );
    printf("Your choice: ");

    int choice;

    scanf("%d", &choice);

    switch(choice)
    {
        case 1: 
            ans = Addition(firstnum, secondnum);
            break;
        case 2: 
            ans = Subtraction(firstnum, secondnum);
            break;
        case 3: 
            ans = Multiplication(firstnum, secondnum);
            break;
        case 4: 
            ans = Division(firstnum, secondnum);
            break; 
    }

    printf("The final answer is: %.2f", ans);

    return 0;
}