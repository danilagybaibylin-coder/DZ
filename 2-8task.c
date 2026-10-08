#include <stdio.h>
#include <float.h>
int main (void) {
    printf("FLOAT: size=%zu, digits=%zu, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%zu, digits=%zu, max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);
    printf("LONG DOUBLE: size=%zu, digits=%zu, max=%Le\n", sizeof(long double), LDBL_DIG, LDBL_MAX);
    return 0;
}