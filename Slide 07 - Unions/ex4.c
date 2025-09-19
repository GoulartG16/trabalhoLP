#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    union{
        int euro;  // id 0
        int dolar; // id 1
        int real;  // id 2
    };
}Preco;
void exibe(Preco *preco){
    switch (preco->id) {
        case 0:
            printf("%d euros\n", preco->euro);
            break;
        case 1:
            printf("%d dólares\n", preco->dolar);
            break;
        case 2:
            printf("%d reais\n", preco->real);
            break;
        default:
            printf("Erro");
            break;
    }
}
void altera(Preco *preco, int novopreco, int subtipo){
    preco->id = subtipo;
    switch (subtipo) {
        case 0:
            preco->euro = novopreco;
            break;
        case 1:
            preco->dolar = novopreco;
            break;
        case 2:
            preco->real = novopreco;
            break;
    }
}
int main(){
    Preco precos;
    precos.id = 0; precos.euro = 4;
    exibe(&precos);
    altera(&precos, 5, 1);
    exibe(&precos);
}
