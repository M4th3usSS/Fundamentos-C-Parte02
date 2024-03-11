#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aula_38() {

    /*
        Operadores relacionais.:

        Menor que       (a < b)
        Maior que       (a > b)
        Menor ou igual  (a <= b)
        Maior ou igual  (a >= b)
        igual           (a == b)
        diferente       (a != b)
    */

    int a = 10, b = 20;

    printf("Valor de a = %d\nValor de b = %d\n\n", a, b);
    printf("\tResultado (a < b): %d\n\n", a < b);
    printf("\tResultado (a > b): %d\n\n", a > b);
    printf("\tResultado (a <= b): %d\n\n", a <= b);
    printf("\tResultado (a >= b): %d\n\n", a >= b);
    printf("\tResultado (a == b): %d\n\n", a == b);
    printf("\tResultado (a != b): %d\n\n", a != b);

}

void aula_39() {

    /*
        Estruturas de decisão if - SE:
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO número é negativo!\n");

}

void aula_40() {

    /*
        Estrura de decisão if else - SE SENÃO
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO número é negativo!\n");
    else
        printf("\n\tO número é positivo ou igual a zero!\n");

    printf("\nContinuação do programa...\n");

}

void aula_41() {

    /*
        Verdadeiro e Falso na linguagem C:

        Falso       -> Zero;
        Verdadeiro  -> Qualquer valor diferente de zero;
    */

    int a = 1, b = 2;

    printf("Resultado lógico (Falso): %d\n", a == b);
    printf("Resultado lógico (Verdadeiro): %d\n", a != b);

}

void aula_42() {

    /*
        Endentação e uso das chaves:

        Use endentação para deixar o código mais legível;
        O uso de chaves é facultativo quando há somente uma instrução no if, bloco de instruções exigem o uso das 
        chaves!
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\n\tO número é negativo ");
        printf("\n\tAqui é um bloco de códigos");        
    }
    else {
        printf("\n\tO número é positivo ou igual a zero");
        printf("\n\tAqui é um bloco de códigos");        
    }
    
}

void aula_43() {

    /*
        Operador ternário:

        condição ? intrução quando verdadeiro : intrução quando falso
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    (num % 2== 0) ? printf("\n\tO número é par\n\n") : printf("\n\tO número é impar\n\n");

}

void aula_44() {

    /*
        Decisões aninhadas:
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO número é negativo!\n");
    else
        if(num > 0)
            printf("\n\tO número é positivo!\n");
        else
            printf("\n\tO número é igual a zero!\n");
}

void aula_45() {

    /*
        Operador ternário aninhado:
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    (num > 0) ? printf("\n\tO número é positivo!\n"):
        (num < 0)  ? printf("\n\tO número é negativo!\n"):
            printf("\n\tO número é igual a zero!\n");

}

void aula_46() {

    /*
        Operador lógico de negação - !

        TABELA VERDADE:
                        p    !p
                        V    F
                        F    V

        OBS.: Cuidado com o uso desse operador!

        Vimos que falso é representado por 0 e verdadeiro qualquer valor diferente de zero;
        Se você usar negação em uma variável igual a 0, o resultado será 1;
        Se você usar negação em qualquer variável com valor diferente de 0, o resultado será 0;
        Então se o objetivo é negar o resultado de uma expressão lógica, lembre-se de envolvê-la com parênteses para 
        evitar a negação acidental de um dos operandos da expressão!
    */

    printf("Negando o valor 0: %d\n", !0);
    printf("Negando o valor 1: %d\n", !1);
    printf("Negando o valor 23: %d\n", !23);
    printf("Negando o valor -123: %d\n\n", !-123);

    /*
        Veja que o uso de parênteses é extremamente importânte para o resultado da próxima expressão:
    */

    printf("Negando uma expressão sem o uso de parênteses !1 > 1 : %d\n", !1 > 1);
    printf("Negando uma expressão com o uso de parênteses !(1 > 1) : %d\n", !(1 > 1));

}

void aula_47() {

    /*

        Operador lógico and (&&)

        TABELA VERDADE:
                        p   q   p && q
                        V   V     V
                        V   F     F
                        F   V     F
                        F   V     F
    */

    char sexo;
    int idade;

    printf("Digite seu sexo [M/F]: ");
    scanf(" %c", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    (sexo == 'M' && idade >= 18) ? printf("\n\tSeu alistamento é obrigatório!\n") :
        (sexo == 'M') ? printf("\n\tSeu alistamento não é obrigatório até que complete 18 anos!\n"):
            printf("\n\tSeu alistamento não é obrigatório!\n");

}

void aula_48() {

    /*
        Operador lógico ou - or (||)

        TABELA VERDADE:
                        p   q   p || q
                        V   V     V
                        V   F     V
                        F   V     V
                        F   F     F
    */

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    (idade <= 5 || idade >= 60) ? printf("\n\tVocê tem direito a passagem gratuita!\n"):
        printf("\n\tVocê NÃO tem direito a passagem gratuita!\n");

}

void aula_49() {

    /*
        else if encadeados
    */

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO número é negativo!\n");
    else if(num > 0)
        printf("\n\tO número é positivo!\n");
    else
        printf("\n\tO número é igual a zero!\n");

}

void aula_50() {

    /*
        Estrutura de seleção switch case:
        
        Opções: - 1 = Cadastrar produto
                - 2 = Vender produto
                - 3 = Buscar produto
                - 4 = Imprimir relatório
                - 0 = Sair
    */

    int opcao;

    printf("\t1 - Cadastrar produto\
           \n\t2 - Vender produto\
           \n\t3 - Buscar produto\
           \n\t4 - Imprimir produto\
           \n\t0 - Sair\n");

    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\n\tCadastrando novo produto...\n");
        break;
    case 2:
        printf("\n\tVendendo produto...\n");
        break;
    case 3:
        printf("\n\tBuscando produto...\n");
        break;
    case 4:
        printf("\n\tImprimindo relatório...\n");
        break;
    case 0:
        printf("\n\tSaindo...\n");
        break;
    default:
        printf("\n\tOpção inválida!\n");
    }
}

void aula_51() {

    /*
        Estrutura de seleção switch case com caracter
    */

    char opcao;

    printf("\tC - Cadastrar produto\
           \n\tV - Vender produto\
           \n\tB - Buscar produto\
           \n\tI - Imprimir produto\
           \n\tS - Sair\n");

    printf("\nDigite sua opção: ");
    scanf(" %c", &opcao);

    switch (opcao){
    case 'C':
        printf("\n\tCadastrando novo produto...\n");
        break;
    case 'V':
        printf("\n\tVendendo produto...\n");
        break;
    case 'B':
        printf("\n\tBuscando produto...\n");
        break;
    case 'I':
        printf("\n\tImprimindo relatório...\n");
        break;
    case 'S':
        printf("\n\tSaindo...\n");
        break;
    default:
        printf("\n\tOpção inválida!\n");
    }
}

int main()
{
    printf(setlocale(LC_ALL, "Portuguese"));
    printf("\nOlá mundo!\n\n");

    // Coloque as funções da aula aqui...
    aula_42();

    return 0;
}
