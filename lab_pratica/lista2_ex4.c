//Questão 4. Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, e duas matrizes A e B de ordem n×m, calcule a matriz C = A + B, onde a entrada C(i,j) = A(i,j) + B(i,j).

#include <stdio.h>
#define MAX 1000

void le_matriz(int n, int m, int mat[MAX][MAX]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Defina o valor de mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void soma_matriz(int a[MAX][MAX], int b[MAX][MAX], int n, int m){
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", (a[i][j] + b[i][j]));
        }
        printf("\n");
    }
}

int main(){
    int n, m;
    int a[MAX][MAX], b[MAX][MAX];
    
    printf("Digite o número de linhas (n): ");
    scanf("%d", &n);
    printf("Digite o número de colunas (m): ");
    scanf("%d", &m);
    
    le_matriz(n, m, a);
    le_matriz(n, m, b);
    soma_matriz(a, b, n, m);

    return 0;
}