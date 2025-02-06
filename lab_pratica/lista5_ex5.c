#include <stdio.h>

void swap(int **a, int **b){
    int *temp = *a;
    *a = *b;
    *b = temp;
}

void read_list(int *lista, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}
int main(){
    int a[3] = {5, 6, 7};
    int b[4] = {1, 2, 0, 8};
    int *pa = a;
    int *pb = b;

    swap(&pa, &pb);
    read_list(pa, 4);
    read_list(pb, 3);
    return 0;
}