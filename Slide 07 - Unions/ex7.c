#include <stdio.h>
#include <stdlib.h>

struct endereco{
    // o usuário escolhe entre preencher seu endereço usando o CEP ou preenchendo sozinho
    int tag; // 0 pra CEP e 1 pra preencher sozinho
    int num;
    union {
        struct{
            int cep;
        };
        struct {
            char estado[25];
            char cidade[25];
            char bairro[25];
            char rua[40];
        };
    };
};
void PreencheEndereco(struct endereco *E){
    printf("Deseja preencher por CEP(0) ou sozinho(1)? ");
    scanf("%d", &E->tag);
    getchar();
    switch (E->tag) {
        case 0:
            printf("CEP: ");
            scanf("%d", &E->cep);
            break;
        case 1:
            printf("Estado: ");
            fgets(E->estado, sizeof(E->estado), stdin);
            printf("Cidade: ");
            fgets(E->cidade, sizeof(E->cidade), stdin);
            printf("Bairro: ");
            fgets(E->bairro, sizeof(E->bairro), stdin);
            printf("Rua: ");
            fgets(E->rua, sizeof(E->rua), stdin);
            break;
    }
    printf("Número: ");
    scanf("%d", &E->num);
}
void ImprimeEndereco(struct endereco *E){
    switch (E->tag) {
        case 0:
            printf("CEP: %d\n", E->cep);
            break;
        case 1:
            printf("Estado: %s\n", E->estado);
            printf("Cidade: %s\n", E->cidade);
            printf("Bairro: %s\n", E->bairro);
            printf("Rua: %s\n", E->rua);
            break;
    }
    printf("Número: %d\n", E->num);
}
int main(){
    struct endereco endereco;
    PreencheEndereco(&endereco);
    ImprimeEndereco(&endereco);
    return 0;
}
