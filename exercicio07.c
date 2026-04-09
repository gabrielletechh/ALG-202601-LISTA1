#include <stdio.h>

int main() {
    int numero, i, primo;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 2) {
        printf("%d nao e primo.\n", numero);
        return 0;
    }

    primo = 1; /* Assume que e primo ate provar o contrario */

    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("%d e primo.\n", numero);
    } else {
        printf("%d nao e primo.\n", numero);
    }

    return 0;
}
