#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int x = 50;
    int a = 10;
    int mesiach = 30 * 4;
    int new_chena = 2 * x + a;
    int chena = mesiach * new_chena;
    printf("Итоговая сумма к оплате: %.2f руб.\n", chena);

    return 0;
}