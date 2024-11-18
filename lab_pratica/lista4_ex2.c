#include <stdio.h>
#define MAX 100

//Escreva um programa que devolva o tamanho da maior cadeia de 0’s de uma string

int contador_sequencia_0(char str[MAX]){

    int sequencia = 0;
    int maior = 0;

    for(int i = 0; str[i] != '\0' ; i++){
        if (str[i] == '0'){
            sequencia++;
        } else {
            if (sequencia > maior){
                maior = sequencia;
            }
            sequencia = 0;
        }

    }

    if (sequencia > maior) {
        maior = sequencia;
    
    }

    return maior;
}


int main(){
    
    char str[MAX];
    printf("Digite a frase, para retornar a maior sequencia de 0\n");
    fgets(str, MAX, stdin);
    printf("%d", contador_sequencia_0(str));

}