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

typedef union {
    Anfibios anfibio;
    Aves ave;
    Mamiferos mamifero;
    Repteis reptil;
} Animal;

typedef struct {
    char nome[30]; 
    int tipo;      // 0 = Anfíbio, 1 = Ave, 2 = Mamífero, 3 = Réptil
    Animal dados;
} RegistroAnimal;

int main() {
    RegistroAnimal sapo, aguia, leao, tartaruga, canario, cachorro;

    // Animal 1 - Sapo (Anfíbio)
    strcpy(sapo.nome, "Sapo");
    sapo.tipo = 0;
    sapo.dados.anfibio.ndepatas = 4;
    strcpy(sapo.dados.anfibio.espessurapele, "Fina");
    sapo.dados.anfibio.cauda = false;

    // Animal 2 - Águia (Ave)
    strcpy(aguia.nome, "Águia");
    aguia.tipo = 1;
    aguia.dados.ave.comprimentobico = 6.5f;
    aguia.dados.ave.autonomiadevooemdias = 10;
    aguia.dados.ave.frequenciacanto = 3;

    // Animal 3 - Leão (Mamífero)
    strcpy(leao.nome, "Leão");
    leao.tipo = 2;
    leao.dados.mamifero.qtd_dentes = 30;
    leao.dados.mamifero.volumecerebro = 1.2f;
    leao.dados.mamifero.velocidade = 80;

    // Animal 4 - Tartaruga (Réptil)
    strcpy(tartaruga.nome, "Tartaruga");
    tartaruga.tipo = 3;
    tartaruga.dados.reptil.venenoso = false;
    tartaruga.dados.reptil.autonomia_agua = 15;
    tartaruga.dados.reptil.espessuraovos = 1.1f;

    // Animal 5 - Canário (Ave)
    strcpy(canario.nome, "Canário");
    canario.tipo = 1;
    canario.dados.ave.comprimentobico = 1.8f;
    canario.dados.ave.autonomiadevooemdias = 3;
    canario.dados.ave.frequenciacanto = 9;

    // Animal 6 - Cachorro (Mamífero)
    strcpy(cachorro.nome, "Cachorro");
    cachorro.tipo = 2;
    cachorro.dados.mamifero.qtd_dentes = 42;
    cachorro.dados.mamifero.volumecerebro = 1.1f;
    cachorro.dados.mamifero.velocidade = 45;
    return 0;
}
