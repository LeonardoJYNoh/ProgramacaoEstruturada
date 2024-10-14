#include <stdio.h>

void leitor_lista(int n, int lista[n]) {
	int i;
	for(i = 0; i < n; i++) {
		lista[i] = i;
	}
}

void imprime_pares(int n, int lista[n]) {
	int i;
	for(i=0; i<n ; i++) {
		if(i % 2 == 0) {
			printf("%d ", lista[i]);
		}
	}
}

int main() {
	int n;
	printf("digite o valor de n ");
	scanf("%d", &n);
	int lista[n];
	leitor_lista(n, lista);
	imprime_pares(n, lista);
}