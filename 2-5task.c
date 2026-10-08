#include <stdio.h>
#include <stdint.h>
int main (void) {
    long long count_int8 = (long long)INT8_MAX - (long long)INT8_MIN + 1LL;
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, count_int8);
    unsigned long long count_uint8 = (unsigned long long)UINT8_MAX - 0LL + 1ULL;
    printf("UINT8: size=%zu, min=%d, max=%u, values=%llu\n", sizeof(uint8_t), 0, UINT8_MAX, count_uint8);
    long long count_int16 = (long long)INT16_MAX - (long long)INT16_MIN + 1LL;
    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, count_int16);
    unsigned long long count_uint16 = (unsigned long long)UINT16_MAX - 0LL + 1ULL;
    printf("UINT16: size=%zu, min=%d, max=%u, values=%llu\n", sizeof(uint16_t), 0, UINT16_MAX, count_uint16);
    long long count_int32 = (long long)INT32_MAX - (long long)INT32_MIN + 1LL;
    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, count_int32);
    unsigned long long count_uint32 = (unsigned long long)UINT32_MAX - 0LL + 1ULL;
    printf("UINT32: size=%zu, min=%d, max=%u, values=%llu\n", sizeof(uint32_t), 0, UINT32_MAX, count_uint32);
    return 0;
}