#include <stdio.h>

int main(void) {
    int reactor_core = 12;
    printf("[%d, %d, %d]\n",
           reactor_core,
           reactor_core * 2,
           reactor_core * reactor_core);
    return 0;
}
