#include <stdio.h>
#include <string.h>
int main(){
    char name[50];
    if (scanf("%49s", name) == 1) {
        int len = strlen(name);
        printf("\"%s\"\n", name);
        printf("\"%20s\"\n", name);
        printf("\"%-20s\"\n", name);
        printf("\"%s\"\n", len + 5, name);
    }
    return 0;
}