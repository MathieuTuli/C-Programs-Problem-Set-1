#include <stdio.h>

int main ()
{
    int A,B,C,D,E;

    printf("Enter an integer: ");
    scanf("%d",&A);

    B=A/25;
    C=(A%25)/10;
    D=(A-(25*B)-(10*C))/5;
    E=A-(25*B)-(10*C)-(5*D);

    printf("Quarters: %d Dimes: %d Nickels: %d Pennies: %d: ",B,C,D,E);

    return 0;
}

