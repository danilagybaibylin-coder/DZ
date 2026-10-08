#include <stdio.h>
int main (void) {
    long double ld_val;
    scanf("%Lf", &ld_val);
    double d_val = (double)ld_val;
    float f_val = (float)d_val;
    printf("FLOAT: %.6f\n", f_val);
    printf("DOUBLE: %.6lf\n", d_val);
    printf("LONG DOUBLE: %.6Lf\n", ld_val);
    printf("FLOAT+1: %.6f\n", f_val + 1.0f);
    printf("DOUBLE+1: %.6lf\n", d_val + 1.0);
    printf("LONG DOUBLE+1: %.6Lf\n", ld_val + 1.0L);
    return 0;
}