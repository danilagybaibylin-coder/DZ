    #include <stdio.h>
    #define FACTOR 1000
    int main(void) 
    {
        long long total_base;
        printf("Введите значение в базовых единицах: ");
        while (scanf("%lld", &total_base) == 1 & total_base > 0) 
        {
            long long senior = total_base / FACTOR;
            long long junior = total_base % FACTOR;
            printf("%lld Па = %lld кПа %lld Па\n", total_base, senior, junior);
            printf("\nВведите следующее значение: ");
        }
        printf("Завершение программы.\n");
        return 0;
    }