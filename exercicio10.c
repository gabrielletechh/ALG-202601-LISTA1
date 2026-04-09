#include <stdio.h>

int main() {
    float valor, soma = 0;
    int quantidade = 0;

    printf("Digite valores positivos (valor negativo para encerrar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break; /* Encerra o laco quando o valor for negativo */
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade == 0) {
        printf("Nenhum valor positivo foi informado. Nao e possivel calcular a media.\n");
    } else {
        printf("\nQuantidade de valores informados: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media dos valores: %.2f\n", soma / quantidade);
    }

    return 0;
}
