#include <stdio.h>

#define QTD_MAX_VALORES 5

int main() {
    int num, soma = 0,qtd = 0;
    int numeros [QTD_MAX_VALORES];
    double media;
    printf("Digite um valor inteiro positivo (<= 0 para finalizar): ");
    scanf("%d", &num);
    while (num > 0){
        numeros[qtd] = num;
        soma =+ num;
        qtd += 1;
        if (qtd > QTD_MAX_VALORES) {
            printf("Quantidade máxima de valores atingida!\n");
            break;
        }
        printf("Digite um valor inteiro positivo (<= 0 para finalizar):");
        scanf("%d", &num);
    }
    if (qtd > 0){
        media = (double) soma / (double) qtd ;
        printf("Foram digitados %d números e a média é %lf.\n", qtd, media);
        } else {
            printf("Nenhum numerom valido foi digitado!\n");
        }
        for (int i = 0; i < QTD_MAX_VALORES; i+= 1){
            printf("numeros [%d] = %d\n", i + 1, numeros[i]);
            /* code */
        }

    return 0;
}