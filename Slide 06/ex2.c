#include <stdio.h>
int main(){
    int vet[5], I, aux;
    for (int i = 0; i < 5; i++) {
        printf("Valor: ");
        scanf("%d", vet +i);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(vet+i));
    }
    printf("\nValor de I: ");
    scanf("%d", &I);
    vet[I] = 0;
    for (int i = I; i < 4; i++) {
        aux = *(vet+i);
        *(vet+i) = *(vet+i+1);
        *(vet+i+1) = aux;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(vet+i));
    }
    return 0;
}
