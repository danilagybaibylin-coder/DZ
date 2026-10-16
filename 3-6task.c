#include <stdio.h>
int main (){
char str[50];
int width;
if scanf("%s, %d", str, &width) {
    printf("%*s\n", width, str);
    printf("%-*s\n", width + 5, str);
}
return 0;
}