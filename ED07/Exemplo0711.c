#include "io.h"

void multiplosDe3 ( int x )
{
	//variaveis
    int i      = 0;
	int numero = 0;
	numero     = 6;

    for (int i = 0; i < x; i = + 1 )
	{
        printf("%d\n", numero); 
        numero += 6;
    }
}

void method_01 ( )
{
	//definir dados
	int x = 0;
	int i = 0;
	
	//usuario
	printf ( "\n:" ); // quantas vezes o multiplo aparecer
	scanf  ( "%d", &x ); getchar ( );
	
	//chamar a função
	multiplosDe3 ( x );
}

void multiplosDe5 ( int x, int y )
{ 
	  for ( y = x * 15; y >= 15; y = y - 5 )
	  { 
		if (( y % 5 == 0 ) && ( y % 2 == 1 ) )
		{

		  printf ( "%d\n", y);
		}
	  } 
}

void method_02 ( )
{
	//definir dados
	int x = 0;
	int i = 5;
	
	//usuarioc
	printf ( "\n:" ); // quantas vezes o multiplo aparecer
	scanf  ( "%d", &x ); getchar ( );
	
	//chamar a função
	multiplosDe5 ( x, i );
}

void Sequencia6 ( double n )
{
	//definir variavel
	int x = 0;
	
	//ação
	for ( n = 0.0; n < x; n = n + 1 )
	{
		double x = pow ( 6.0, n );
		printf ( "\n%lf", n );
	}
}

void method_03 ( void )
{
	//definir variavel
	double n = 0.0;
	
	//usuario
	printf ( "\n:"    );
	scanf  ( "%lf",&n ); getchar ( );
	
	//chamar a função
	Sequencia6 (n);	
}

void Sequencia6Inversa ( double n )
{
	//definir dados
	int x = 0;
	
	//ação
	for ( n = 6.0; n <= x; n = n - 1 )
	{
		double a = pow ( 6.0, n );
		printf ( "\n%d", x );
	}
}

void method_04 ( )
{
	//definir dados 
	double n = 0.0;
	
	//usuario
	printf ( "\n:"                  );
	scanf  ( "%lf", &n ); getchar ( );
	
	//chamar a função
	Sequencia6Inversa ( n );
}
	
void SequenciaReais ( int e, int b, int y )
{
	//definir dados
	
	
	//ação
	for ( y = 0; y <= e + 2; y = y + 1) 
	{
		if ( y == 0 )
		{
			double z = pow ( b, y );
			printf ( "1/%lf", z   );
		}
	}
}

void method_05 ( )
{
	//definir dados
	int e = 0;
	int b = 0;
	int y = 0;
	
	//usuario
	printf ( "\n:"    );
	scanf  ( "%d", &e ); getchar ( );
	
	printf ( "\n:"    );
	scanf  ( "%d", &b ); getchar ( );
	
	printf ( "\n:"    );
	scanf  ( "%d", &y ); getchar ( );
	
	//chamar a função
	SequenciaReais ( e, b, y );
}

void SequenciaRealF ( chars filename, int n, int b, int e )
{  
	//definir variaveis
	int y = 0;
	FILE* arquivo = fopen ( "RESULTADO06.TXT", "wt" );
	
	//ação
	for ( y = 0; y <= e + 2; y = y + 1) 
	{
		if ( y == 0 )
		{
			double z = pow ( b, y );
			fprintf ( arquivo, "1/%lf", z   );
		}
		else if ( y %2 != 0 )
		{
			double z = pow ( b, y          );
			fprintf ( arquivo, "1/%lf\n", z );
			if ( y == 0 )
			{
			fclose ( arquivo );
			}
		}
	}
	fclose ( arquivo );
}

void method_06 ( )
{
	//definir variaveis 
	int e = 0;
	int b = 0;
	int y = 0;
	FILE* arquivo = fopen ( "RESULTADO06.TXT", "wt" );
	
	//usuario
	printf ( "\n:"    );
	scanf  ( "%d", &e ); getchar ( );

	printf ( "\n:"    );
	scanf  ( "%d", &b ); getchar ( );

	printf ( "\n:"    );
	scanf  ( "%d", &y ); getchar ( ); // quantidade a serem somados
	
	//ação
	SequenciaRealF ( "RESULTADO06.TXT", y, b ,e );
	
	//fechar o arquivo
	fclose ( arquivo );
}

