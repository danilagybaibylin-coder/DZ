// 19
#include <stdio.h>
#include <math.h>

int main (void)
{
    const double A = 1.0;
    const double B = 8.0;
    const double H = 1.0;

    int deistvie  = 1;
    for(double x = A; x <= B + 1e9; x += H)
    {
        double y = log2(x);
        printf("| %-9d | %-9.4f | %-9.4f | \n", deistvie, x, y);
        deistvie++;
    }
    return 0;
}