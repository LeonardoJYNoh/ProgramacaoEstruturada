#include <stdio.h>
#include <stdlib.h>

int* creat_list(int n){
    int *v = malloc(sizeof(int)*n);

        for (int i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }
    return v;
}

double mean(int* v, int n){
    double total = 0;
    for (int i = 0; i < n; i++){
            total += v[i];
        }
    double mean = total/n;
    return mean;
}

int main(){
    int n;
    printf("Digite o tamanho da sua lista\n");
    scanf("%d", &n);
    printf("Digite os elementos da sua lista\n");   
    int *v = creat_list(n);
    printf("A media e: ");
    printf("%.2lf", mean(v, n));
    free(v);


}