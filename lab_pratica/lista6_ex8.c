#include <stdio.h>

void Collatz(int n){
    
    printf("%d ", n);
    if (n == 1){
        return;
    }else{
        if(n%2 == 0){
            n /= 2;
        }
        else{
            n = (n*3) + 1;
        }
        Collatz(n);
    }
}

int main(){
    int n = 7;
    Collatz(n);
}