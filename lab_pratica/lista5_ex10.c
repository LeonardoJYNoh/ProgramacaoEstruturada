#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct vetor_{
int* data;
int capacity; 
int nelements;
}* VectorInt;

VectorInt vectorint(void){
    VectorInt vetor = malloc(sizeof(*vetor));

    vetor -> data = malloc(sizeof(int));
    vetor -> capacity = 1;
    vetor -> nelements = 0;

    return vetor;
}

void vectorint_insert(VectorInt v, int a){
    if (v->nelements == v->capacity){
        v->capacity *= 2;
        v->data = realloc(v->data, v->capacity*sizeof(int));
    }
    v->data[v->nelements++] = a;
}

void vectorint_remove(VectorInt v, int a){
    int j = 0;
    for (int i = 0; (i < v->nelements); i++){
        if (v->data[i] != a){
        v->data[j++] = v->data[i];
        }
    }
    v->nelements = j;

    if (v->nelements < (v->capacity/2) && (v->capacity > 1)){
        v->capacity /= 2;
        v->data = realloc(v->data, v->capacity*sizeof(int));
    }
}

int vectorint_at(VectorInt v, int i) {
    if (i < 0 || i >= v->nelements) {
        fprintf(stderr, "Index out of bounds\n");
        exit(EXIT_FAILURE);
    }
    return v->data[i];
}

bool vectorint_contains(VectorInt v, int a) {
    for (int i = 0; i < v->nelements; i++) {
        if (v->data[i] == a) {
            return true;
        }
    }
    return false;
}

int vectorint_size(VectorInt v) {
    return v->nelements;
}

void vectorint_destroy(VectorInt v) {
    free(v->data);
    free(v);
}

int main() {
    VectorInt v = vectorint();

    vectorint_insert(v, 10);
    vectorint_insert(v, 20);
    vectorint_insert(v, 10);
    vectorint_insert(v, 30);

    printf("Vetor inicial: ");
    for (int i = 0; i < vectorint_size(v); i++) {
        printf("%d ", vectorint_at(v, i));
    }
    printf("\n");

    vectorint_remove(v, 10);

    printf("Apos remover 10: ");
    for (int i = 0; i < vectorint_size(v); i++) {
        printf("%d ", vectorint_at(v, i));
    }
    printf("\n");

    printf("Contem 20? %s\n", vectorint_contains(v, 20) ? "Sim" : "Nao");
    printf("Contem 10? %s\n", vectorint_contains(v, 10) ? "Sim" : "Nao");

    vectorint_destroy(v);
    return 0;
}