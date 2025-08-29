#include <stdio.h>

int main(){
	int a, b, * p;
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	if (b > a){
		p = &b;
	}
	else {
		p = &a;
	}
	*p -= 50;
	printf("A: %d, B: %d", a, b);
}
