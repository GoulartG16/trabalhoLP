#include <stdio.h>

int main() {
    float valor, valorreais;
    
    printf("Valor do celular em $: ");
    scanf("%f", &valor);
    
    valorreais = valor * 3.17;
    
    if (valorreais > 1000){
        printf("MAU NEGÓCIO\n");
    }
    else {
        printf("BOM NEGÓCIO\n");
    }
    
    printf("Valor: %f", valorreais);
    return 0;
}
