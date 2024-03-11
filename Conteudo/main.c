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
        Estruturas de decis�o if - SE:
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO n�mero � negativo!\n");

}

void aula_40() {

    /*
        Estrura de decis�o if else - SE SEN�O
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO n�mero � negativo!\n");
    else
        printf("\n\tO n�mero � positivo ou igual a zero!\n");

    printf("\nContinua��o do programa...\n");

}

void aula_41() {

    /*
        Verdadeiro e Falso na linguagem C:

        Falso       -> Zero;
        Verdadeiro  -> Qualquer valor diferente de zero;
    */

    int a = 1, b = 2;

    printf("Resultado l�gico (Falso): %d\n", a == b);
    printf("Resultado l�gico (Verdadeiro): %d\n", a != b);

}

void aula_42() {

    /*
        Endenta��o e uso das chaves:

        Use endenta��o para deixar o c�digo mais leg�vel;
        O uso de chaves � facultativo quando h� somente uma instru��o no if, bloco de instru��es exigem o uso das 
        chaves!
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\n\tO n�mero � negativo ");
        printf("\n\tAqui � um bloco de c�digos");        
    }
    else {
        printf("\n\tO n�mero � positivo ou igual a zero");
        printf("\n\tAqui � um bloco de c�digos");        
    }
    
}

void aula_43() {

    /*
        Operador tern�rio:

        condi��o ? intru��o quando verdadeiro : intru��o quando falso
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    (num % 2== 0) ? printf("\n\tO n�mero � par\n\n") : printf("\n\tO n�mero � impar\n\n");

}

void aula_44() {

    /*
        Decis�es aninhadas:
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO n�mero � negativo!\n");
    else
        if(num > 0)
            printf("\n\tO n�mero � positivo!\n");
        else
            printf("\n\tO n�mero � igual a zero!\n");
}

void aula_45() {

    /*
        Operador tern�rio aninhado:
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    (num > 0) ? printf("\n\tO n�mero � positivo!\n"):
        (num < 0)  ? printf("\n\tO n�mero � negativo!\n"):
            printf("\n\tO n�mero � igual a zero!\n");

}

void aula_46() {

    /*
        Operador l�gico de nega��o - !

        TABELA VERDADE:
                        p    !p
                        V    F
                        F    V

        OBS.: Cuidado com o uso desse operador!

        Vimos que falso � representado por 0 e verdadeiro qualquer valor diferente de zero;
        Se voc� usar nega��o em uma vari�vel igual a 0, o resultado ser� 1;
        Se voc� usar nega��o em qualquer vari�vel com valor diferente de 0, o resultado ser� 0;
        Ent�o se o objetivo � negar o resultado de uma express�o l�gica, lembre-se de envolv�-la com par�nteses para 
        evitar a nega��o acidental de um dos operandos da express�o!
    */

    printf("Negando o valor 0: %d\n", !0);
    printf("Negando o valor 1: %d\n", !1);
    printf("Negando o valor 23: %d\n", !23);
    printf("Negando o valor -123: %d\n\n", !-123);

    /*
        Veja que o uso de par�nteses � extremamente import�nte para o resultado da pr�xima express�o:
    */

    printf("Negando uma express�o sem o uso de par�nteses !1 > 1 : %d\n", !1 > 1);
    printf("Negando uma express�o com o uso de par�nteses !(1 > 1) : %d\n", !(1 > 1));

}

void aula_47() {

    /*

        Operador l�gico and (&&)

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

    (sexo == 'M' && idade >= 18) ? printf("\n\tSeu alistamento � obrigat�rio!\n") :
        (sexo == 'M') ? printf("\n\tSeu alistamento n�o � obrigat�rio at� que complete 18 anos!\n"):
            printf("\n\tSeu alistamento n�o � obrigat�rio!\n");

}

void aula_48() {

    /*
        Operador l�gico ou - or (||)

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

    (idade <= 5 || idade >= 60) ? printf("\n\tVoc� tem direito a passagem gratuita!\n"):
        printf("\n\tVoc� N�O tem direito a passagem gratuita!\n");

}

void aula_49() {

    /*
        else if encadeados
    */

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n\tO n�mero � negativo!\n");
    else if(num > 0)
        printf("\n\tO n�mero � positivo!\n");
    else
        printf("\n\tO n�mero � igual a zero!\n");

}

void aula_50() {

    /*
        Estrutura de sele��o switch case:
        
        Op��es: - 1 = Cadastrar produto
                - 2 = Vender produto
                - 3 = Buscar produto
                - 4 = Imprimir relat�rio
                - 0 = Sair
    */

    int opcao;

    printf("\t1 - Cadastrar produto\
           \n\t2 - Vender produto\
           \n\t3 - Buscar produto\
           \n\t4 - Imprimir produto\
           \n\t0 - Sair\n");

    printf("\nDigite sua op��o: ");
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
        printf("\n\tImprimindo relat�rio...\n");
        break;
    case 0:
        printf("\n\tSaindo...\n");
        break;
    default:
        printf("\n\tOp��o inv�lida!\n");
    }
}

void aula_51() {

    /*
        Estrutura de sele��o switch case com caracter
    */

    char opcao;

    printf("\tC - Cadastrar produto\
           \n\tV - Vender produto\
           \n\tB - Buscar produto\
           \n\tI - Imprimir produto\
           \n\tS - Sair\n");

    printf("\nDigite sua op��o: ");
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
        printf("\n\tImprimindo relat�rio...\n");
        break;
    case 'S':
        printf("\n\tSaindo...\n");
        break;
    default:
        printf("\n\tOp��o inv�lida!\n");
    }
}

int main()
{
    printf(setlocale(LC_ALL, "Portuguese"));
    printf("\nOl� mundo!\n\n");

    // Coloque as fun��es da aula aqui...
    aula_42();

    return 0;
}
