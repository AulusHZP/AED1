#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


void method_00 ( void )
{
    // identificação
    
    // usuario
    
    //ifs
}

//----------------------------------------------------------------

void method_01 ( void )
{
    // identificação
    printf ( "\nExemplo0411\n" );
    
    // variaveis
    double superior = 0.0;
    double inferior = 0.0;
    double valor    = 0.0;
    int quantidade  = 0  ;
    int contadorin  = 0  ;
    int contadorout = 0  ;
    int c           = 0  ;
    
    // usuario
    printf ( "\nLimite 1:"  );
    scanf  ( "%lf",&superior ); getchar ( );
    
    printf ( "\nLimite 2:"  );
    scanf  ( "%lf",&inferior ); getchar ( );
 
    // teste
    if ( inferior < superior)
    {
        printf ( "\nDigite a quantidade de valores:" );
        scanf (  "%d", &quantidade ); getchar ( );
        quantidade = c;
            while ( c > 0 )
            {
                printf ( "\nQual o valor:" );
                scanf ( "%lf", &valor );
                if ( valor < superior && valor > inferior )
                {
                    contadorin = contadorin  + 1;
                }
                else
                {
                    contadorout = contadorout + 1;
                }
            }
    }
    else 
    {
        printf ( "\nLimite inferior maior que o limite superior" );
    }
    printf ( "\n%i sao os dentros do intervalo, %i estao fora do intervalo ", contadorin, contadorout );
}

//----------------------------------------------------------------

void method_02 ( void )
{
    // identificação
    printf ( "\nExemplo0412" );
    
    //variaveis
    char palavra [STR_SIZE];
    char simbolo = '0';
    int tamanho  =   0;
    int contador =   0;
    
    // usuario
    printf ( "\nDigite a palavra:" );
    scanf  ( "%c", palavra ) ; getchar ( );
    tamanho = strlen (palavra);
    
    //testes
    for ( int y = 0; y < tamanho; y = + 1 )
    {
        // teste se maiuscula
        if (('A' <= palavra[y] ) && (palavra[y] >= 'Z'))
        {
           if (('A' <= palavra[y] ) && ( palavra[y] > 'K' ))
           {
               contador = contador + 1;
           }
        }
    }
    printf ( "%d e a quantidade de letras maiusculas menores que K", contador );
}

//----------------------------------------------------------------

bool maiuscula (char c)
{
  bool maiuscula = false;
  if ( ( c >= 'A' ) && ( c <= 'Z' ) ) 
  {
    maiuscula = true;
  }
  return maiuscula;
}


void method_03 ( void )
{
	//identificação
    printf ( "\nExemplo0413" );
    
    //variaveis
      int y     = 0  ;
      char c    = 'A';
      char palavra [80];
      int tamanho = 0;
      int contador = 0;

    //usuario
      printf ("\nDigite uma palavra: " );
      scanf  ("%s", palavra); getchar( );
      tamanho = strlen (palavra);
    
    // testando se maisculo
     c = palavra [y];

    //testes
      for ( y = 0; y < tamanho; y = y + 1 )
      {
        if ( maiuscula ( c ) )
        {
          if (c > 'K')
          {
            printf ( "\n%d: [%c]\n", y, c );
            contador = contador +  1;
          }
		}
       }
        printf ( "\nA quantidade de palavras sao: %d", contador );
    
}

//----------------------------------------------------------------

void LetrasMaisculas ( char *str )
{
	 while (*str != '\0') 
     { 
        if ('A' > *str && *str < 'K') 
        {
            printf("%c ", *str); 
        }
        str = str + 1; 
    }
    printf("\n"); 
}

void method_04 ( void )
{
    //identifição
    printf ( "\nExemplo04014" );
    
    //variavel
	char str [80];
    
    //usuario
    printf ( "Digite uma sequencia de caracteres: " );
    scanf  ( "%s", str );                 getchar ( );
    
    //chamar a função
    LetrasMaisculas ( str );
}

//----------------------------------------------------------------

bool maiuscula_e_minuscula ( char c )
{
  bool maiuscula_e_minuscula = false;
  if ( ( c >= 'A') && ( c <= 'Z' ) && ( c >= 'a' ) && ( c <= 'z' ) )
  {
    maiuscula_e_minuscula = true;
  }
    
  return maiuscula_e_minuscula;
}
    
int quantidade (char c)
{
    //variaveis
      int y = 0;
      c = 'A';
      char palavra [80];
      int tamanho = 0;
      int contador = 0;

    //usuario
      printf ("\nDigite uma palavra: ");
      scanf ("%s", palavra);  getchar();
      tamanho = strlen (palavra);
      
     //testes
     for (y = 0; y < tamanho; y = y + 1)
      {
        c = palavra [y];
        if (maiuscula_e_minuscula(c))
        {
          if ((c < 'k') && (c < 'K'))
          {
            printf ("\n%d: [%c]\n", y, c);
            contador = contador + 1;
          }
        }
      }
      return contador;
}

