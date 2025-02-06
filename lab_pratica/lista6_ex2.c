#include <stdio.h>

double power(double a, int b){ 
    double c = a;
    if (b == 0){
        return 1;
    }
    if (b == 1){
        return c;
    }
    else{
        return c * power(a, b-1);
    }

}

int main(){
    double a;
    int b;
    scanf("%lf %d", &a, &b);
    printf("%.2lf",power(a, b));


    return 0;
}