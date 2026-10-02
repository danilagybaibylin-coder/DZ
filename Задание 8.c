#include <stdio.h>

int phase_2(){

    printf("UNO ");
    return 0;
}

int phase_1(){

    printf("DOS ");
    phase_2();
    printf("TRES ");
    return 0;

}

int main() {

    printf("START ");
    phase_1();
    printf("END \n");
    return 0;
}