#include <stdio.h>

int main()
{
    double temp;

    printf("What is the temperature in Celcius?");
    scanf("%lf",&temp);

    double newtemp=(temp*1.8)+32;

    printf("The temperature in Farrenheit is %.0f",newtemp);

    return 0;
}
