#include <stdio.h>
int main() {
    int val1;
    int val2;
    int val3;
    scanf("%d %x %o", &val1, &val2, &val3);
    int sum = val1 + val2 + val3;
    printf("UNIT_ID: %d\n", val1);
    printf("UNIT_VERSION: %d\n", val2);
    printf("UNIT_STATUS: %d\n", val3);
    printf("SUM: %d\n", sum);
    return 0;
}
