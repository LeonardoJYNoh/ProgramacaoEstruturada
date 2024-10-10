#include <stdio.h>

float cf(float valor) {
	float fah;
	fah = (valor/5*9)-32;
	return fah;
}

float fc(float valor) {
	float cel;
	cel = (valor-32)*5/9;
	return cel;
}
	
int main() {
	int a;
	float valor;
	printf("Calculadora de Temperatura\n");
	printf("Escolha a escala\n");
	printf("Digite o valor para conversão:");
	scanf("%f", &valor);
	printf("Digite sua opção(0: F, 1: C): ");
	scanf("%d", &a);
	if (a == 0) {
		printf("%f", cf(valor));
	} else if (a == 1) {
		printf("%f", fc(valor));
	} else {
		printf("Erro");
	}
}