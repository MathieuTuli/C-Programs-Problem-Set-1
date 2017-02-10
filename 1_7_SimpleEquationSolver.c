#include <stdio.h>

int main()
{
    double x,y;

    printf("Solving for y=4x +3, input a value of x: ");
    scanf("%lf",&x);

    y=(4*x)+3;

    printf("y=%.2f",y);

    return 0;
}
