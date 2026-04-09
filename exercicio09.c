#include <stdio.h>

int main() {
    /*
     * Um domino padrao tem pecas de (0,0) ate (6,6).
     * Cada peca (i,j) com i <= j aparece exatamente uma vez.
     * A soma total e a soma de todos os valores i+j de cada peca.
     */
    int i, j, somaPeca, somaTotal = 0;

    printf("Pecas do domino e suas somas:\n");
    printf("%-15s %s\n", "Peca", "Soma da peca");
    printf("------------------------------\n");

    for (i = 0; i <= 6; i++) {
        for (j = i; j <= 6; j++) {
            somaPeca = i + j;
            somaTotal += somaPeca;
            printf("(%d, %d)          %d\n", i, j, somaPeca);
        }
    }

    printf("------------------------------\n");
    printf("Soma total de todos os numeros do domino: %d\n", somaTotal);

    return 0;
}
