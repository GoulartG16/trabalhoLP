#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int ndepatas;
    char espessurapele[20];
    bool cauda;
} Anfibios;

typedef struct {
    float comprimentobico;
    int autonomiadevooemdias;
    int frequenciacanto;
} Aves;

typedef struct {
    int qtd_dentes;
    float volumecerebro;
    int velocidade;
} Mamiferos;

typedef struct {
    bool venenoso;
    int autonomia_agua;
    float espessuraovos;
} Repteis;
typedef struct{
    char nome[20];
    char cor[20];
    union {
        Anfibios anfibio;
        Aves ave;
        Mamiferos mamifero;
        Repteis reptil;
} Animal;

int main(){
    Animal sapo, aguia, leao, tartaruga, canario, cachorro;

     // Animal 1 - Sapo (Anfíbio)
    strcpy(sapo.nome, "Sapo");
    strcpy(sapo.cor, "Verde");
    sapo.anfibio.ndepatas = 4;
    strcpy(sapo.anfibio.espessurapele, "Fina");
    sapo.anfibio.cauda = false;

    // Animal 2 - Águia (Ave)
    strcpy(aguia.nome, "Águia");
    strcpy(aguia.cor, "Marrrom e Branco");
    aguia.ave.comprimentobico = 6.5f;
    aguia.ave.autonomiadevooemdias = 10;
    aguia.ave.frequenciacanto = 3;

    // Animal 3 - Leão (Mamífero)
    strcpy(leao.nome, "Leão");
    strcpy(leao.cor, "Amarelo");
    leao.mamifero.qtd_dentes = 30;
    leao.mamifero.volumecerebro = 1.2f;
    leao.mamifero.velocidade = 80;

    // Animal 4 - Tartaruga (Réptil)
    strcpy(tartaruga.nome, "Tartaruga");
    strcpy(tartaruga.cor, "Verde");
    tartaruga.reptil.venenoso = false;
    tartaruga.reptil.autonomia_agua = 15;
    tartaruga.reptil.espessuraovos = 1.1f;

    // Animal 5 - Canário (Ave)
    strcpy(canario.nome, "Canário");
    strcpy(canario.cor, "Amarelo");
    canario.ave.comprimentobico = 1.8f;
    canario.ave.autonomiadevooemdias = 3;
    canario.ave.frequenciacanto = 9;

    // Animal 6 - Cachorro (Mamífero)
    strcpy(cachorro.nome, "Cachorro");
    strcpy(cachorro.cor, "Marrom");
    cachorro.mamifero.qtd_dentes = 42;
    cachorro.mamifero.volumecerebro = 1.1f;
    cachorro.mamifero.velocidade = 45;
    return 0;
}
