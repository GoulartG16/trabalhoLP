#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
    int x;
    int y;
}Ponto;
void PreenchePonto(Ponto *p){
        printf("X: ");
        scanf("%d", &p->x);
        printf("Y: ");
        scanf("%d", &p->y);
}
void Imprime(Ponto *p, int n){
    for (int i = 0; i < n; i++) {
        printf("X: %d, Y: %d\n", p[i].x, p[i].y);
    }
}
void PreenchePontos(Ponto *p, int n){
    for (int i = 0; i < n; i++) {
        printf("X: ");
        scanf("%d", &p[i].x);
        printf("Y: ");
        scanf("%d", &p[i].y);
    }
}
Ponto MaisDistante(Ponto *p, int n){
    Ponto maisdistante = p[0];
    float distancia, maiordistancia = sqrt(p[0].x * p[0].x + p[0].y * p[0].y);
    for (int i = 1; i<n; i++){
        distancia = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
        if (distancia > maiordistancia){
            maiordistancia = distancia;
            maisdistante = p[i];
        }
    }
    return maisdistante;
}
