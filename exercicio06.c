#include <stdio.h>

int main() {
    int n, divisor, soma;

    printf("Numeros perfeitos entre 1 e 100:\n");

    for (n = 1; n <= 100; n++) {
        soma = 0;

        /* Soma todos os divisores proprios de n (excluindo o proprio n) */
        for (divisor = 1; divisor < n; divisor++) {
            if (n % divisor == 0) {
                soma += divisor;
            }
        }

        /* Um numero e perfeito se a soma dos seus divisores proprios for igual a ele */
        if (soma == n) {
            printf("%d e um numero perfeito (divisores: ", n);
            for (divisor = 1; divisor < n; divisor++) {
                if (n % divisor == 0) {
                    printf("%d ", divisor);
                }
            }
            printf(")\n");
        }
    }

    return 0;
}
