#include <stdio.h>
#include <string.h>
int main (){
    char ch;
    if (scanf("%c", &ch) == 1) {
        printf("CODE_DEC: %d\n", ch);
        printf("CODE_HEX: %x\n", ch);
        printf("CODE_OCT: %o\n", ch);
        char upper_ch = ch - ('a' - 'A');
        printf("UPPER: %c\n", upper_ch);
        printf("NEXT: %c\n", ch + 1);
        printf("PREV: %c\n", ch - 1);

    }
    return 0;
}