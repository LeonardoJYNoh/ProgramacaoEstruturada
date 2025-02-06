#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverte(char* palavra, int inicio,int fim){
    
    if (inicio >= fim){
        return palavra;
    }
    else{
        char temp = palavra[inicio];
        palavra[inicio] = palavra[fim];
        palavra[fim] = temp;

        return inverte(palavra, inicio + 1, fim - 1);

    }
}

int main(){
    char palavra[] = "abobora";
    int tamanho = strlen(palavra);
    printf("%s", inverte(palavra, 0, tamanho-1));

    return 0;
}