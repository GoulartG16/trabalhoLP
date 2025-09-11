#include <stdio.h>
struct Personagem {
    int forca;
    int energia;
    int experiencia;
};
int main() {
    struct Personagem p1 = {10, 50, 30};
    struct Personagem p2;
    p2.forca = 18; p2.energia = 20; p2.experiencia = 25;
    return 0;
}
