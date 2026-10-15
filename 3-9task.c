#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main(){
    setlocate(LC_ALL, "");
    wchar_t codename [50];
    if (wscanf(L"%49ls", codename) == 1) {
        wprintf(L"Агент %ls авторизован в системе\n", codename);

    }
return 0;
}