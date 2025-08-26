#include <stdio.h>

int main {
    int num, soma;
    soma = 0;
    while (num != 0) {
        printf("Valor: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma total é %d", soma);
    return 0;
}
