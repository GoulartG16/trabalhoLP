#include <stdio.h>

int main(){
    int n, soma = 0;
    printf("Valor: ");
    scanf("%d", &n);
    while (n != 0) {
        soma += n*n;
        n -= 1;
    }
    printf("Soma: %d", soma);
    return 0;
}
