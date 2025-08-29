#include <stdio.h>
void compra(int* conta, int valor) {
	*conta -= valor;
}
int main(){
	int saldoConta1, saldoConta2, * maior, compras[5] = {100, 50, 80, 30, 20};
	printf("Saldo da Conta 1: ");
	scanf("%d", &saldoConta1);
	printf("Saldo da Conta 2: ");
	scanf("%d", &saldoConta2);
	for (int i = 0; i < 5; i++){
		printf("\n Compra %d\n", i+1);
		if (saldoConta2 > saldoConta1){
			maior = &saldoConta2;
			compra(maior, compras[i]);
		}	
		else {
			maior = &saldoConta1;
			compra(maior, compras[i]);
		}
		printf("Saldo Final Conta 1: %d\n", saldoConta1);
		printf("Saldo Final Conta 2: %d\n", saldoConta2);
	}
}
