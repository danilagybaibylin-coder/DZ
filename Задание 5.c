#include <stdio.h>

int main(void) {
    const int days_in_year = 365;
    const int hours_in_day = 24;
    const long long seconds_in_hour = 3600;

    int godiki = 18;

    long long days = (long long)godiki * days_in_year;
    long long hours = days * hours_in_day;
    long long ticks = hours * seconds_in_hour;

    printf("Тики: %lld|Часы: %lld|Дни: %lld|Годы: %d\n",
           ticks, hours, days, godiki);

    return 0;
}
