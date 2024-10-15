#include <stdio.h>

int fatorial (int num) {
    int i;
    for(i = num-1; i > 1; i--){
        num *= i;
    }
    return num;
}

int main() {
    int n;
    printf("Digite o valor que voce quer fatorar: ");
    scanf("%d", &n);
    printf("%d\n", fatorial(n));
}