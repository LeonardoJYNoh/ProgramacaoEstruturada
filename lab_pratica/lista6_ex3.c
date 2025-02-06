#include <stdio.h>
#include <stdlib.h>

int* le_vetor(int n){
    int* vetor = malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    return vetor;
}


int soma(int v[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return v[n-1] + soma(v, n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int* v = le_vetor(n);
    printf("%d", soma (v, n));
    free(v);
    return 0;
}