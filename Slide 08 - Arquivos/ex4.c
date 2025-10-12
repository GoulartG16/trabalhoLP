#include <stdio.h>
#include <string.h>

int main(){
    FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "w");
    char vetorstr[10][25];
    for (int i = 0; i < 10; i++){
        printf("String %d: ", i+1);
        scanf("%24[^\n]", vetorstr[i]);
        scanf("%*[^\n]");getchar();//limpa o buffer
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 25; j++){
            if (vetorstr[i][j] == '\0') break;
            fputc(vetorstr[i][j], f);
        }
        fputc(' ', f);//só pra todos os itens não ficarem grudados
    }
    fclose(f);
    return 0;
}