#include <stdio.h>

int eh_primo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
        return 0;
        }
    }
    return 1;
}


int main() {
    int i, n, valor;
    valor = 1;
    printf("Quantos numeros primos voce quer ver: ");
    scanf("%d", &n);
    
    for (i = 0 ; i < n; valor++) {
        if (eh_primo(valor) == 1) {
            i += 1;
            printf("%d\n", valor);
            
        }
    }
}