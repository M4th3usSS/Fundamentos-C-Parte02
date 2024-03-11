/*
    Autor: Matheus Souso
    Objetivo: Resolução de exercício

    Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
    de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
    a apresente a média:
    Opções:
    A - Aritmética.
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

    printf("Digite o tipo de média a ser calculada [A - Aritmética   P - Ponderada]: ");
    scanf(" %c", &opcao);
    
    switch(opcao) {
    case 'A':
        media = (n1 + n2 + n3) / 3;
        printf("Média aritmética = %.2f", media);
        break;
    case 'P':
        media = (n1 * 3 + n2 * 3 + n3 * 4) / 10;
        printf("Média ponderada = %.2f", media);
        break;
    default:
        printf("Opção inválida!");
    }

    return 0;
}