/*    
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio

    Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.
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
        printf("A letra � uma vogal");
    else
        printf("A letra N�O � uma vogal");

    return 0;
}