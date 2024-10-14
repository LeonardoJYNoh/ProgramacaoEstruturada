#include <stdio.h>

int eh_primo(int num){
    int i;
    if (num < 2){
        return 0;
    }
    for(i = 2; i < num; i++){
        if (num % i == 0)
            return 0;
    }
    return 1;
}


void leitor_lista(int n, int lista[n]){
    int i;
    for(i=0; i<n; i++){
        lista[i] = i;
    }
}

void imprime_primos(int n, int lista[n]){
    int i;
    for(i=0; i<n; i++){
        if (eh_primo(i))
            printf("%d ", lista[i]);
    } 
}


int main() {
    int n;
    printf("Digite o valor do tamanho da lista ");
    scanf("%d", &n);
    int lista[n];
    leitor_lista(n, lista);
    imprime_primos(n, lista);
}