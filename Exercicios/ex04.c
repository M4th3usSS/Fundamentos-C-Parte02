/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio

    Crie um programa que permita ao usu�rio escolher entre fazer a convers�o de Real para D�lar ou
    de D�lar para Real. Utilize como taxa de c�mbio U$1 igual a R$5.30.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float valor, convertido;

    printf(
        "1 - Converter de Real para D�lar\
        \n2 - Converter de Dolar para Real\
        \nDigite sua op��o: "
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
        printf("Op��o inv�lida!");
    }

    return 0;
}