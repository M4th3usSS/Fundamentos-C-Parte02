/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício

    Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores são negativos e 
    quantos são positivos. Ao final, imprima na tela a quantidade de números negativos e positivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, n4, n5, contNeg = 0, contPos = 0, contZero = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    n1 > 0 ? contPos++ : 
        n1 < 0 ? contNeg++ :
            contZero ++;

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    n2 > 0 ? contPos++ :
        n2 < 0 ? contNeg++ :
            contZero++;
    
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    n3 > 0 ? contPos++ :
        n3 < 0 ? contNeg++ :
            contZero++;

    printf("Digite o quarto número: ");
    scanf("%d", &n4);

    n4 > 0 ? contPos++ :
        n4 < 0 ? contNeg++ :
            contZero++;

    printf("Digite o quinto número: ");
    scanf("%d", &n5);

    n5 > 0 ? contPos++ :
        n5 < 0 ? contNeg++ :
            contZero++;

    printf("\nQuantidade de positivos: %d\nQuantidade de negativos: %d\nQuantidade de zeros: %d\n",
    contPos, contNeg, contZero);


    return 0;
}