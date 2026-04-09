#include <stdio.h>

int main() {
    float a, b, c, maior, menor, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    /* Calcula o maior */
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    /* Calcula o menor */
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    /* Calcula a media */
    media = (a + b + c) / 3.0;

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
