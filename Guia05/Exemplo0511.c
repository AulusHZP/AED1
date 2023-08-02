#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void method_00 ( void )
{
    // identificação
	
	//variaveis
    
    // usuario
    
    //testes
}

void mostrarMultiplosDeSeis (int n)
{
	//variaveis
    int i = 0;
	int mult = 0;
	
	//testes
	 for (i = 1; i <= n; i = i +1) 
	 {
		mult = (i * 6);
		printf( "\n%i\n", mult );
	  }
}

void method_01 ( void )
{
    // identificação
	printf( "\nExemplo0511\n" );
	
	//variaveis
	int n = 0;
	    
    // usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
    
	printf("Multiplos de 6 em ordem crescente: ");
	//chamar a função
    mostrarMultiplosDeSeis(n);

}

void mostrarMultiplosDeSeisEQuatro ( int n )
{
	//variaveis
	int i = 0;
	int mult = 0;
	int j = 1;
	
	//testes
	i = 1;
	while (i <= n )
	{
		mult = (j * 6);
		if ( mult %4 == 0 && mult %6 == 0 )
		{
		i = i+1;
		printf ( "\n%i\n",mult );
		} 
		j = j +1;
	}
}



void method_02 ( void )
{
    // identificação
	printf( "\nExemplo0512\n" );
	
	//variaveis
	int n = 0;
	    
    // usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
    
	printf("\nMultiplos de 6 e 4 em ordem crescente:");
	
	//chamar a função
    mostrarMultiplosDeSeisEQuatro(n);

}

void mostrarMultiplosDeNove ( int n )
{ 
	//variavel	
	int i = 0;
	
	//testes
	 for (i = (n * 18) - 9; i > 0 && n > 0; i -= 18) 
	  {
		if (i % 2 != 0) 
		{
		  printf ("\n%d ", i);
		  n = n-1;
		}
	  }
}

void method_03 (void)
{
    // identificação
	printf( "\nExemplo0513\n" );
	
	//variaveis
	int n = 0;
	    
    // usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
    
	printf("\nMultiplos de 9 em ordem decrescente:");
	
	//chamar a função
    mostrarMultiplosDeNove(n);

}

void mostraMultiplosDeNoveImpar ( int n )
{
	//varivel
	int i    = 0;
	int mult = 0;
	int j    = 0;
	
	//testes
	i = 1;
	while (i <= n )
	{
		mult = (j * 9);
		if ( mult %2 == 1 )
		{
		i = i + 1;
		printf ( "\n1/%i\n",mult );
		} 
		j = j + 1;
	}
}

void method_04 (void)
{
    // identificação
	printf( "\nExemplo0514\n" );
	
	//variaveis
	int n = 0;
	    
    // usuario
	printf ( "\n:"   );
	scanf  ( "%d",&n ); getchar ();
    
	printf("\nMultiplos de 9 em ordem crescente:");
	
	//chamar a função
    mostraMultiplosDeNoveImpar(n);

}

void mostrarSequencia(double x, int n) 
{
	// variavel
    int i = 0;
	
	//teste
    for (i = 1; i <= n; i++)
	{
        printf("%.2f / %.0lf\n", 1.0, pow(x, i-1));
        printf("%d / %.0lf\n", i,     pow(x, i-1));
    }
}

void method_05 ( void )
{
    // identificação
	printf ("\nExemplo0515\n");
	
	//variaveis
    double x = 0.0;
    int    n = 0  ;
	
	//usuario
    printf("Digite um valor real: ");
    scanf("%lf", &x);
    printf("Digite uma quantidade inteira: ");
    scanf("%d", &n);

	//chamar a função
    printf("Sequencia de denominadores:\n");
    mostrarSequencia(x, n);
}

void somaValor ( int n )
{
	//variavel
	int i          = 1;
	int contador   = 0;
	
	//repeticao
	  for ( i = 1; i <= n; i = i + 1 )
	  {
		if ( ( 6 * i ) %5 != 0)
		{
		  printf ("\nOs multiplos pares de 6 em ordem crescente sao: %i\n", 6 * i);
		  contador += 6 * i;
		}
	  }
	  printf ("\nA soma dos valores e : %i", contador);
}

void method_06 ( void )
{
	//identificação
	printf ( "\nExemplo05016\n" );
	
	//variavel
	int n = 0;
	
	//usuario
	printf ( "\nDigite um valor:" );
	scanf  ( "%d", &n ); getchar( );
	
	//chamar a função
	somaValor (n);
}

void somaValorInverso ( int n )
{
	//variavel
	int i          = 1;
	int contador   = 0;
	
	//repeticao
	  for ( i = 1; i <= n; i = i + 1)
	  {
		if ( ( 6 * i ) %5 != 0 )
		{
		  printf ("\nOs multiplos pares de 6 em ordem crescente sao: 1/%i\n", 6 * i );
		  contador += ( 6 * i );
		}
	  }
	  printf ( "\nA soma dos valores e : 1/%i", contador );

}

void method_07 ( void )
{
    // identificação
	printf ( "\nExemplo0517\n" );
	
	//variaveis
    int n = 0;
		
    // usuario
    printf ( "\nDigite um valor:" );
	scanf  ( "%d", &n ); getchar( );
	
    //chamar a função
	somaValorInverso (n);
}

void somaDosNaturais ( int x)
{
	// variaveis
	int numero = 6;
	int soma   = 0;
	int i      = 0;
	
	//testes 
	for ( i = 0; i < n; i = i + 1 )
	{
		soma += numero;
		numero += (i *1);
	}
	
	//retorno
	return soma;
	
}

void teste ( int n )
{
	//usuario
	printf ("\nSoma dos %d numeros naturais apartir de 6:%d\n", n,somaDosNaturais(n));
}

void method_08 ( void )
{
	// identificação
		printf ("\nExemplo0518\n");
	
	
    //chamar a função
	teste ( 5  );
	teste ( 10 );
}

int soma_quadrados ( int n ) 
{
    int soma = 0;
    for ( int i = 6; i < 6 + n; i = i+1 )
	{
        soma += i * i;
    }
    return soma;
}

void testar ( int n ) 
{
	//usuario
    printf("Soma dos quadrados dos numeros naturais de 6 a %d: %d\n",( 5 + n ) , soma_quadrados ( n ) );
}

void method_09 ( void )
{
	//identificação
	printf ( "\nExemplo0519\n" );
	
	//chamar a função
    testar(5);  
    testar(10); // Soma dos quadrados dos numeros naturais de 6 a 15: 2830
}

void teste1 ( int n )
{
	//usuario
	printf ("\nSoma dos %d numeros naturais apartir de 6:%d\n", n,somaDosNaturais(n));
}


void method_10 ( void )
{
    // identificação
	printf ( "\nExemplo0510\n" );
	
	//variavel
	int n = 0;
	
	//usuario
	printf ( "\nDigite um valor:" );
	scanf  ( "%d", &n ); getchar( );
	
    //chamar função
	teste1 (n);
}

/*
Funcao principal
*/

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