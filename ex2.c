#include <stdio.h>

int main(){
    int num1, num2;
    printf("Valor 1: ");
    scanf("%d", &num1);
    printf("Valor 2: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("O maior valor escolhido foi %d", num1);
    }
    else {
        if (num2 > num1) {
            printf("O maior valor escolhido foi %d", num2);
        }
        else {
            printf("Os dois valores escolhidos foram iguais (%d)", num1);
        }
    } 
    return 0;
}

