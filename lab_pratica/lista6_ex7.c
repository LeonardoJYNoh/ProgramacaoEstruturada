#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void convert_to_binary(int n, char output[]){
    static int i;
    if (n>0){

        
        convert_to_binary(n/2, output);
        output[i] = n%2 + '0';
        i++;
    }
}

char* tamanho_binario(int n){
    int i = 1;
    while(pow(2, i) <= n){
        i++;
    }
    char *output = malloc(sizeof(char)*(i+1));

    output[i] = '\0';

    return output;
}

int main(){
    int n;
    scanf("%d", &n);
    char *output = tamanho_binario(n);
    convert_to_binary(n, output);
    printf("Representacao binaria de %d: %s\n", n, output);
    free(output);
    return 0;
    
}