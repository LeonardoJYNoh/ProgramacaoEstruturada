#include <stdio.h>
#include <stdlib.h>
///Escreva um programa que, dado um inteiro n fornecido pelo usuário, leia n caracteres fornecidos pelo usuário e as armazene em um vetor. Na sequência, para cada uma das n entradas armazenadas no vetor, o seu programa deve imprimir a seguinte linha: “entrada xxx, conteudo yyy, endereco: zzz”, onde xxx deve ser substituído pelo índice da entrada, yyy pelo conteúdo dessa entrada no array e zzz pelo endereço de memória dessa entrada em decimal.



int main(){
    int n;
    printf("Digite a quantidade de caracteres (n): ");
    scanf("%d", &n);

    char *vetor = malloc(sizeof(char)*n);

    printf("Digite os %d caracteres\n", n);
    for (int i = 0; i < n; i++){
        printf("Caractere %d: ", i + 1);
        scanf(" %c", &vetor[i]);
    }

    printf("\nInformacoes das entradas:\n");
    for (int i = 0; i < n; i++){
        printf("entrada %d, conteudo %c, endereco: %p\n", i, vetor[i], &vetor[i]);
    
    }

}