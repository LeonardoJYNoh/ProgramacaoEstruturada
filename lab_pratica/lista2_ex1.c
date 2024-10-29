#include <stdio.h>

// @valores é um vetor contendo os n números
// @n é a variável que diz quantos valores estão no vetor
// @chave é um número inteiro
// Retorno: Sua função deve retornar i se valores[i] == chave.
// Se o valor 'chave' não está no vetor, então sua função
// deve retornar -1


void leitor_lista(int n, int valores[]) {
    int i;
    printf("Digite os valores da lista:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }
}


int busca(int valores[], int n, int chave){
    int i;
    for(i=0; i<n; i++) {
        if (valores[i] == chave) {
            return i;
        }
    }
    return -1;
}




int main(){

    int n, valores[100], chave;
    printf("digite o valor de n\n");
    scanf("%d", &n);
    printf("digite o valor de chave\n");
    scanf("%d", &chave);
    leitor_lista(n, valores);
    printf("\no valor de i = %d\n", busca(valores, n, chave));
    
    return 0;
}


// na hora de chamar uma função que exige uma lista, so chamar a variavel sem o "[]"
// na hora de criar uma lista é necessario colocar os "[]" sem mostrar o tamanho dela
//.