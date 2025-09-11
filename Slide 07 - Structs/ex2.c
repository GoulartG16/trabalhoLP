#include <stdio.h>
#include <stdlib.h>
struct Personagem {
    int forca;
    int energia;
    int experiencia;
};
struct Personagem preencheA (struct Personagem p) {
    printf("Força: ");
    scanf("%d", &p.forca);
    printf("Energia: ");
    scanf("%d", &p.energia);
    printf("Experiência: ");
    scanf("%d", &p.experiencia);
    return p;
}
int main () {
    struct Personagem p1 = preencheA(p1);
    struct Personagem p2 = preencheA(p2);
    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
    return 0;
}
