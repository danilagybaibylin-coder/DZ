#include <stdio.h>
int main (void) 
{
    double sum = 0.0, i;
    int N;
    while (scanf("%d", &N) == 1 && N > 0)
    {
        sum = 0.0;
        for (i = 1.0; i <= N; i += 1.0)
        {
            sum += i * i * i;
        }
        printf("SUM: %.6lf\n", sum);
    }
    return 0;
}