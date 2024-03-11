/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio

    Escreva um programa em C que l� 5 n�meros inteiros, um por vez. Conte quantos destes valores s�o negativos e 
    quantos s�o positivos. Ao final, imprima na tela a quantidade de n�meros negativos e positivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, n4, n5, contNeg = 0, contPos = 0, contZero = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    
    n1 > 0 ? contPos++ : 
        n1 < 0 ? contNeg++ :
            contZero ++;

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    n2 > 0 ? contPos++ :
        n2 < 0 ? contNeg++ :
            contZero++;
    
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &n3);

    n3 > 0 ? contPos++ :
        n3 < 0 ? contNeg++ :
            contZero++;

    printf("Digite o quarto n�mero: ");
    scanf("%d", &n4);

    n4 > 0 ? contPos++ :
        n4 < 0 ? contNeg++ :
            contZero++;

    printf("Digite o quinto n�mero: ");
    scanf("%d", &n5);

    n5 > 0 ? contPos++ :
        n5 < 0 ? contNeg++ :
            contZero++;

    printf("\nQuantidade de positivos: %d\nQuantidade de negativos: %d\nQuantidade de zeros: %d\n",
    contPos, contNeg, contZero);


    return 0;
}