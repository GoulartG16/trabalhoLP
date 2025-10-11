#include <stdio.h>
#include <string.h>

int main(){
  char str[25], aux;
  int i=0;
  FILE* f = fopen("arquivo.txt", "r");
  aux = fgetc(f);
  while (aux != EOF){
    strcpy(str[i], aux);
    i++;
    aux = fgetc(f);
  }
  printf("%s", str);
  return 0;
}
