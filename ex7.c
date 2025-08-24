#include <string.h>
#include <stdio.h>

int main() {
    int vit, emp, der, pontos, pontomax = 0, pontomin;
    char nometimemax[20], nometimemin[20], nometime[20];
    
    for (int i = 0; i< 5; i++){
        printf("Nome do time: ");
        scanf("%s", &nometime);
        printf("Vitórias: ");
        scanf("%d", &vit);
        printf("Empates: ");
        scanf("%d", &emp);
        printf("Derrotas: ");
        scanf("%d", &der);
        pontos = vit * 3 + emp;
        
        if (pontomax < pontos) {
            pontomax = pontos;
            strcpy(nometimemax, nometime);
        }
        if (i == 0) {
            pontomin = pontos;
        }
        if (pontomin > pontos && i > 0) {
            pontomin = pontos;
            strcpy(nometimemin, nometime);
        }
    }
    printf("Time com mais pontos: %s = %d pontos\n", nometimemax, pontomax);
    printf("Time com menos pontos: %s = %d pontos\n", nometimemin, pontomin);
    return 0;
}
