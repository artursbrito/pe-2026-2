#include <stdio.h>

#define IDADE_MINIMA 0
#define IDADE_MAXIMA 130
#define AND_ATUAL 2026

int main() {
    int idade;
    do {
        printf("Digite a sua idade: ");
        scanf("%dd", &idade);
    } while (idade < IDADE_MINIMA && idade > IDADE_MAXIMA);
    printf("Voce tem %d anos e nasceu em %d/n", idade, AND_ATUAL - idade);
    return 0;
}