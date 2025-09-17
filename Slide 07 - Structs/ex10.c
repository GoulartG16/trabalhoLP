#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
    int x;
    int y;
} coord;
typedef struct {
    int identidade;
    coord posicao;
    int pontuacao;
} personagem;
void LerPonto(coord *c){
    printf("X: ");
    scanf("%d", &c->x);
    printf("Y: ");
    scanf("%d", &c->y);
}
void LerPersonagem(personagem * p){
    printf("Identidade: ");
    scanf("%d", &p->identidade);
    LerPonto(&p->posicao);
    printf("Pontuação: ");
    scanf("%d", &p->pontuacao);
}
void CriarLinha(personagem * ps, int nlinha) {
    int linha[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    for (int i = 0; i < 10; i++){
        if (ps[i].posicao.y == nlinha) {
                linha[ps[i].posicao.x] = ps[i].identidade;
        }
    }
    printf("\n%d  ", nlinha);
    for (int i = 0; i < 10; i++) {
        if (linha[i] != -1) {
            printf("%d ", linha[i]);
        }
        else {
            printf("  ");
        }
    }
}
int main(){
    personagem personagens[10];
    for (int i = 0; i < 10; i++){
        printf("\nPERSONAGEM %d: \n", i+1);
        LerPersonagem(&personagens[i]);
    }
    printf("   ");
    for (int i = 0; i < 10; i++) {printf("%d ", i);}
    printf("\n\n");
    for (int i = 0; i < 10; i++){CriarLinha(personagens, i);}
    return 0;
}
