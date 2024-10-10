#include <stdio.h>

void le_vetor(int lista[], int n) {
    int i;
    printf("Digite %d numeros\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }
}

void imprime_positivos(int lista[], int n) {
    int i;
    printf("Positivos\n");
    for(i = 0; i < n; i++){
        if (lista[i] >= 0){
            printf("%d\n", lista[i]);
        }
    }
}


int main() {
    int n;
    printf("Escreva quantidade de elementos na lista\n");
    scanf("%d", &n);
    int lista[n];
    le_vetor(lista, n);
    imprime_positivos(lista, n); 
    return 0;
}
