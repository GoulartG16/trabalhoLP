#include <stdio.h>
#include <string.h>
int substring(char* s1, char* s2){
    //verifica se a s2 está em s1
    int i = 0, tamanhos2 =strlen(s2);
    while (s1[i]!= '\0'){
        // passa por s1 inteiro
        int j = 0,  k = i;
        while (s2[j] != '\0' && s1[k] == s2[j]){
            // passa pelo s1[i] ao mesmo tempo que passa pelo s2[j] verificando se são iguais
            k++; j++;
        }
        if (j == tamanhos2) return 1;
        i++;
    }
    return 0;
}
//implementei a função strlen() pois em exercicios anteriores ja fiz ela
