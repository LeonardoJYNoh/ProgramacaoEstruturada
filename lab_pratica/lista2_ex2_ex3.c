//Questão 2. Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima esses números em ordem não crescente.

//Questão 3. Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima esses números em ordem não decrescente. Para isso, você deve obrigatoriamente implementar a seguinte função

// @valores é um vetor contendo os n números que deverão ser ordenados
// @n é a variável que diz quantos valores estão no vetor 
//void ordena(int valores[], int n);


#include <stdio.h>

void leitor_lista(int n, int valores[]) {
    int i;
    printf("Digite os valores da lista:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }
}

void ordena(int n ,int valores[]) {
    int i, j, maior, temp;
    for (i = 0; i < n; i++){
        maior = i;
        for (j = i + 1; j < n; j++){
            if (valores[j] > valores[maior]){
                maior = j;
            }
        if (maior != i){
            temp = valores[i];
            valores[i] = valores[maior];
            valores[maior] = temp;
        }
        }
    }

}

void printa_lista(int n, int valores[]){
    printf("valores invertido:\n");
    for (int i = 0; i < n; i++){
        printf("%d\n", valores[i]);
    }
}

int main(){
    int n, valores[100];
    printf("Qual o tamanho do vetor: \n");
    scanf("%d", &n);
    leitor_lista(n, valores);
    ordena(n ,valores);
    printa_lista(n, valores);
}