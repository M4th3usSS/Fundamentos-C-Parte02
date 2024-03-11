/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio

    O IMC (�ndice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg) pela altura 
    (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso e a altura de uma pessoa, 
    calcule e mostre o IMC e a faixa em que o indiv�duo se enquadra de acordo com a tabela abaixo:

    IMC                             Interpreta��o

    Menor que 18,5                  Abaixo do peso
    Entre 18,5 e menor que 25       Peso normal
    Entre 25 e menor que 30         Sobrepeso
    Entre 30 e menor que 35         Obesidade grau 1
    Entre 35 e menor que 40         Obesidade grau 2
    Maior ou igual a 40             Obesidade grau 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m, h, imc;

    printf("Digite sua altura(metros): ");
    scanf("%f", &h);
    printf("Digite seu peso(Kg): ");
    scanf("%f", &m);

    imc = m / (h * h);

    imc < 18.5 ? printf("IMC = %.2f - Abaixo do peso", imc):
        imc < 25 ? printf("IMC = %.2f - Peso normal", imc):
            imc < 30 ? printf("IMC = %.2f - Sobrepeso", imc):
                imc < 35 ? printf("IMC = %.2f - Obesidade grau 1", imc):
                    imc < 40 ? printf("IMC = %.2f - Obesidade grau 2", imc):
                        printf("IMC = %.2f - Obesidade grau 3", imc);

    return 0;
}