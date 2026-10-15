#include <stdio.h>
#include <string.h>
int main(){
    char str1[20] = "SibSUTIS";
    printf("SIZEOF: %d\n", sizeof(str1));
    size_t len1 = strlen(str1);
    printf("STRLEN: %d\n", len1);
    printf("FREE_BYTES: %d\n", sizeof(str1) - len1 - 1);
    char str2[20] = "СибГУТИ";
    return 0;
}