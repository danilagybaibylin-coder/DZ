#include <stdio.h>
int main (void)
{
    int original_num, num;
    int sum = 0;

    printf("Введите целое положительное число для проверки: ");
    if (scanf("%d", &num) != 1 || num <= 0) 
    {
        printf ("Ошибка: введите положительное целое число.\n");
        return 1;
    }
    
    original_num = num;
    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += (digit * digit *digit);
        temp /= 10;
    }
    if (sum == original_num) 
    {
        printf("Число %d ЯВЛЯЕТСЯ числом Армстронга.\n");
    }
    else
    {
        printf("Число %d НЕ ЯВЛЯЕТСЯ числом Армстронга.\n");
    }
    return 0;
}