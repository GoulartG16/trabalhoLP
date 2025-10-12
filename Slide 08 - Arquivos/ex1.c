#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "w");
    
    printf("String: ");
    scanf("%24[^\n]", str);
    scanf("%*[^\n]");getchar();//limpa o buffer
    int i = 0;
    while (str[i]!= '\0'){
        fputc(str[i], f);
        i++;
    }
    fclose(f);
    return 0;
}
