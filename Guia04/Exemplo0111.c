/*
 Exemplo0111 - v0.0. - 17 / 03 / 2023
 Author: Áulus Arcanjo Alves Batista

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0109 exemplo0111.c
 Windows: gcc -o exemplo0109 exemplo0111.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0109
 Windows: exemplo0109
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
    int y = 0;

    // usuario
    printf("\n:");
    scanf("%d", &x);
    y = x * 7;

    // resposta
    printf("\nArea desse quadrado é %d", y);
}

// metodo 02
void method02()
{
    // variaveis
    int l = 0;
    int area = 0;
    int perimetro = 0;

    // usuario
    printf("\n:");
    scanf("%d", &l);

    area = (l * l);
    perimetro = (l * 4) / (l / 2);

    // resposta
    printf("\nArea desse quadrado é %d", area);
    printf("\nPerimetro desse quadrado é %d", perimetro);
}

// metodo 03
void method03()
{
    // variaveis
    int l1 = 0;
    int l2 = 0;
    int area = 0;
    int area1 = 0;

    // usuario
    printf("\n:");
    scanf("%d", &l1);
    printf("\n:");
    scanf("%d", &l2);

    area = (l1 * l2) / 2;
    area1 = area * 3;

    // resposta
    printf("\nArea desse triangulo vezes 3 é %d", area1);
}

// metodo 04
void method04()
{
    // variaveis
    int l1 = 0;
    int l2 = 0;
    int area = 0;
    int perimetro = 0;

    // usuario
    printf("\n:");
    scanf("%d", &l1);
    printf("\n:");
    scanf("%d", &l2);

    area = (l1 * l2);
    perimetro = (l1 + l2) / 0.25;

    // resposta
    printf("\nArea é: %d", area);
    printf("\nPerimetro é: %d", perimetro);
}

// metodo 05
void method05()
{
    // variaveis
    int x = 0;
    int y = 0;
    int area = 0;

    // usuario
    printf("\n:");
    scanf("%d", &x);
    printf("\n:");
    scanf("%d", &y);

    area = x * (y * 2) / 2;

    // resposta
    printf("\nArea é: %d", area);
}

// metodo 06
void method06()
{
    // variaveis
    int l = 0;
    double h = 0.00000;
    double area;
    int lado1 = 0;

    // usuario
    printf("\n:");
    scanf("%d", &l);

    h = (l * 1.732) / 2;
    area = ((l * l * 1.732) / 4);
    lado1 = (l / 0.16);

    // resposta
    printf("\nAltura é: %lf", h);
    printf("\nLado é: %d", lado1);
}

// metodo 07
void method07()
{
    // variaveis
    int lado = 0;
    int volume = 0;
    int volume2 = 0;

    // usuario
    printf("\n:");
    scanf("%d", &lado);

    volume = (lado * lado * lado);
    volume2 = (lado * lado * lado) * 4;

    // resposta
    printf("\nVolume é: %d", volume);
    printf("\nVolume * 4 é: %d", volume2);
}

// metodo 08
void method08()
{
    // variaveis
    int x = 0;
    int y = 0;
    int z = 0;
    int volume = 0;

    // usuario
    printf("\n:");
    scanf("%d", &x);
    printf("\n:");
    scanf("%d", &y);
    printf("\n:");
    scanf("%d", &z);

    volume = (x * y * z / 02);

    // resposta
    printf("\nVolume 1/5 é: %d", volume);
}

// metodo 09
void method09()
{
    // variaveis
    int x = 0;
    double area;

    // usuario
    printf("\n:");
    scanf("%d", &x);

    x = x / 2;
    area = (3.14 * (x * x));

    // resposta
    printf("\nA area do circulo é : %lf", area);
}

// metodo 10
void method10()
{
    // variaveis
    int x = 0;
    int V = 0;

    // usuario
    printf("\n:");
    scanf("%d", &x);

    x = x / 2;

    V = ((4 / 3) * 3.14 * (x * x * x));

    // resposta
    printf("\nVolume da esfera é : %d", V);
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
        IO_id("Exemplo0111- Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - Parar");
        IO_println(" 1 - method 01");
        IO_println(" 2 - method 02");
        IO_println(" 3 - method 03");
        IO_println(" 4 - method 04");
        IO_println(" 5 - method 05");
        IO_println(" 6 - method 06");
        IO_println(" 7 - method 07");
        IO_println(" 8 - method 08");
        IO_println(" 9 - method 09");
        IO_println(" 10 - method 10");
        IO_println("");
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