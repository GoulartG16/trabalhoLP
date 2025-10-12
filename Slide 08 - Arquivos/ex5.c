#include <stdio.h>

void escreva_string(FILE* f, char str){
    int i = 0;
    while (str[i]!= '\0'){
        fputc(str[i], f);
        i++;
    }
}
// Questão 1:
int main(){
    FILE *f = fopen("C:\\arquivosc\\arquivo.txt", "w");
    char str[25];
    printf("String: ");
    scanf("%24[^\n]", str);
    scanf("%*[^\n]");getchar();//limpa o buffer
    escreva_string(f, str);
    fclose(f);
    return 0;
}

int main(){
    FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "w");
    char vetorstr[10][25];
    for (int i = 0; i < 10; i++){
        printf("String %d: ", i+1);
        scanf("%24[^\n]", vetorstr[i]);
        scanf("%*[^\n]");getchar();//limpa o buffer
    }

    for (int i = 0; i < 10; i++){
        escreva_string(f, str[i]);
        fputc(' ', f);//só pra todos os itens não ficarem grudados
    }
    fclose(f);
    return 0;
}