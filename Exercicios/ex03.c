/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício

    Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é 
    divisível por nenhum deles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        printf("O número é divisível por 2, 3 ou 5!");
    else
        printf("O número NÃO é divisível por 2, 3, ou 5!");

    return 0;
}