void Sequencia6InversaF (chars filename, double n )
{
	//definir dados
	int x = 0;
	FILE *arquivo = fopen ( "RESULTADO07.TXT", "wt" );
	
	//ação
	for ( n = 6.0; n <= x; n = n - 1 )
	{
		double a = pow ( 6.0, n );
		fprintf ( arquivo,"\n%d", x );
	}
		fclose ( arquivo );
}

void method_07 ( )
{
	//definir dados 
	double n = 0.0;
	FILE *arquivo = fopen ( "RESULTADO07.TXT", "wt" );
	
	//usuario
	printf ( "\n:"                  );
	scanf  ( "%lf", &n ); getchar ( );
	
	//chamar a função
	Sequencia6InversaF (  "RESULTADO07.TXT", n );
	
	//fechar o arquivo
	fclose ( arquivo );
}

void mostrarFebonacciParF ( chars filename, int n )
{
	// definir variaveis
	int i = 0;
	int termo1 = 0;
	int termo2 = 0;
	int termo3 = 0;
	FILE *arquivo = fopen ( "RESULTADO08.TXT", "wt" );
	
	//acoes
	for ( i = 1; i <= n; i = i + 1 )
	{
		if ( termo1 %2  == 0 )
		{
			fprintf (arquivo, "\n%d", termo1 );
		}
		termo3 = termo1 + termo2;
		termo1 = termo2;
		termo2 = termo3; 
	}	
	fclose ( arquivo );
}

void method_08 ( )
{
	//definir variaveis
	int n = 0;
	FILE *arquivo = fopen ( "RESULTADO08.TXT", "wt" );
	
	//usuario
	printf ( "\nDigite quantos termos deseja mostrar:" );
	scanf  ( "%d", &n );
	
	//chamar a funcao
	mostrarFebonacciParF ( "RESULTADO08.TXT", n );
	
	//fechar o arquivo
	fclose ( arquivo );
}

void countUpperCase(char *str, int *count) 
{
	//definir variaveis
    *count = 0;
    int i = 0;
	
	//acoes
    while (str[i] != '\0') 
	{
        if (isupper(str[i])) 
		{
            (*count)++;
        }
        i = i + 1;
    }
}

void method_09 ( )
{
	//definir variaveis
    FILE *fpIn, *fpOut;
    char inputFileName[] = "texto.txt";
    char outputFileName[] = "RESULTADO09.TXT";
    char buffer[100];
    int count = 0   ;

	//usuario
    fpIn = fopen(inputFileName, "r");
    fpOut = fopen(outputFileName, "w");

	//acoes
    if (fpIn == NULL || fpOut == NULL)
	{
        printf("Erro ao abrir os arquivos.\n");
    }

    while (fgets(buffer, sizeof(buffer), fpIn)) 
	{
        countUpperCase(buffer, &count);
        fprintf(fpOut, "%s: %d\n", buffer, count);
    }

	//fechando arquivo
    fclose(fpIn);
    fclose(fpOut);
}

int digito3 ( char palavra [ ] )
{
	//definir variaveis
	int posicao  = strlen ( palavra );
	int controle = 0;
	int contador = 0;
	int letra    = 0;
	
	for ( controle = 0; controle < posicao; controle = controle + 1 )
	{
		letra = palavra [ controle ];
		if ( letra >= '3' && letra <= '9')
		{
			contador = contador + 1;
		}
	}
	return ( controle );
}

void method_10 ( )
{
	//definir variaveis
	FILE *arquivo = fopen ( "RESULTADO10.TXT", "wt" );
	char palavra [80];
	int teste    = 0;
	int y        = 0;
	int contador = 0;
	
	printf("\nDigite uma quantidade: ");
    scanf("%d", &teste);

   for (y = 0; y < teste; y = y + 1)
   {

       printf("\nDigite uma palavra: ");
       scanf ( "%s",palavra ); getchar (   );

       int contador = digito3 ( palavra );

       fprintf( arquivo,"\nPalavra = %s\n", palavra );
       fprintf( arquivo,"\nDigitos maiores ou iguais a 3 = %d\n", contador );
   } 

   fclose ( arquivo );
}

int main (  )
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    do
    {
        // identificar
        printf("\nExemplo0511-20- Programa - v0.0");

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

        } // fim escolher
    } while (x != 0);

    // encerrar
    IO_pause("Apertar ENTER para terminar");

    return (0);
} // fim main ()
