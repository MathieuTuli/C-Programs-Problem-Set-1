#include <stdio.h>

int main ()
{
    double cost;
    int amount;

    printf("How much does the item cost?");
    scanf("%lf",&cost);

    printf("How many items?");
    scanf("%d",&amount);

    double total=cost*amount;
    printf("Your total is $ %.2f",cost*amount);

    return 0;
}


