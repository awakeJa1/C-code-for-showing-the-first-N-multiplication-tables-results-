#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i, num, m;
    setlocale(LC_ALL, "portuguese");

        printf("Digite um n�mero: ");
        scanf("%d", &num);
        printf("digite um segundo n�mero: ");
        scanf("%d", &m);

    for(i = 1; i <= m; i++)
        printf("%d * %d = %d\n", num, i, num * i);
}

