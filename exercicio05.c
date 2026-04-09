#include <stdio.h>

int main() {
    /* Usando unsigned long long para suportar os grandes valores de Fibonacci */
    unsigned long long anterior = 0, atual = 1, proximo;
    int i;

    printf("Os 100 primeiros termos da serie de Fibonacci:\n");
    printf("Termo 1: %llu\n", anterior);
    printf("Termo 2: %llu\n", atual);

    for (i = 3; i <= 100; i++) {
        proximo = anterior + atual;
        printf("Termo %d: %llu\n", i, proximo);
        anterior = atual;
        atual = proximo;
    }

    return 0;
}
