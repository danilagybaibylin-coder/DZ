#include <stdio.h>
#include <string.h>
#define DISTRO_NAME "LinuxDistro"
int main() {
    const char RDATE[] = "2026";
    printf("DISTRO: %s\n", DISTRO_NAME);
    printf("RDATE: %s\n", RDATE);
    printf("STRLEN: %zu\n", strlen(DISTRO_NAME));
    printf("SIZEOF: %zu\n", sizeof(DISTRO_NAME));
    return 0;
}