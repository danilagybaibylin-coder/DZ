#include <stdio.h>
#include <string.h>
int main () {
    char word1[15];
    char word2[15];
    if (scanf("%14s %14s", word1, word2) == 2) {
        printf("%s-%s\n", word1, word2);
        int total_length = strlen(word1) + strlen(word2);
        printf("Total Lenght: %d\n", total_length);
    }
    return 0;
}