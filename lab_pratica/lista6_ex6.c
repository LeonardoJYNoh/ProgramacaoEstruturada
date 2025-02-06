#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi(int n, char orig, char dest, char aux) {
    if (n > 0){
        hanoi(n-1, orig, aux, dest);
        printf("Mova de %c para %c\n", orig, dest);
        hanoi(n-1, aux, dest, orig);
    }
} 

int main() {
    hanoi(3, 'A', 'C', 'B');  
    return 0;
}