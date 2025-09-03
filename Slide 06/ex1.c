#include <stdio.h>
void preenche(int* xs, int n){
    for (int i = 0; i < n; i++) {
        printf("Valor: ");
        scanf("%d", xs + i);
    }
}
float media(int* xs, int n) {
    float media;
    int soma = 0;
    for (int i = 0; i<n; i++){
        soma += *(xs+i);
    }
    media = (float)soma/n;
    return media;
}
int main(){
    int vec[100], n;
    printf("Valor de n: ");
    scanf("%d", &n);
    preenche(vec, n);
    printf("Média: %f\n", media(vec, n));
    return 0;
}
