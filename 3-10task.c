#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main () {
    setlocate(LC_ALL, "");
    wchar_t module1[50];
    wchar_t module2[50];
    wchar_t module3[50];
    if (wscanf(L"%49ls %49ls %49ls", module1, module2, module3) == 3) {
        wprintf(L"%-15ls|%20ls|%.51ls\n", module1, module2, module3);
    }
    return 0;
}