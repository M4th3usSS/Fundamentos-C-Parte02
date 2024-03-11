/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício

    Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int a, b, c, aux;

    printf("Digite três vairáveis: ");
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