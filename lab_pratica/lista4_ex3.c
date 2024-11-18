#include <stdio.h>
#define MAX 100

void inversor_CAPS(char str[MAX]){

    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", str[i] + 32);
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        }
        else {
            printf("%c", str[i]);
        }
    }

}


int main(){
    char str[MAX];
    printf("Digite uma frase, para transforma maiusculas em minusculas e vice-versa\n");
    fgets(str, MAX, stdin);
    inversor_CAPS(str);

}