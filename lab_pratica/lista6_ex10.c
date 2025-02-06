#include <stdio.h>

void gerar_sequencias(int n, int posicao, char* sequencia){
    if (posicao == n){ 
        printf("%s\n", sequencia);
        return;
    } 

    sequencia[posicao] = '0';
    printf("posicao %d\n", posicao);

    gerar_sequencias(n, posicao+1, sequencia);

    sequencia[posicao] = '1';
    printf("posicao %d\n", posicao);

    gerar_sequencias(n, posicao+1, sequencia);
}



void list_all_bit_strings(int n) {
    char sequencia[n + 1];
    sequencia[n] = '\0';
    gerar_sequencias(n, 0, sequencia);
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    list_all_bit_strings(n);

    return 0;
}