// EXERCICIO 4
typedef enum {EURO, DOLAR, REAL}moeda;
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
        case EURO:
            printf("%d euros\n", preco->euro);
            break;
        case DOLAR:
            printf("%d dólares\n", preco->dolar);
            break;
        case REAL:
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
        case EURO:
            preco->euro = novopreco;
            break;
        case DOLAR:
            preco->dolar = novopreco;
            break;
        case REAL:
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

// EXERCICIO 5
typedef enum {ANFIBIO, AVE, MAMIFERO, REPTIL}tipo;
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
    tipo tag;
    Anfibios anfibio;
    Aves ave;
    Mamiferos mamifero;
    Repteis reptil;
} Animal;

int main() {
    Animal sapo, aguia, leao, tartaruga, canario, cachorro;

    // Animal 1 - Sapo (Anfíbio)
    sapo.tag = ANFIBIO;
    sapo.anfibio.ndepatas = 4;
    strcpy(sapo.anfibio.espessurapele, "Fina");
    sapo.anfibio.cauda = false;

    // Animal 2 - Águia (Ave)
    aguia.tag = AVE;
    aguia.ave.comprimentobico = 6.5f;
    aguia.ave.autonomiadevooemdias = 10;
    aguia.ave.frequenciacanto = 3;

    // Animal 3 - Leão (Mamífero)
    leao.tag = MAMIFERO;
    leao.mamifero.qtd_dentes = 30;
    leao.mamifero.volumecerebro = 1.2f;
    leao.mamifero.velocidade = 80;

    // Animal 4 - Tartaruga (Réptil)
    tartaruga.tag = REPTIL;
    tartaruga.reptil.venenoso = false;
    tartaruga.reptil.autonomia_agua = 15;
    tartaruga.reptil.espessuraovos = 1.1f;

    // Animal 5 - Canário (Ave)
    canario.tag = AVE;
    canario.ave.comprimentobico = 1.8f;
    canario.ave.autonomiadevooemdias = 3;
    canario.ave.frequenciacanto = 9;

    // Animal 6 - Cachorro (Mamífero)
    cachorro.tag = MAMIFERO;
    cachorro.mamifero.qtd_dentes = 42;
    cachorro.mamifero.volumecerebro = 1.1f;
    cachorro.mamifero.velocidade = 45;
    return 0;
}

// EXERCICIO 7

typedef enum {
    CEP,
    PREENCHER
} TipodePreenchimento;
struct endereco{
    // o usuário escolhe entre preencher seu endereço usando o CEP ou preenchendo sozinho
    TipodePreenchimento tag;
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
        case CEP:
            printf("CEP: ");
            scanf("%d", &E->cep);
            break;
        case PREENCHER:
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
        case CEP:
            printf("CEP: %d\n", E->cep);
            break;
        case PREENCHER:
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
