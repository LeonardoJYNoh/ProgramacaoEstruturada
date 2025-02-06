#include <stdio.h>
#include <stdlib.h>

typedef struct matriz{
    int** data;
    int linha;
    int coluna;
} *Matriz;


Matriz matriz_le(int n, int m){

    Matriz M = malloc(sizeof(struct matriz)); 

    M->linha = n;
    M->coluna = m;

    M->data = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        M->data[i] = malloc(sizeof(int) * m);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &M->data[i][j]);
        }
    }

    return M;

}

void matriz_print(Matriz M, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", M->data[i][j]);
        }
    printf("\n");

    }
}


int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    Matriz M = matriz_le(n, m);
    matriz_print(M, n, m);

    return 0;
}
