#include <stdio.h>
#include <stdint.h>
int main (void) 
{
    uint16_t a, b, h;
    printf("Введите три значения (a, b, h) типа uint16_t: ");
    if (scanf("%hu %hu %hu", &a, &b, &h) !=3) 
    {
        printf("Ошибка ввода. Пожалуйста, введите три целых числа.\n");
        return 1;
    }
    float result = (float)(a + b) * h / 2.0f;
    printf("Результат вычисления: %.2f\n\n", result);
    printf("Размеры использованных типов:\n");
    printf("sizeof(uint16_t) = %llu байт(а)\n", (unsigned long long)sizeof(uint16_t));
    printf("sizeof(float) = %llu байт(а)\n", (unsigned long long)sizeof(float));
    printf("sizeof(int) = %llu байт(а)\n", (unsigned long long)sizeof(int));
    return 0;
}