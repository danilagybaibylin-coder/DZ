#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int input1;
    int input2;
    scanf("%d %d, &input1, &input2");
    bool flag1 = input1;
    bool flag2 = input2;
    int sum = flag1 + flag2;
    printf("MODULE_READY: %d\n", flag1);
    printf("FAULT_STATE: %d\n", flag2);
    printf("BOOL_SIZE: %d\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", sum);
    return 0;
}