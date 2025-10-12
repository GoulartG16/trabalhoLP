#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char str[25];
  int i=0, aux;
  FILE* f = fopen("C:\\arquivosc\\arquivo.txt", "r");
  aux = fgetc(f);
  while (aux != EOF){
    str[i] = (char)aux;
    i++;
    aux = fgetc(f);
  }
  str[i] = '\0';
  printf("%s", str);
  fclose(f);
  return 0;
}
