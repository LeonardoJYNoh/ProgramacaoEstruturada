#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int primeiro;
    int segundo;
} Par;

Par* cartesiano(int* v1, int n1, int* v2, int n2){
    int size = n1 * n2;

    Par* produto = malloc(sizeof(Par) * size);

        int index = 0;
            for (int i = 0; i < n1; i++){
                for (int j = 0; j < n2; j++){
                    produto[index].primeiro = v1[i];
                    produto[index].segundo = v2[j];
                    index++;
                }
            }

    return produto;
}

int main(){
    int v1[] = {1, 2, 3};
    int n1 = 3;
    int v2[] = {4, 5};
    int n2 = 2;

    Par* resultado = cartesiano(v1, n1, v2, n2);

    printf("imprimir o produto cartesiano\n");
    for (int i = 0; (i < (n1 * n2)); i++){
        printf("(%d, %d)\n", resultado[i].primeiro, resultado[i].segundo);
    }

    return 0;

}