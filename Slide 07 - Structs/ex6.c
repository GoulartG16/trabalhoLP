#include <stdio.h>
#include <stdlib.h>
struct atleta {
    char nome[20];
    char esporte[20];
    char posicao[20];
    float altura;
    int idade;
};
void Imprime(struct atleta a) {
    printf("\nFICHA DO ATLETA\n");
    printf("Nome: %s\n", a.nome);
    printf("Esporte: %s\n", a.esporte);
    printf("Posição: %s\n", a.posicao);
    printf("Altura: %f\n", a.altura);
    printf("Idade: %d\n", a.idade);
}
void main (void) {
    struct atleta a1 = {"Arrascaeta", "Futebol", "Meia", 1.72, 31}, a2 = {"Gabriela Guimarães", "Vôlei Feminino", "Ponta", 1.81, 31}, a3 = {"Stephen Curry", "Basquete", "Armador", 1.88, 37};
    Imprime(a1);
    Imprime(a2);
    Imprime(a3);
}