void method_05 ( void )
{
    // identificação
    printf ( "\nExemplo0415" );
    
    //Variavel
  	char c = 'A';
        
    //usuario
  	printf("\nTem %i letras maiores que 'k' e 'K'.", quantidade(c));

}

//----------------------------------------------------------------

void mostrarLetras ( char *str )
{
	//variaveis
    int i = 0;
    int Ler = strlen ( str );
    
    //testes 
    for ( i = 0; i < Ler; i = i +1 )
    {
    	if ( str [i] >= 'a' && str [i] < 'k' || str[i] >= 'A' && str[i] < 'K' )
        {
        	printf ( "%c", str[i] );
        }
    }
}    
    
void method_06 ( void )
{
    //identificação
    printf ( "\nExemplo0416" );
    
    //variavel
    char str [80];
    
    //usuario
    printf ( "\nDigite uma sequencia:" );
    scanf  ( "%c", str );
    
    //chamar a função
    printf ( "\nAs letras menores sao:" );
    mostrarLetras ( str );

}

//----------------------------------------------------------------  

bool digito (char c)
{
  bool digito = false;
  if ((c >= '0') && (c <= '9'))
  {
    digito = true;
  }
  return digito;
}    
    
bool impar ( char c )
{
	bool impar = false;
    if ( !c %2 == 0 )
    {
    	impar = true;
    }
}
    
void method_07 ( void )
{
	//identificação
    printf ( "\nExemplo0417" );
    
    //variaveis
    int y        = 0;
    int tamanho  = 0;
    int contador = 0;
    char c = 'A';
    char palavra [80];
    
    //usuario
    printf ("\nDigite a palavra:"      );
    scanf  ( "%s",palavra ); getchar ( );
    
    tamanho = strlen ( palavra );
    
    //testes 
    for ( y = 0; y < tamanho; y = y + 1 )
    {
    	c = palavra [y];
        if ( digito (c) ) // chamando funcao
        {
        	if (impar (c) ) // chamando funcao
            {
            	printf ( "\n%d: [%c]",y,c );
                contador = contador + 1;
            }
        }
    }
    
    // usuario
    printf ( "\nTem %i digitos impares", contador );
}   

//----------------------------------------------------------------  

void mostrarSimbolosNaoAlfanumericos ( char str [ ] ) 
{
	//variaveis
    int i = 0;
		
	//testes
    for (i = 0; str[i] != '\0'; i= i + 1) 
	{
        if (!isalnum(str[i]))
		{
            printf("%c ", str[i]);
        }
    }
}   
        
void method_08 ( void )
{
	//identificacao
    printf ( "\nExemplo0418" );
    //variaveis
    char str [80];
    //usuarios
    printf("Digite uma sequencia de caracteres: ");
    fgets(str, 80, stdin);
    printf("Simbolos nao alfanumericos na sequencia: ");
    //chamar a funcao
	mostrarSimbolosNaoAlfanumericos(str);
}

//----------------------------------------------------------------
	
void mostrarSimbolosAlfanumericos ( char str [ ] ) 
	{
	//variaveis
    int i = 0;
		
	//testes
    for (i = 0; str[i] != '\0'; i= i + 1) 
	{
        if (isalnum(str[i]))
		{
            printf("%c ", str[i]);
        }
    }
}

void method_09 ( void )
{
	//identificacao
    printf ( "\nExemplo0419" );
    
	//variaveis
    char str [80];
    
	//usuarios
    printf("Digite uma sequencia de caracteres: ");
    fgets(str, 80, stdin);
    printf("Simbolos alfanumericos na sequencia: ");
    
	//chamar a funcao
	mostrarSimbolosAlfanumericos ( str );
}
	
//---------------------------------------------------------------- 

bool alfanumerico (char c)
{
  bool alfanumerico = false;
  if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
  {
    alfanumerico = true;
  }
  return alfanumerico;
}
  
void method_10 ( void )
{
  	//variaveis
  	int y = 0;
  	char c = 'A';
  	char palavra [80];
  	int tamanho = 0;
  	int contador = 0;
	
	//usuario
	printf ("\nDigite uma palavra: ");
  	scanf ("%s", palavra); getchar ( );
  	
	tamanho = strlen (palavra); //declarar
	
	//testes
  	for (y = 0; y < tamanho; y = y + 1)
  	{
    	c = palavra [y];
    	if (alfanumerico (c))
		{
			printf ("\n%d: [%c]\n", y, c);
			contador = contador + 1;
		}
  	}
		printf("\nTem %i simbolos alfanumericos.", contador); 
}

//----------------------------------------------------------------


int main ( )
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    	do
    	{
        // identificar
        printf("Exemplo0411-20- Programa - v0.0");

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