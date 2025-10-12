#include <stdio.h>

typedef struct {
    int  idade;
    char nome[64];
    int  peso;
}Pessoa;

void preenchePessoa(Pessoa *p){
    printf("Nome: ");
    fgets(p->nome, 64, stdin);
    printf("Idade: ");
    scanf("%d", &p->idade);
    printf("Peso: ");
    scanf("%d", &p->peso);
    getchar(); //só pra limpar o buffer
}
void escreverArquivo(Pessoa* p, FILE *f){
    fwrite(p, sizeof(Pessoa), 1, f);
}
void lerArquivo(Pessoa* p, FILE *f){
    fread(p, sizeof(Pessoa), 1, f);
}
int main(){
    Pessoa vetor[10];
    for (int i = 0; i < 10; i++){
        preenchePessoa(&vetor[i]);
    }
    return 0;
}