#include <stdio.h>
int main(void) 
{
    int N;
    printf("Введите количество элементов N: ");
    if (scanf("%d", &N) != 1 || N <= 0) 
    {
        printf("Ошибка: введите положительное цлое число.\n");
        return 1;
    }
    int i=1;
    int count = 0;
    printf("Первые %d элементов последовательности треугольных чисел:\n", N);
    while (count < N) 
    {
        int term = i * (i + 1) / 2;
        printf("%d", term);
        count++;
        i++;
    }
    printf("\n");
    return 0;
}