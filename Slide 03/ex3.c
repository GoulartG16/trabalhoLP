#include <stdio.h>

int main() {
    short int vetor[50], acimadamedia = 0;
    float soma = 0;
    for (int i = 0; i<50; i++) {
    	scanf("%hd", &vetor[i]);
    	soma += vetor[i];
	} 
	float media = (soma/50);
	printf("Média: %.2f\n", media);
	for (int i = 0; i<50; i++) {
		if (vetor[i] > media) {
			acimadamedia+=1;
		}
	}
	printf("Quantidade de valores acima da média: %hd\n", acimadamedia);
	return 0;
}
