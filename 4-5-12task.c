#include <stdio.h>
double kg_to_lb(double kg) 
{
    const double CONVERSION_FACTOR = 2.205;
    return kg * CONVERSION_FACTOR;
}
int main(void)
{
    double value;
    printf("Введите значение в киллограммах:\n");
    while (scanf("%lf", &value) == 1)
    {
        double result = kg_to_lb(value);
        printf("%.2f кг = %.2f фунтов\n\n", value, result);
        printf("Введите следующее значение: ");
    }
    printf("\nЗавершение программы.\n");
    return 0;
}