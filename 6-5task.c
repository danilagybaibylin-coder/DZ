//22
#include <stdio.h>
#include <math.h>

int main(void)
{
    int choice;
    double x;

    while (1)
    {
        printf("1. Модуль числа\n");
        printf("2. Знак числа\n");
        printf("3. Округление вверх\n");
        printf("4. Округление вниз\n");
        printf("5. Выход\n");
        printf("Выберите действие(1-5): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Ошибка ввода. Пожалуйста, введите число от 1 до 5.\n");
            while (getchar() != '\n'); // Очистка буфера ввода
            continue;
        }
        if (choice == 5)
        {
            printf("Выход из программы.\n");
            break;
        }
        if (choice < 1 || choice > 5)
        {
            printf("Неверный выбор. Пожалуйста, выберите число от 1 до 5.\n");
            continue;
        }
        printf("Введите число x: ");
        if (scanf("%lf", &x) != 1)
        {
            printf ("Ошибка ввода. Пожалуйста, введите корректное число.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("Модуль числа %.2f равен %.2f\n", x, fabs(x));
                break;
            case 2:
                if (x > 0)
                    printf("Знак числа %.2f: положительный\n", x);
                else if (x < 0)
                    printf("Знак числа %.2f: отрицательный\n", x);
                else
                    printf("Знак числа %.2f: ноль\n", x);
                break;
            case 3:
                printf("Округление числа %.2f вверх: %.2f\n", x, ceil(x));
                break;
            case 4:
                printf("Округление числа %.2f вниз: %.2f\n", x, floor(x));
                break;
            default:
                printf("Неверный выбор. Пожалуйста, выберите число от 1 до 5.\n");
                break;
        }
    }
    return 0;
}