#include <stdio.h>

int main ()
{
    int A, i, j;

    printf("Type an integer: ");
    scanf("%d",&A);

    i=A%10;
    j=A/10;

    printf("Your new integer is %d%d",i,j);

    return 0;
}
