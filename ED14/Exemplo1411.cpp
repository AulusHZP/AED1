#include <iostream>
using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler arquivo

void pause ( std::string text )
{
 std::string dummy;
 std::cin.clear ( );
 std::cout << std::endl << text;
 std::cin.ignore( );
 std::getline(std::cin, dummy);
 std::cout << std::endl << std::endl;
} 

#include "Error.hpp"

class MyString : public Erro
{
 public:
    std::string getErroMsg ( )
    {
        return ( NO_ERROR ); 
    } 
};

void method01 ( )
{
    //definir variaveis
    MyString *s = new MyString ( );
    
    //usuario
    std::cout << "Exemplo1401" << std::endl;

    //encerrar 
    pause ( "Aperte Enter para continuar" );
}

void method02 ( )
{
    //definir variaveis
    Task t1;
    char conteudo[80];

    //usuario
    std::cout << "Qual o conteudo: " << std::endl; std::cin >> conteudo; getchar ( );

    //chamando funcao
    t1.ConverteInt ( conteudo );

    //encerrar 
    pause ( "Aperte Enter para continuar" );
}

void method03 ( )
{
    //definir variveis
    Task t1;
    char conteudo[80];

    //usuario
    std::cout << "Qual o conteudo: " << std::endl; std::cin >> conteudo; getchar ( );

    //chamando funcao
    t1.ConverteDouble ( conteudo );

    //encerrar 
    pause ( "Aperte Enter para continuar" );
}

void method04 ( )
{
    //definir variaveis
    Task t1;
    char conteudo[80];

    //usuario
    std::cout << "Qual o conteudo: " << std::endl; std::cin >> conteudo; getchar ( );

    //chamando funcao
    t1.ConverteBool ( conteudo );

    //encerrar
    pause ( "Aperte Enter para continuar" ); 
}

void method05 ( )
{
    //definir variaveis
    Task t1;
    char conteudo  [80];
    char procurando[80];

    //usuario
    std::cout << "Qual o conteudo: " << std::endl; std::cin >> conteudo;   getchar ( );
    std::cout << "Qual o valor:    " << std::endl; std::cin >> procurando; getchar ( );

    //chamando a funcao
    t1.Procurar ( conteudo, procurando );

    //encerrar
    pause ( "Aperte Enter para continuar" ); 
}

void method06 ( )
{
    //definir variaveis
    Task t1;
    char conteudo [80];

    //usuario
    std::cout << "Qual o conteudo:" << std::endl; std::cin >> conteudo; getchar ( );

    //chamar a funcao
    t1.Maiusculo ( conteudo );

    //encerrar
    pause ( "Aperte Enter para continuar" ); 
}

void method07 ( )
{
    //definir variaveis
    Task t1;
    char conteudo [80];

    //usuario
    std::cout << "Qual o conteudo:" << std::endl; std::cin >> conteudo; getchar ( );

    //chamar a funcao
    t1.Minusculo ( conteudo );

    //encerrar
    pause ( "Aperte Enter para continuar" );
}

void method08 ( )
{
    //definir variaveis
    Task t1;
    char conteudo   [80];
    char inserir;
    char procurando [80];

    //usuario
    std::cout << "Qual o conteudo:" << std::endl; std::cin >> conteudo;   getchar ( );
    std::cout << "Qual o valor:   " << std::endl; std::cin >> inserir;    getchar ( );
    std::cout << "Novo valor:     " << std::endl; std::cin >> procurando; getchar ( );

    //chamar a funcao
    t1.Trocar ( conteudo, procurando, inserir );

    //encerrar 
    pause ( "Aperte Enter para continuar" );
}

void method09 ( )
{
    //definir variaveis
    Task t1;
    char conteudo [80];

    //usuario
    std::cout << "Qual o conteudo:" << std::endl; std::cin >> conteudo;   getchar ( );

    //chamar a funcao
    t1.Sequencias ( conteudo );

    //encerrar 
    pause ( "Aperte Enter para continuar" );
}

void method10 ( )
{
    //definir variaveis
    Task t1;

    //chamar funcao 
    t1.Cesar ( );

    //encerrar 
    pause ( "Aperte Enter para continuar" );
}

int main( )
{
    int x = 0;
    do
    {
        // identificar
        std::cout << "EXEMPLO1401 - Programa - v0.0\n " << std::endl;
        // mostrar opcoes
        std::cout << "Opcoes " << std::endl;
        std::cout << " 0 - parar " << std::endl;
        std::cout << " 1 - testar definicoes " << std::endl;
        // ler do teclado
        std::cout << std::endl
        << "Entrar com uma opcao: ";
        std::cin >> x;
        // escolher acao
        switch (x)
        {
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
        case 7:
            method07();
            break;
        case 8:
            method08();
            break;
        case 9:
            method09();
            break;
        default:
        case 10:
            method10();
            break;
            std::cout << std::endl
            << "ERRO: Valor invalido." << std::endl;
        } 
    } while (x != 0);
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
}
