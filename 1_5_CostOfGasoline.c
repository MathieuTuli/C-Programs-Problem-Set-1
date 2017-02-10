#include <stdio.h>

int main ()
{
    double far, efficiency, cost, total;                                       //designating variables

    printf("How many kilometres are you traveling?: ");
    scanf("%lf",&far);                                                   //user input for how far they travel

    printf("What is the fuel efficiency of your car in litres/100km: ");
    scanf("%lf",&efficiency);                                           //user input for fuel efficiency

    printf("What is the cost of gasoline in cents/litre: ");
    scanf("%lf",&cost);                                                 //user input for cost of gasoline

    total=(far/100.)*efficiency*(cost/100.);                         //arthmetic opertaions for calculating price

    printf("The total cost is $%.2f",total);

    return 0;
}


