//18
#include <stdio.h>

int main(void)
{
    double amount;

    printf("Введите сумму покупки: ");
    if (scanf("%lf", &amount)!=1 || amount < 0)
    {
        return 1;
    }
    double discount = 0.0;
    double tier1 = 0.0;
    double tier2 = 0.0;
    double tier3 = 0.0;

    if (amount > 1000.0)
    {
        tier1 = (500.0 - 100.0) * 0.05;
        tier2 = (1000.0 - 500.0) * 0.1;
        tier3 = (amount - 1000.0) * 0.15;
    }
    else if (amount > 500.0)
    {
        tier1 = (500.0 - 100.0) * 0.05;
        tier2 = (amount - 500.0) * 0.1;
    }
    else if (amount > 100.0)
    {
        tier1 = (amount - 100.0) * 0.05;
    }

    discount = tier1 + tier2 + tier3;
    double final_amount = amount - discount;

    printf("Сумма покупки: %10.2f руб.\n", amount);
    printf("5%% свыше 100 до 500 руб.: %10.2f руб.\n", tier1);
    printf("10%% свыше 500 до 1000 руб.: %10.2f руб.\n", tier2);
    printf("15%% свыше 1000 руб.: %10.2f руб.\n", tier3);
    printf("Общая скидка: %10.2f руб.\n", discount);
    printf("Итог к оплате: %10.2f руб.\n", final_amount);
    
    return 0;
}