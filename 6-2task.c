//6
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main(void)
{
    setlocale(LC_ALL, "");

    wint_t ch;

    unsigned long count_a = 0;
    unsigned long count_b = 0;
    unsigned long total = 0;

    wprintf(L"Введите символы:\n");

    while ((ch = getwchar()) !=L'#')
    {
        if (ch == WEOF)
        {
            break;
        }
        total++;

        if (ch == L'a')
        {
            count_a++;
        }
        else if (ch == L'b')
        {
            count_b++;
        }
    }
    wprintf(L"Всего обработано символов:%lu\n", total);
    wprintf(L"Количество вхождений 'а':%lu\n", count_a);
    wprintf(L"Количество вхождений 'b':%lu\n", count_b);
    wprintf(L"Суммарно (а + b):%lu\n", count_a + count_b);

    return 0;
}