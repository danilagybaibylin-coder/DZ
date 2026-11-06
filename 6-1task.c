//19
#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int c, count = 0;

    printf("Введите символы:\n");
    while ((c=getchar())!= '#')
    {
        if (isxdigit(c))
        {
            count++;
        }
    }
    return 0;
}