#include <string.h>
int palavras(char* str){
    if (strlen(str) == 0) return 0;
    int qtd = 1, i = 0;
    while (str[i] != '\0'){
        if (str[i] == ' ') qtd++;
        i++;
    }
    return qtd;
}
