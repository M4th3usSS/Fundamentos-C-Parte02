/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio
    
    Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no calend�rio. Caso 
    corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem "M�s Inv�lido".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        printf("M�s v�lido - Janeiro");
        break;
    case 2:
        printf("M�s v�lido - Fevereiro");
        break;
    case 3:
        printf("M�s v�lido - Mar�o");
        break;
    case 4:
        printf("M�s v�lido - Abril");
        break;
    case 5:
        printf("M�s v�lido - Maio");
        break;
    case 6:
        printf("M�s v�lido - Junho");
        break;
    case 7:
        printf("M�s v�lido - Julho");
        break;
    case 8:
        printf("M�s v�lido - Agosto");
        break;
    case 9:
        printf("M�s v�lido - Setembro");
        break;
    case 10:
        printf("M�s v�lido - Outubro");
        break;
    case 11:
        printf("M�s v�lido - Novembro");
        break;
    case 12:
        printf("M�s v�lido - Dezembro");
        break;
    default:
        printf("M�s inv�lido!");
    }

    return 0;
}