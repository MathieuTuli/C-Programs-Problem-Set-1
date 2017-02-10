#include <stdio.h>

int main ()
{
    int A, i, j, k;

    printf("Type an integer less than 1000: ");
    scanf("%d",&A);

    i=A%10;
    j=A/100;
    k=(A/10)%10;

    printf("Your new integer is %d%d%d",i,k,j);

    return 0;
}

