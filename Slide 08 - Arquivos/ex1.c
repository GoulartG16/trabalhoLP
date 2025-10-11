#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    printf("String: ");
    fgets(str, 25, stdin);
    FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "w");
    int i = 0;
    while (str[i]!= '\0'){
        fputc(str[i], f);
        i++;
    }
    return 0;
}
