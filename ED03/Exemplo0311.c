/*
 Exemplo0311-20 - v0.0. - 29 / 03 / 2023
 Author: Áulus Arcanjo Alves Batista

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0311-20 exemplo0311-20
 Windows: gcc -o exemplo0311-20 exemplo0311-20
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0311-20
 Windows: exemplo0311-20
*/

// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres
#include <math.h>    // para funcoes matematicas
#include "io.h"

void method_00()
{
}

void method_01(void)
{
    // variaveis
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;

    // usuario
    printf("\nQual a palavra desejada? ");
    scanf("%s", palavra);
    getchar();
    tamanho = strlen(palavra);

    // teste
    for (y = 0; y < tamanho; y = +1)
    {
        // teste se maiuscula
        if (('A' <= palavra[y]) && (palavra[y] >= 'Z'))
        {
            // mostrar valor atual
            printf("%d: [%c]\n", y, palavra[y]);
        }
    }
}

void method_02(void)
{
    // variaveis
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;
    int contador = 0;

    // usuario
    printf("\nQual a palavra desejada? ");
    scanf("%s", palavra);
    getchar();
    tamanho = strlen(palavra);

    // teste
    for (y = 0; y < tamanho; y = +1)
    {
        // teste se maiuscula
        if (('A' <= palavra[y]) && (palavra[y] >= 'Z'))
        {
            contador = +1;
        }
        printf("Exitem %d de letras maiusculas", contador);
        printf("%d: [%c]\n", y, palavra[y]);
    }
}

void method_03(void)
{
    // variaveis
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;
    int contador = 0;

    // usuario
    printf("\nQual a palavra desejada? ");
    scanf("%s", palavra);
    getchar();
    tamanho = strlen(palavra);

    // teste
    for (y = 0; y < tamanho; y = +1)
    {
        // teste se maiuscula
        if (('Z' <= palavra[y]) && (palavra[y] >= 'A'))
        {
            contador = +1;
        }
        printf("Exitem %d de letras maiusculas", contador);
        printf("%d: [%c]\n", y, palavra[y]);

    } // end method_03 ( )
}

void method_04(void)
{
    // variaveis
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;
    int contador = 0;

    // usuario
    printf("\nQual a palavra desejada?");
    scanf("%s", palavra);
    getchar();
    tamanho = strlen(palavra);

    // teste
    for (y = 0; y < tamanho; y = y + 1)
    {
        if (('A' <= palavra[y]) && (palavra[y] <= 'Z') || ('a' <= palavra[y] && palavra[y] <= 'z'))
        {
            contador = contador + 1;
            printf("\nAs Letras sao %d", contador);
        }
    }
}

void method_05(void)
{
    // variaveis
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;
    int contador = 0;

    // usuario
    printf("\nQual a palavra desejada?");
    scanf("%s", palavra);
    getchar();
    tamanho = strlen(palavra);

    // testes
    for (y = tamanho - 1; y >= 0; y = y - 1)
    {
        printf("\n%d: [%c]\n", y, palavra[y]);
        contador = tamanho - 1;
        contador = tamanho + 1;
    }
    printf("\nTem %i letras maiusculas e minúsculas.", contador);
}

void method_06(void)
{
    // variaveis
    int x = 0;
    int y = 0;
    int tamanho = 0;
    int contador = 0;
    char palavra[STR_SIZE];

    // usuario
    printf("\nQual a palavra?");
    scanf("%s", palavra);
    getchar();
    tamanho = strlen(palavra);

    // testes
    for (y = 0; y < tamanho; y = y + 1)
    {
        x = palavra[y];
        if (!(('0' <= x) && (x <= '9') && ('A' <= x) && (x <= 'Z') && !('a' <= x) && (x <= 'z')))
        {
            contador = contador = contador + 1;
        }
    }
    printf("\nOs nao digitos nem letras sao : %d", contador);
}

