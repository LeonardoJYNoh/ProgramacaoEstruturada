#include <stdio.h>
#define max 100


//Escreva um programa que recebe um caractere e uma frase e imprima a frase fornecida até a primeira ocorrência do caractere fornecido.

int tamanho(char str[max]){
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}


void parar_ocorrencia(char str[max], char entrada){
    int i;
    for (i = 0; (str[i] != entrada && str[i] != '\0'); i++){
        printf("%c", str[i]);
    }
    printf("%c\n", entrada);
}

int main() {

    char str[max], entrada;
    printf("digite o caractere: ");
    scanf("%c", &entrada);
    getchar();
    printf("digite a frase: ");
    fgets(str, max, stdin);
    parar_ocorrencia(str, entrada);

}