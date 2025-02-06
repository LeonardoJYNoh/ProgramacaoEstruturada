#include <stdio.h>

void count_down(int n){
    if(n == 0){
        printf("ACABOU!!!");
    }
    else{
        printf("%d\n", n);
        count_down(n-1);
    }
}



int main(){
    int n;
    scanf("%d", &n);
    count_down(n);

    return 0;
}