#include "io.h"
#include <string.h>
#include <math.h>

void method_00 ( void )
{

}

void method_01a ( int n )
{  
	if ( n >= 6)
	{
		method_01a ( n - 1 );
		IO_printf  ( "%s%d\n", "Valor = ", n );
	}
}

void method_01 ( void )
{
	//identificacao 
	printf ( "\nExemplo0611\n" );
	
	//chamar funcao
	method_01a ( 36 );
}

void method_02a ( int n )
{
	if ( ( n > 1) && ( n <= 36 ) )
	{
		if ( n %6 == 0 )
		{
			IO_printf ( "%s%d\n", "Valor = ", n );
		}
		method_02a ( n - 1 );
	}
}

void method_02 ( )
{
	//variaveis
	int quantidade = 0;
	int valor      = 0;
	int controle   = 0;
	
	//chamar a funcao
	method_02a (36);
	IO_pause (  "Apertar ENTER para continuar" );
}

void method_03a ( int n )
{
	//testes
	if ( ( n > 0 ) && ( n <= 60 ) )
	{
		method_03a ( n - 1 );
		if ( n %6 == 0 )
		{
			IO_printf ( "%s%d\n", "Valor = ", n );
		}
	}
}

void method_03 ( void )
{
	//identificacao
	printf ( "\nExemplo0613\n" );
	
	//variaveis
	int n = 0;
	
	//usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
	
	//chamar a funcao
	method_03a ( n );
}

void method_04a ( int n )
{
	//testes
	if ( n >= 1 )
	{
		if ( pow ( 6, n ) )
		{
			IO_printf ( "%s%lf\n", "Valor = 1/", pow ( 6, n ) );
		}
		method_04a ( n - 1 );
	}
}

void method_04 ( void )
{
	//identificacao
	printf ( "\nExemplo0614\n" );
	
	//variaveis
	int n = 0;
	
	//usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
	
	//chamar a funcao
	method_04a ( n );
}

int method_05a ( int n )
{
	//variaveis
	int soma = 0;
	
	//testes
	if ( n >= 6 )
	{
		soma = soma + method_05a ( n - 2 );
		IO_printf ("%s%d\n", "Valor = ", n);
		soma = soma + n;
	}
	return soma;
}

void method_05 (  )
{
	//identificacao
	printf ( "\nExemplo0615\n" );
	
	//variaveis
	int n = 0;
	
	//usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
	
	//chamar a funcao
	method_05a ( n );
}

int method_06a ( int n )
{
	//variaveis
	int soma = 0;
	
	//testes
	if ( n >= 6 )
	{
		soma = soma + method_06a ( n - 2 );
		IO_printf ("%s%d\n", "Valor = 1/ ", n);
		soma = soma + 1.0/ n;
	}
	return soma;
}

void method_06 (  )
{
	//identificacao
	printf ( "\nExemplo0616\n" );
	
	//variaveis
	int n = 0;
	
	//usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
	
	//chamar a funcao
	method_06a ( n );
}

void method_07a ( chars cadeia, int x )
{
	//variaveis
	int y = 0;
	
	//testes
	if ( 0 <= x && x < strlen ( cadeia ) )
	{
		if ( cadeia [x] >= 'a' && cadeia [x] <= 'z' )
		{
			method_07a ( "abcde", x - 1 );
		}
		printf ( "\n%c", cadeia [x] );
	}
}

void method_07 (  )
{
	//identificacao
	printf ( "\nExemplo0617\n" );
	
	//variaveis
	chars cadeia;
	int x = strlen ( cadeia ) + 3;
	
	//chamar a função
	method_07a ( "abcde", x );
}

void method_08a ( chars cadeia, int x )
{
	//testes
	if ( 0 <= x && x < strlen ( cadeia ) )
	{
		if ( cadeia [x] >= 'a' && cadeia [x] <= 'z' || cadeia [x] >= 'A' && cadeia [x] <= 'Z' || cadeia [x] >= '0' && cadeia [x] <= '9' )
		{
			if ( cadeia [x] == 0 || cadeia [x] == 1 || cadeia [x] == 3 || cadeia [x] == 5 || cadeia [x] == 7 || cadeia [x] == 9 )
			{
				printf ( "\n%c",cadeia [x] );
			}
		}
		method_08a ( "P4LaVr@1", x - 1 );
	}
}

void method_08 (  )
{
	//identificação
	printf ( "\nExemplo0618\n" );
	
	//variaveis
	chars cadeia;
	int x = strlen ( cadeia ) + 6;
	
	//chamar a função
	method_08a ( "\nP4LaVr@1", x );
	
}

int method_09a (chars cadeia, int x)
{
  int resposta = 0;
  if (( 0 <= x ) && ( x < strlen (cadeia) ))
  {
    if ((cadeia [x] >= 'A') && (cadeia [x] <= 'Z'))
    {
      resposta = 1;
    } 
    resposta = resposta + method09a ( cadeia, x + 1 );
  } 
  return (resposta);
} 

void method_09 ( )
{
  IO_printf ("\nMinusculas (\"P4LaVr@1\",0) = %d\n", method_09a ("P4LaVr@1", 0));
}


int method_10a (int x)
{
  int resposta = 0;
  if ((x == 1) || (x == 2))
  {
    resposta = 1;
  }
  else
  {
    if (x > 1)
    {
      resposta = method10a (x - 1) + method10a (x - 2);
    } 
  } 
return (resposta);
} 

void method_10 ( )
{
  //IO_printf ("\nFibonacci (%d) = %d\n", 1, method10a (1));
 	IO_printf ("Fibonacci (%d) = %d\n", 2, method_10a (2));
  //IO_printf ("\nFibonacci (%d) = %d\n", 3, method10a (3));
 	IO_printf ("Fibonacci (%d) = %d\n", 4, method_10a (4));
  //IO_printf ("Fibonacci (%d) = %d\n", 5, method10a (5));
  	IO_printf ("Fibonacci (%d) = %d\n", 6, method_10a (6));
  //IO_printf ("Fibonacci (%d) = %d\n", 7, method10a (7));
 	IO_printf ("Fibonacci (%d) = %d\n", 8, method_10a (8));
  //IO_printf ("Fibonacci (%d) = %d\n", 9, method_10a (9));
 
} 

/*
Funcao principal.
@return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXEMPLO0611 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - ");
        IO_println(" 2 - ");
        IO_println(" 3 - ");
        IO_println(" 4 - ");
        IO_println(" 5 - ");
        IO_println(" 6 - ");
        IO_println(" 7 - ");
        IO_println(" 8 - ");
        IO_println(" 9 - ");
        IO_println("10 - ");
        IO_println("");
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
            break;
        default:
            IO_println("ERRO: Valor invalido.");
        } // fim escolher
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
