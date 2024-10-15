#include <stdio.h>

int fatorial (int num) {
    int i;
    for(i = num-1; i > 1; i--){
        num *= i;
    }
    return num;
}

float binomio_newton(int n, int k) {
    float valor;
    
    valor = fatorial(n)/(fatorial(k)*fatorial(n-k));    
    return valor;
}


int main() {
    int n, k;
    
    printf("Calcular binomio de Newton\n");
    printf("Digite o valor de n");
    scanf("%d", &n);
    printf(" ");
    printf("digite o valor de k ");
    scanf("%d", &k);
    printf("%.2f\n", binomio_newton(n, k));
}