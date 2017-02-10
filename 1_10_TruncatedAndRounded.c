#include <stdio.h>

int main ()
{
    float A,B,D;
    int C;

    printf("Enter a float number: ");
    scanf("%f",&A);

    C=(A*10);
    D=C;
    B=(D/10);

    printf("Your number trunkated is %.1f, and your number rounded to one decimal place is %.1f",B,A);

    return 0;
}

