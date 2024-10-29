//Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima esses números em ordem não crescente.

#include <stdio.h>

void leitor_lista(int n, int vetor[]) {
    int i;
    printf("Digite os valores da lista:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
}

void ordena_lista(int n ,int vetor[]) {
    int i, j, maior, temp;
    for (i = 0; i < n; i++){
        maior = i;
        for (j = i + 1; j < n; j++){
            if (vetor[j] > vetor[maior]){
                maior = j;
            }
        if (maior != i){
            temp = vetor[i];
            vetor[i] = vetor[maior];
            vetor[maior] = temp;
        }
        }
    }

}

void printa_lista(int n, int vetor[]){
    printf("vetor invertido:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }
}

int main(){
    int n, vetor[100];
    printf("Qual o tamanho do vetor: \n");
    scanf("%d", &n);
    leitor_lista(n, vetor);
    ordena_lista(n ,vetor);
    printa_lista(n, vetor);
}