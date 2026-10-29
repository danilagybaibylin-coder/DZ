//22
#include <stdio.h>

double calc(double a, double b);

int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("Отношение мощностей = %.4lf\n", calc(a, b));
    }
    return 0;
}

double calc(double a, double b)
{
    return (a * a + b * b)/(a * b);
}