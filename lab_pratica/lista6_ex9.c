#include <stdio.h>

int binomio_newton(int n, int k){
    if (k == 0){
        return 1;
    } if (k == n) {
        return 1;
    } else {
        return binomio_newton(n-1, k-1) + binomio_newton(n-1, k);
    }

}

int main() {
    int n, k;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("C(%d, %d) = %d\n", n, k, binomio_newton(n, k));
    
    return 0;
}