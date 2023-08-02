/*
 Exemplo0211-10 - v0.0. - 17 / 03 / 2023
 Author: Áulus Arcanjo Alves Batista

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0211-10 exemplo0211-10
 Windows: gcc -o exemplo0211-10 exemplo0211-10
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0211-10
 Windows: exemplo0211-10
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres
#include <math.h>    // para funcoes matematicas
#include "io.h"

// metodo 00
void method00()
{
}

// metodo 01
void method01()
{
    // variaveis
    int x = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    // condicao
    if (x % 2 == 0)
    {
        printf("\nO numero é par");
    }
    else if (x == 0)
    {
        printf("\nO numero é par");
    }
    else
    {
        printf("\nO numero é impar");
    }
}

// metodo 02
void method02()
{
    // variaveis
    int x = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    // condicoes
    if (x % 2 == 0 && x == -25)
    {
        printf("\nO numero é par");
    }
    else if (x % 2 == 1 && x == 25)
    {
        printf("\nO numero é impar");
    }
}

// metodo 03
void method03()
{
    // variaveis
    int x = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    // condicoes
    if (x >= 20 && x <= 45)
    {
        printf("\nEsta dentro do intervalo aberto");
    }
    else
    {
        printf("\nNao esta dentro do intervalo");
    }
}

// metodo 04
void method04()
{
    // variaveis
    int x = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    // condicoes
    if (x > 20 && x < 25)
    {
        if (x > 15 && x < 60)
        {
            printf("\nPertence aos dois intervalos");
        }
        printf("\nPertence somente ao primeiro intervalo");
    }
    else
    {
        printf("\nNao pertence a nenhum intervalo");
    }
}

// metodo 05
void method05()
{
    // variaveis
    int x = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    // condicoes
    if (x > 15 && x < 50)
    {
        printf("\nPertence ao intervalo");
    }
    else
    {
        printf("\nNao pertence ao intervalo");
    }
}

// metodo 06
void method06()
{
    // variaveis
    int x = 0;
    int y = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    printf("\n");
    scanf("%d", &y);
    getchar();

    // condicoes
    if (x % 2 == 0)
    {

        if (y % 2 == 1)
        {
            printf("\nO Primeiro é par e o segundo é impar");
        }
        printf("\nSomente o primeiro é par");
    }
}

// metodo 07
void method07()
{
    // variaveis
    int x = 0;
    int y = 0;

    // usuario
    printf("\n");
    scanf("%d", &x);
    getchar();

    printf("\n");
    scanf("%d", &y);
    getchar();

    // condicoes
    if (x < 0 && x % 2 == 0)
    {
        printf("O primeiro valor (%d) é par e negativo.\n", x);
    }
    else
    {
        printf("O primeiro valor (%d) não é par e negativo.\n", x);
    }

    // verificar se o segundo valor é ímpar e positivo
    if (y > 0 && y % 2 == 1)
    {
        printf("O segundo valor (%d) é ímpar e positivo.\n", y);
    }
    else
    {
        printf("O segundo valor (%d) não é ímpar e positivo.\n", y);
    }
}

// metodo 08
void method08()
{
    // variaveis
    double x = 0;
    double y = 0;

    // usuario
    printf("\n");
    scanf("%lf", &x);
    getchar();

    printf("\n");
    scanf("%lf", &y);
    getchar();

    // condicoes
    if (y > x)
    {
        printf("\nO segundo e' maior que o primeiro");
    }
    else if (y == x)
    {
        printf("\nO segundo e' igual a primeiro ");
    }
    else
    {
        printf("\n O primeiro e' maior que o segundo ");
    }
}

// metodo 09
void method09()
{
    // variaveis
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    // usuario
    printf("\n");
    scanf("%lf", &a);
    getchar();

    printf("\n");
    scanf("%lf", &b);
    getchar();

    printf("\n");
    scanf("%lf", &c);
    getchar();

    // condicoes
    if ((a > b && a < c) || (a > c && a < c))
    {
        printf("O primeiro valor (%.2f) está entre os outros dois.\n", a);
    }
    else
    {
        printf("O primeiro valor (%.2f) não está entre os outros dois.\n", a);
    }
}

// metodo 10
void method10()
{
    // variaveis
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    // usuario
    printf("\n");
    scanf("%lf", &a);
    getchar();

    printf("\n");
    scanf("%lf", &b);
    getchar();

    printf("\n");
    scanf("%lf", &c);
    getchar();

    // condicoes
    if ((a < b && a < c && b < c) || (a > b && a > c && b > c))
    {
        printf("O primeiro valor (%.2f) não está entre os outros dois.\n", a);
    }
    else
    {
        printf("O primeiro valor (%.2f) está entre os outros dois.\n", a);
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
            method00();
            break;
        case 1:
            method01();
            break;
        case 2:
            method02();
            break;
        case 3:
            method03();
            break;
        case 4:
            method04();
            break;
        case 5:
            method05();
            break;
        case 6:
            method06();
            break;
            method06();
            break;
            method07();
            break;
            method08();
            break;
            method09();
            break;
            method10();
        default:
            IO_println("ERRO: Valor invalido.");
        } // fim escolher
    } while (x != 0);

    // encerrar
    IO_pause("Apertar ENTER para terminar");

    return (0);
} // fim main ()