void method_07(void)
{
    // variaveis
    int limitea = 0;
    int limiteb = 0;
    int n = 0;
    int contador = 0;
    int x = 0;

    // usuario
    printf("\nQual Limite superior:");
    scanf("%d", &limitea);
    printf("\nQual Limite inferior:");
    scanf("%d", &limiteb);
    printf("\nQual a quantidade a ser testada?");
    scanf("%d", &n);

    // testes
    for (int i = 0; i < n; i = i + 1)
    {
        printf("\nQual o numero?");
        scanf("%d", &x);
        if ((x % 3 == 0.0) && (x > limitea) && (x < limiteb))
        {
            contador++;
        }
    }
    printf("\nDentro os números %i são multiplos de 3 dentro do intervalo", contador);
}

void method_08(void)
{
    // variaveis
    int limitea = 0;
    int limiteb = 0;
    int n = 0;
    int x = 0;
    int contador = 0;

    // usuario
    printf("\nQual Limite superior:");
    scanf("%d", &limitea);
    getchar();
    printf("\nQual Limite inferior:");
    scanf("%d", &limiteb);
    getchar();
    printf("\nQual a quantidade a ser testada?");
    scanf("%d", &n);
    getchar();

    // testes
    for (int i = 0; i < n; i = i + 1)
    {
        printf("\nQuais os numeros?");
        scanf("%d", &x);
        getchar();
        if ((x % 2 == 0.0) && !(x % 5 == 0.0) && (x > limitea) && (x < limiteb))
        {
            contador = contador + 1;
            printf("\nDentre os numeros %i", contador);
        }
    }
}

void method_09(void)
{
    // variaveis
    int limiteA = 0;
    int limiteB = 0;
    int x = 0;
    int n = 0;
    int contador = 0;

    // usuario
    printf("\nQual o limite Superior:");
    scanf("%d", &limiteA);
    getchar();
    printf("\nQual o limite Inferior:");
    scanf("%d", &limiteB);
    getchar();

    // testes
    do
    {
        if (limiteA < limiteB)
            printf("\nDigite a quantidade de teste:");
        scanf("%i", &x);
        for (int i = 0; i < x; i = i + 1)
        {
            printf("\n Digite um número:\n");
            scanf("%i", &n);
            if ((n % 2 == 0.0) && (n > limiteA) && (n < limiteB))
            {
                contador = contador + 1;
                printf("\nDentro os números. %i são multiplos de 2 d");
            }
        }
    } while (!(limiteA > limiteB));
    printf("\n O limite inferior é menor que o limite superior");
}

void method_10(void)
{
    // variaveis
    double a = 0.0;
    double b = 0.0;
    int n = 0;
    double x = 0.0;
    int contador = 0;
    bool ERRO = ((a < 0) || (b > 1) || (a > b));

    // usuario
    printf("\nDigite o limite inferior: ");
    scanf("%lf", &a);
    getchar();
    printf("\nDigite o limite superior: ");
    scanf("%lf", &b);
    getchar();

    // testes
    if (ERRO)
    {
        printf("\nO limite inferior e menor que 0 ou o limite superior e maior que 1.\n");
    }
    else
    {
        printf("\nDigite uma quantidade: ");
        scanf("%i", &n);
        getchar();
        for (int i = 0; i < n; i = i + 1)
        {
            printf("\nDigite um numero: ");
            scanf("%lf", &x);
            getchar();
            if ((x < a) || (x > b))
            {
                printf("\n[%i] = %lf\n", i, x);
                contador = contador + 1;
            }
        }
        printf("\nDentro os numeros, %i estao fora do intervalo.", contador);
    }
}
/*
Funcao principal
*/

int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    do
    {
        // identificar
        printf("Exemplo0211-20- Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 -    Parar");
        IO_println(" 1 -    Method 01");
        IO_println(" 2 -    Method 02");
        IO_println(" 3 -    Method 03");
        IO_println(" 4 -    Method 04");
        IO_println(" 5 -    Method 05");
        IO_println(" 6 -    Method 06");
        IO_println(" 7 -    Method 07");
        IO_println(" 8 -    Method 08");
        IO_println(" 9 -    Method 09");
        IO_println(" 10 -   Method 10");
        IO_println("                 ");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method_00();
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
        default:
            IO_println("ERRO: Valor invalido.");
        } // fim escolher
    } while (x != 0);

    // encerrar
    IO_pause("Apertar ENTER para terminar");

    return (0);
} // fim main ()