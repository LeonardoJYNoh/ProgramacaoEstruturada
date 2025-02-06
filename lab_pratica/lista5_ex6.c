#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *a = "Hello ";
    char *b = "World!";

    char *c = malloc(sizeof(char) * (strlen(a)+strlen(b)+1));

    strcpy(c, a);
    strcat(c, b);
    c[strlen(a)+strlen(b)] = '\0';

    printf("%s\n", c);
    free(c);
}