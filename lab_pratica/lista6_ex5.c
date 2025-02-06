#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int a,int b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    int a, b;
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de b: ");
    scanf("%d", &b);
    printf("%d", gcd(a, b));

}

