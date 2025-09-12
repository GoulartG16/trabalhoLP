#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char estado[25];
    char cidade[25];
    char bairro[25];
    char rua[40];
    int numero;
}Endereco;
void preenche (Endereco *e){
    printf("Estado: ");
    fgets(e->estado, sizeof(e->estado), stdin);
    printf("Cidade: ");
    fgets(e->cidade, sizeof(e->cidade), stdin);
    printf("Bairro: ");
    fgets(e->bairro, sizeof(e->bairro), stdin);
    printf("Rua: ");
    fgets(e->rua, sizeof(e->rua), stdin);
    printf("Número: ");
    scanf("%d", &e->numero);
}
int main(){
    Endereco e1;
    preenche(&e1);
    printf("Estado: %s\n", e1.estado); 
    printf("Cidade: %s\n", e1.cidade); 
    printf("Bairro: %s\n", e1.bairro); 
    printf("Rua: %s\n", e1.rua); 
    printf("Número: %d\n", e1.numero); 
    return 0;
}
