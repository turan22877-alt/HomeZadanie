#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    float x = 50.0; 
    float a = 10.0;
    int mesiach = 30 * 4;
    float new_chena = 2 * x + a;
    float chena = mesiach * new_chena;
    printf("Итоговая сумма к оплате: %.2f руб.\n", chena);

    return 0;
}