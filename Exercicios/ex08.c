/*
    Autor: Matheus Souso
    Objetivo: Resolução de exercício

    Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para isso a estrutura 
    de seleção switch.
    Obs.: Considere fevereiro como tendo 28 dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("Digite um número de mês: ");
    scanf("%d", &mes);

    switch (mes) {
    case 2:
        printf("O mês possui 28 dias");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("O mês possui 30 dias");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O mês possui 31 dias");
        break;
    default:
        printf("Número de mês digitado inválido!");
    }

    return 0;
}