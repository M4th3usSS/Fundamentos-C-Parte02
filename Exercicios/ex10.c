/*
    Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos dos lados de um 
    triângulo. Caso positivo, seu programa deve informar também se o triângulo é equilátero, isósceles ou escaleno. 
    Caso contrário, seu programa deve escrever a mensagem "Não formam um triângulo".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b , c;

    printf("Digite os lados do triângulo:\n");
    scanf("%f%f%f", &a, &b, &c);

    if((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\n\tOs valores digitados formam um triâgulo -");
        if( a == b && b == c)
            printf(" equilátero\n");
        else
            if ( a == b || b == c || a == c)
                printf(" isósceles\n");
            else
                printf(" escaleno\n");
    }
    else {
        printf("\n\tOs valores digitados NÃO formam um triângulo\n");
    }
        
    return 0;
}