/*
    Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos dos lados de um 
    tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo � equil�tero, is�sceles ou escaleno. 
    Caso contr�rio, seu programa deve escrever a mensagem "N�o formam um tri�ngulo".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b , c;

    printf("Digite os lados do tri�ngulo:\n");
    scanf("%f%f%f", &a, &b, &c);

    if((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\n\tOs valores digitados formam um tri�gulo -");
        if( a == b && b == c)
            printf(" equil�tero\n");
        else
            if ( a == b || b == c || a == c)
                printf(" is�sceles\n");
            else
                printf(" escaleno\n");
    }
    else {
        printf("\n\tOs valores digitados N�O formam um tri�ngulo\n");
    }
        
    return 0;
}