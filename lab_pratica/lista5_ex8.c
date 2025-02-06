#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* revert(char* s){
    int tamanho = strlen(s);
    printf("%d\n", tamanho);
    
    char* reverso = malloc(sizeof(char) * (tamanho+1));

    for (int i = 0; i < tamanho; i++){
        reverso[i] = s[tamanho - i - 1];
    }

    reverso[tamanho] = '\0';

    return reverso;
    
}

int main(){
    char* palavra = "leonardo";
    char* invertido = revert(palavra);

    printf("%s", invertido);


}