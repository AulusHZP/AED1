#include "Contato.hpp"
using std::cin;  
using std::cout; 

void method01 ( )
{
    //definir variavel
    Contato pessoa1;

    //chamar a funcao
    pessoa1.Nome  ( );
    pessoa1.print ( );
}

void method02 ( )
{
    //definir variavel
    Contato pessoa1;

    //chamar a funcao
    pessoa1.Telefone ( );
    pessoa1.print    ( );
}

void method03 ( )
{
    //definir variavel
    Contato pessoa2;

    //chamar a funcao
    pessoa2.ChecarTelefone ( );
}

void method04 ( )
{
    //definir variavel
    Contato pessoa3;
    char    filename[80];

    //usuario
    std::cout << "Qual o arquivo:" << std::endl;
    std::cin  >> filename; getchar (          );

    //chamar a funcao
    pessoa3.LerArquivo ( filename );
}

void method05 ( )
{
    //definir variavel
    Contato pessoa4;
    char    filename[80];

    //usuario
    std::cout << "Qual o arquivo:" << std::endl;
    std::cin  >> filename; getchar (          );

    //chamar a funcao
    pessoa4.GravarArquivo ( filename );
}

void method06 ( )
{
    //definir variavel
    char nome [80];
    char fone [80];
    char fone2[80];

    //usuario
    std::cout << "Qual o contato:" << std::endl;
    std::cin  >> nome; getchar (              );

    std::cout << "Qual o telefone:" << std::endl;
    std::cin  >> fone; getchar (               );

    std::cout << "Qual o telefone 2:" << std::endl;
    std::cin  >> fone2; getchar    (             );

    //chamar a funcao
    Contato pessoa6 ( nome, fone, fone2 );
    pessoa6.QuantTelefones (            );
}

void method07 ( )
{
    //definir variavel
    char nome [80];
    char fone [80];
    char fone2[80];

    //usuario
    std::cout << "Qual o contato:" << std::endl;
    std::cin  >> nome; getchar (              );

    std::cout << "Qual o telefone:" << std::endl;
    std::cin  >> fone; getchar (               );

    std::cout << "Qual o telefone 2:" << std::endl;
    std::cin  >> fone2; getchar    (             );

    //chamar a funcao
    Contato pessoa1 ( nome, fone, fone2 );
    pessoa1.print2  (                   );
}

void method08 ( )
{
    //definir variavel
    char nome [80];
    char fone [80];
    char fone2[80];

    //usuario
    std::cout << "Qual o contato:" << std::endl;
    std::cin  >> nome; getchar (              );

    std::cout << "Qual o telefone:" << std::endl;
    std::cin  >> fone; getchar (               );

    //chamar a funcao
    Contato pessoa7 ( nome, fone );
    pessoa7.AddTelefones (       );
}

void method09 ( )
{
    //definir variavel
    char nome [80];
    char fone [80];
    char fone2[80];

    //usuario
    std::cout << "Qual o contato:" << std::endl;
    std::cin  >> nome; getchar (              );

    std::cout << "Qual o telefone:" << std::endl;
    std::cin  >> fone; getchar (               );

    std::cout << "Qual o telefone 2:" << std::endl;
    std::cin  >> fone2; getchar    (             );

    //chamar a funcao
    Contato pessoa8 ( nome, fone, fone2 );
    pessoa8.MudarTelefone2 (            );
}

void method10 ( )
{
    //definir variavel
    char nome [80];
    char fone [80];
    char fone2[80];

    //usuario
    std::cout << "Qual o contato:" << std::endl;
    std::cin  >> nome; getchar (              );

    std::cout << "Qual o telefone:" << std::endl;
    std::cin  >> fone; getchar (               );

    std::cout << "Qual o telefone 2:" << std::endl;
    std::cin  >> fone2; getchar    (             );

    //chamar a funcao
    Contato pessoa9 ( nome, fone, fone2 );
    pessoa9.DeletarTelefone2 (          );
}

int main ( )
{
  // definir dado
  int x = 0;
    
  do
  {
       
    // mostrar opcoes
    std::cout << "Opcoes "         << std::endl;
    std::cout << " 0 - parar "     << std::endl;
    std::cout << " 1 - Methodo 1"  << std::endl;
    std::cout << " 2 - Methodo 2"  << std::endl;
    std::cout << " 3 - Methodo 3"  << std::endl;
    std::cout << " 4 - Methodo 4"  << std::endl;
    std::cout << " 5 - Methodo 5"  << std::endl;
    std::cout << " 6 - Methodo 6"  << std::endl;
    std::cout << " 7 - Methodo 7"  << std::endl;
    std::cout << " 8 - Methodo 8"  << std::endl;
    std::cout << " 9 - Methodo 9"  << std::endl;
    std::cout << "10 - Methodo 10" << std::endl;
       
    // ler do teclado
    std::cout << std::endl << "Entrar com uma opcao: ";
    std::cin  >> x;
       
    // escolher acao
    switch ( x )
    {
      case 1:
      method01 ( );
      break;
      case 2:
      method02 ( );
      break;
      case 3:
      method03 ( );
      break;
      case 4:
      method04 ( );
      break;
      case 5:
      method05 ( );
      break;
      case 6:
      method06 ( );
      break;
      case 7:
      method07 ( );
      break;
      case 8:
      method08 ( );
      break;
      case 9:
      method09 ( );
      break;
      case 10:
      method10 ( );
      break;
      default:
      std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
    } // fim escolher
  }
  while ( x != 0 );
  pause ( "Apertar ENTER para terminar" );
    
  return ( 0 );
} 
