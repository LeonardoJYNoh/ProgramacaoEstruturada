#include <stdio.h>
#include <stdlib.h>

///Escreva a função swap(a, b). Essa função recebe como parâmetro dois inteiros a e b e não tem nenhum retorno. O comportamento dessa função deve ser o seguinte: após a execução da mesma, os valores de a e b devem estar trocados, como ilustra o exemplo a seguir.


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a = 5;
    int b = 7;

    swap(&a, &b);
    printf("a: %d\n", a); 
    printf("b: %d\n", b);
}