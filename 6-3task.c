//12
#include <stdio.h>

int main(void)
{
    int num;
    unsigned long palindormes = 0;
    unsigned long others = 0;

    long long sum_palindormes = 0;
    long long sum_others = 0;

    printf("Введите целые числа (для завершения введите 0):\n");

    while (1)
    {
        if (scanf("%d", &num) != 1)
        {
            break;
        }
        if (num == 0)
        {
            break;
        }
        if (num == 0)
        {
            break;
        }
        if (num >= 10 && num <= 99)
        {
            if ((num / 10) == (num % 10))
            {
                palindormes++;
                sum_palindormes += num;
            }
        }
    }
    printf("Количество палиндромов: %lu\n", palindormes);
    if (palindormes > 0)
    {
        printf("Среднее арифметическое палиндромов: %.2f\n", (double)sum_palindormes / palindormes);
    }
    else
    {
        printf("Среднее арифметическое палиндромов: 0.00\n");
    }

    printf("Количество остальных чисел: %lu\n", others);
    if (others > 0)
    {
        printf("Среднее арифметическое остальных чисел: %.2f\n", (double)sum_others / others);
    }
    else
    {
        printf("Среднее арифметическое остальных чисел: 0.00\n");
    }
    return 0;
}