#include <stdio.h>

int main() {
    float v_em_kph, v_em_mph;
    printf("Velocidade em mph: ");
    scanf("%f", &v_em_mph);
    v_em_kph = v_em_mph * 1.6;
    
    if (v_em_kph < 80) {
        printf("ACELERE\n");
    }
    else {
        if (v_em_kph > 100){
            printf("DESACELERE\n");
        }
        else {
            printf("MANTENHA\n");
        }
    }
    printf("%f", v_em_kph);
    return 0;
}
