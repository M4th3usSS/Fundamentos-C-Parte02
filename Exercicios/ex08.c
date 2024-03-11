/*
    Autor: Matheus Souso
    Objetivo: Resolu��o de exerc�cio

    Elabore um programa que, dado o n�mero do m�s, indica quantos dias t�m esse m�s. Utilize para isso a estrutura 
    de sele��o switch.
    Obs.: Considere fevereiro como tendo 28 dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("Digite um n�mero de m�s: ");
    scanf("%d", &mes);

    switch (mes) {
    case 2:
        printf("O m�s possui 28 dias");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("O m�s possui 30 dias");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O m�s possui 31 dias");
        break;
    default:
        printf("N�mero de m�s digitado inv�lido!");
    }

    return 0;
}