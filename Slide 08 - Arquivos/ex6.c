#include <stdio.h>
#include <string.h>
/*
int main(){
    char str[25];
    FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "wb");
    
    printf("String: ");
    scanf("%24[^\n]", str);
    scanf("%*[^\n]");getchar();//limpa o buffer
    fwrite(str, sizeof(char), strlen(str), f);
    fclose(f);
    return 0;
}
*/
/*
int main(){
  char str[25];
  FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "rb");
  fread(str, sizeof(char), sizeof(str), f);
  str[strlen(str)] = '\0';
  printf("%s", str);
  fclose(f);
  return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main(){
    FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "wb");
    char vetorstr[10][25];
    for (int i = 0; i < 10; i++){
        printf("String %d: ", i+1);
        scanf("%24[^\n]", vetorstr[i]);
        scanf("%*[^\n]");getchar();//limpa o buffer
    }

    fwrite(vetorstr, sizeof(char), sizeof(vetorstr), f);
    fclose(f);
    return 0;
}