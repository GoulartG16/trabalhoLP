#include <stdio.h>
#include <stdlib.h>
struct Personagem {
    int forca;
    int energia;
    int experiencia;
};
void preencheB (struct Personagem* p) {
    int forca, energia, experiencia;
    printf("Força: ");
    scanf("%d", &forca);
    printf("Energia: ");
    scanf("%d", &energia);
    printf("Experiência: ");
    scanf("%d", &experiencia);
    (*p).forca = forca;
    p->energia = energia;
    (*p).experiencia = experiencia;
}

void main (void) {
    struct Personagem p1;
    preencheB(&p1);

    struct Personagem p2;
    preencheB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
}
