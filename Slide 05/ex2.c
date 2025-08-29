#include <stdio.h>
void compra(int* conta, int valor) {
	*conta -= valor;
}
int main(){
	int saldoConta1, saldoConta2, * maior;
	printf("Saldo da Conta 1: ");
	scanf("%d", &saldoConta1);
	printf("Saldo da Conta 2: ");
	scanf("%d", &saldoConta2);
	if (saldoConta2 > saldoConta1){
		maior = &saldoConta2;
		compra(maior, 500);
	}
	else {
		maior = &saldoConta1;
		compra(maior, 500);
	}
	printf("Saldo Final Conta 1: %d\n", saldoConta1);
	printf("Saldo Final Conta 2: %d\n", saldoConta2);
}
