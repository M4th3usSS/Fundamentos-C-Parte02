/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio

    Escreva um programa em C que leia um n�mero e informe se ele � divis�vel por 2, por 3 ou por 5, ou se n�o � 
    divis�vel por nenhum deles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        printf("O n�mero � divis�vel por 2, 3 ou 5!");
    else
        printf("O n�mero N�O � divis�vel por 2, 3, ou 5!");

    return 0;
}