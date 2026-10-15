#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(){
    setlocate(LC_ALL, "");
    char utf8_string[] = "Сбой матрицы";
    wchar_t wide_string[] = L"Сбой матрицы";
    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(utf8_string), strlen(utf8_string));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(wide_string), wcslen(wide_string));
    return 0;
}