/*
    Autor: Matheus Souso
    Objetivo: Resolu��o de exerc�cio

    Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir
    de tr�s notas. Fa�a um programa que leia as notas e o tipo da m�dia escolhida pelo usu�rio e calcule
    a apresente a m�dia:
    Op��es:
    A - Aritm�tica.
    P - Ponderada (pesos: 3,3,4).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3 , media;
    char opcao;

    printf("Digite a nota 01 [0 - 10]: ");
    scanf("%f", &n1);

    printf("Digite a nota 02 [0 - 10]: ");
    scanf("%f", &n2);

    printf("Digite a nota 03 [0 - 10]: ");
    scanf("%f", &n3);

    printf("Digite o tipo de m�dia a ser calculada [A - Aritm�tica   P - Ponderada]: ");
    scanf(" %c", &opcao);
    
    switch(opcao) {
    case 'A':
        media = (n1 + n2 + n3) / 3;
        printf("M�dia aritm�tica = %.2f", media);
        break;
    case 'P':
        media = (n1 * 3 + n2 * 3 + n3 * 4) / 10;
        printf("M�dia ponderada = %.2f", media);
        break;
    default:
        printf("Op��o inv�lida!");
    }

    return 0;
}