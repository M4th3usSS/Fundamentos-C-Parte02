/*    
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício

    Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' 
    || letra == 'i' || letra == 'o' || letra == 'u')
        printf("A letra é uma vogal");
    else
        printf("A letra NÃO é uma vogal");

    return 0;
}