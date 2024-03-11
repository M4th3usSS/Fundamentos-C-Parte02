/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício
    
    Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no calendário. Caso 
    corresponda, escrever o nome do mês, caso contrário, escrever a mensagem "Mês Inválido".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        printf("Mês válido - Janeiro");
        break;
    case 2:
        printf("Mês válido - Fevereiro");
        break;
    case 3:
        printf("Mês válido - Março");
        break;
    case 4:
        printf("Mês válido - Abril");
        break;
    case 5:
        printf("Mês válido - Maio");
        break;
    case 6:
        printf("Mês válido - Junho");
        break;
    case 7:
        printf("Mês válido - Julho");
        break;
    case 8:
        printf("Mês válido - Agosto");
        break;
    case 9:
        printf("Mês válido - Setembro");
        break;
    case 10:
        printf("Mês válido - Outubro");
        break;
    case 11:
        printf("Mês válido - Novembro");
        break;
    case 12:
        printf("Mês válido - Dezembro");
        break;
    default:
        printf("Mês inválido!");
    }

    return 0;
}