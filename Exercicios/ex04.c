/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício

    Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
    de Dólar para Real. Utilize como taxa de câmbio U$1 igual a R$5.30.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float valor, convertido;

    printf(
        "1 - Converter de Real para Dólar\
        \n2 - Converter de Dolar para Real\
        \nDigite sua opção: "
    );
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: $");
    scanf("%f", &valor);

    switch(opcao) {
    case 1:
        convertido = valor / 5.3;
        printf("Valor convertido = U$%.2f", convertido);
        break;
    case 2:
        convertido = valor * 5.3;
        printf("Valor convertido = R$%.2f", convertido);
        break;
    default:
        printf("Opção inválida!");
    }

    return 0;
}