#include <stdint.h>
#include <stdio.h>
int main (void) {
    int input;
    scanf("%d", &input);
    uint8_t val = (uint8_t)input;
    uint8_t add_res = (uint8_t)(val + 10);
    uint8_t mul_res = (uint8_t)(val * 2);
    uint8_t sqr_res = (uint8_t)(val * val);
    printf("ADD: %u\n", (unsigned int)add_res);
    printf("MUL2: %u\n", (unsigned int)mul_res);
    printf("SQR: %u\n", (unsigned int)sqr_res);
    return 0;
}