/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio

    Escreva um programa em C que leia tr�s valores e apresente qual � o maior e qual � o menor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int a, b, c, aux;

    printf("Digite tr�s vair�veis: ");
    scanf("%d%d%d", &a, &b, &c);

    aux = a;
    if (b > aux)
        aux = b;
    if (c > aux)
        aux = c;

    printf("\nMaior valor = %d", aux);

    aux = a;
    if (b < aux)
        aux = b;
    if (c < aux)
        aux = c;

    printf("\nMenor valor = %d", aux);

    return 0;
}