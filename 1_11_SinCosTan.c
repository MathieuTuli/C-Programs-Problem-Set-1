#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, A1, A2, A3;

    printf("Enter an angle in degrees: ");
    scanf("%lf",&A);

    B=(A*3.14159)/180;
    A1=sin(B);
    A2=cos(B);
    A3=tan(B);

    printf("Sine(%.1f)=%lf\n\n",A,A1);
    printf("Cosine(%.1f)=%lf\n\n",A,A2);
    printf("Tangent(%.1f)=%lf\n\n",A,A3);

    return 0;
}
