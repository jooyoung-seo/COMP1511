/*
z5371300
James Seo
*/

#include <stdio.h>

int main(void)
{
    double dividend;
    double divisor;

    printf("Enter the dividend: ");
    scanf("%lf", &dividend);

    printf("Enter the divisor: ");
    scanf("%lf", &divisor);

    if (divisor == 0)
    {
        printf("Don't be silly!");
        return 0;
    }
    else
    {
        double soln = dividend / divisor;
        printf("%lf divided by %lf", dividend, divisor);
        printf("To the nearest integer: %.lf\n", soln);
        printf("To 1 decimal place: %.1lf\n", soln);
        printf("To 5 decimal places: %.5f\n", soln);
        printf("To 20 decimal places: %.20lf\n", soln);
    }
}