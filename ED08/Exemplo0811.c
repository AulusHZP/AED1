#include "io.h"

void PositivosPares ( int n, int array [] )
{
	//definir variaveis
	FILE* arquivo = fopen ("DADOS_01.txt", "wt");
	int i = 0;
	int contador = 0;
	int y = 0;
  
	  // acoes
	  for (i = 0; i < n; i = i + 1)
	  {
		contador = contador + 1;
	  }
	  fprintf (arquivo,"\n%d\n", contador);
	  printf ("\nTamanho do arranjo =  %d", contador);


	  for (i = 0; i < n; i = i + 1)
	  {
		array [i] = y + 1;
		if (array [i] %2 == 0)
		{
		  array [i] = y + 1;
		  y = y + 2;
		}

		printf ("\n\n%d = %d", i, array [i]);
		fprintf (arquivo,"\n%d", array  [i]); 
	  }
	}

void method_01 ( )
{
	//definir variaveis
	int n     = 0;
	int array [n];
	
	//acoes 
	if ( n <= 0 )
	{
		printf ( "\nErro!" );
	}
	else
	{
		printf ( "\n:"    );
		scanf  ( "%d", &n ); getchar ( );
		
		printf ( "\n:"            );
		scanf  ( "%d", &array [n] ); getchar ( );
		
		PositivosPares ( n, array );
	} 	
}


void arquivo (int x, int arranjo [], char filename [])
{  
	 // definir variaveis
	int y         = 0;
	int copia     = 0;
	FILE* arquivo = fopen (filename, "rt");
  
	//arquivo
	fscanf (arquivo, "%d", &copia);
  
	//acoes
	if (( x <= 0 ) || ( x > copia ))
	  {
		printf ("ERRO: Valor invalido.");
	  }
	  else
	  {
		copia = 0;
		while ((! feof (arquivo)) && (copia < x))
		{
		  fscanf (arquivo, "%d", &y);
		  printf ("\n%d",         y);
		  arranjo [copia] = y;
		  copia = copia +   1;
		} 
  } 
  fclose(arquivo);
} 

void method_02 ( )
{
	 //definir variaveis
	 int x = 0;
	 char filename [80];
	 int arranjo [x];
    
	  //usuario
	  printf("\nDigite um valor: ");
	  scanf("%d", &x); getchar (  );
  
	  printf("\nDigite o nome do arquivo para ler: ");
	  scanf("%s", filename); getchar (              );
      
	  //chamar a funcao
	  arquivo (x, arranjo, filename);
}

void Random (int limiteA, int limiteB, int test )
{
	//definir variaveis
	int controle     = 0;
	int y            = 0;
	int array [test];
	FILE * arquivo = fopen ( "DADOS.TXT", "wt" );
	
	//acoes
	srand ( time ( NULL ) );
	{
		for ( controle = 0; controle <= test; controle = controle + 1)
		{
			y = limiteA + rand ( ) %limiteB;
		}
		if ( y > limiteA )
		{
			y = limiteB + rand ( )%limiteA - 1;
		}
		array  [ controle  ] = y;
		printf ( "\n%d", y );
	}
	
	fprintf ( arquivo, "\n%d\n", test );
	for ( controle = 0; controle < test; controle = controle + 1 )
	{
		fprintf ( arquivo, "%d", array [ controle ] );
	}
}

void method_03 ( )
{
	//denifir variaveis
    int limiteA = 0;
    int limiteB = 0;
    int test    = 0;
	
	//usuario
    printf("\nEntre com o limite inferior:");
    scanf("%d", &limiteB); getchar (       );
	
    printf("\nEntre com o limite superior:");
    scanf("%d", &limiteA); getchar (       );
	
    printf("\nEntre com a quantidade de testes:");
    scanf("%d", &test); getchar (               );
	
	//chamar funcao
    Random ( limiteA, limiteB, test );
}

void task04 ( char filename [ ] )
{
	//definir dados
	FILE*arquivo = fopen(filename, "rt");
	int y = 0;
	int z = 0;
	int arranjo [ y ];
	int controle = 0;
	int menor = 0;
	
	//arquivo
	fscanf ( arquivo, "%d", &y );

	//acoes
    for ( controle = 0; controle  <y; controle = controle + 1 )
    {
        fscanf ( arquivo, "%d", &z       );
        arranjo[controle] = z;
        printf("\n%d", arranjo[controle] );
        menor = z;
    }
	
    for( controle = 0; controle < y; controle = controle + 1 )
    {
     if ( arranjo [ controle ] < menor )
     {
        menor = arranjo [ controle ];
     } 
    }

    printf("\n");
    printf("\nMENOR VALOR = %d", menor);
    fclose(arquivo);
}

void method_04 ( ) 
{
	//definir dados
    char filename[80];
	
	//usuario
    printf("\nEntre com o nome do arquivo que quer ler:");
    scanf("%s", filename); getchar(                     );
	
	//chamar funcao
    task04 ( filename );
}

void task05 ( char filename [ ] )
{
	//definir variaveis
    FILE*arquivo = fopen(filename, "rt");
	int y = 0;
	int z = 0;
	int arranjo[y];
	int controle = 0;
	int maior = 0;
	
	//arquivo
	fscanf ( arquivo, "%d", &y );

	//acoes
    for( controle = 0; controle<y; controle = controle + 1 )
    {
        fscanf ( arquivo, "%d", &z );
        arranjo[controle] = z;
        printf("\n%d", arranjo[controle]);
        maior = z;
    }

 
    for( controle = 0; controle<y; controle = controle + 1 )
    {
     if ( arranjo [controle]  >maior )
        {
            maior = arranjo[controle];
        } 
    }
	printf("\n");
	printf("\nMAIOR VALOR = %d", maior);
	fclose(arquivo); 
}

void method_05 ( )
{
	//definir variaveis
    char filename[80];
	
	//usuario
    printf("\nEntre com o nome do arquivo que quer ler:");
    scanf( "%s", filename ); getchar (                  );
	
	//chamar funcao
    task05 ( filename );
}

void task06 ( char filename[ ] )
{
	//definir variaveis
	FILE*arquivo = fopen(filename, "rt");
	FILE*arquivo2 = fopen("ACIMA_MEDIA.txt", "wt");
	FILE*arquivo3 = fopen("ABAIXO_MEDIA.txt", "wt");
	int y = 0;
	int z = 0;
	int arranjo[y];
	int controle = 0;
	double  total = 0.0;
	double  media = 0.0;
	
	//arquivo
	fscanf ( arquivo, "%d", &y );

	//acoes
    for(controle = 0; controle<y; controle = controle +1)
    {
		fscanf ( arquivo, "%d", &z );
        arranjo[controle] = z;
        total = total + z;     
    }
     media = (total + 1.0) / (y + 1.0);
	
	//usuario
	 printf("\n");
	 printf("\nVALOR MEDIA = %lf", media);
	 printf("\n");
	 printf("\nValores acima ou iguais a media = \n");

	//acoes
    for(controle = 0; controle<y; controle = controle +1)
    {
        if (arranjo[controle]>=media)
        {
            printf("\n%d", arranjo[controle]);
            fprintf(arquivo2,"\n%d", arranjo[controle]);
        } 
    }
	printf("\n");
	printf("\nValores abaixo da media = \n");
    for(controle = 0; controle<y; controle = controle +1)
    {
        if (arranjo[controle]<media)
        {
            printf("\n%d", arranjo[controle]);
            fprintf(arquivo3,"\n%d", arranjo[controle]);
        } 
    }
	 printf("\n");
	 printf("\nOs valores foram gravados em seus arquivos");
	 fclose(arquivo);
	 fclose(arquivo2);
	 fclose(arquivo3);
}


void method_06 ( )
{
	//definir variavel
    char filename[80];
	
	//usuario
    printf("\nEntre com o nome do arquivo que quer ler:");
    scanf("%s", filename);  getchar();
	
	//chamar funcao
    task06(filename);
}

void ordem(int x, int arranjo[])
{
	//definir variaveis
	int controle = 0;
	bool verifica = true; 
	
	//acoes
		while ( controle < x - 1 && verifica == true )
		{
			if ( arranjo [ controle ] > arranjo [ controle + 1 ] )
			{
				verifica = true;
			}
			else
			{
				verifica = false;
			}
				controle = controle + 1;
		}
		if ( verifica == true )
		{
			printf("\nOs valores estao em ordem DECRESCENTE");
		}
		else
		{
			printf("\nOs valores NAO estao em ordem"        );
		}

}

void method_07 ( )
{
	//definir variaveis
    int x        = 0;
    int z        = 0;
    int controle = 0;
	int arranjo[x];
	
	//usuario
    printf("\nEntre com um tamanho para o arranjo:");
    scanf("%d", &x);
    
	//acao
    for (controle = 0; controle <x; controle = controle + 1)
    {
        printf("\nEntre com um valor para [%d]:", controle);
        scanf("%d", &z);
        arranjo[controle] = z;
    }
	
	//chamar a funcao
    ordem ( x, arranjo );
}

void ordem02 (int x)
{
	//definir variavel
	FILE* arquivo = fopen("DADOS.txt", "rt");
	int y         = 0;
	int z         = 0;
	int controle  = 0;
    bool verifica = false; 
	int arranjo[y];
	
	//arquivo
	fscanf ( arquivo, "%d", &y );
	
	
	//acoes
    for ( controle = 0; controle < y; controle = controle + 1 )
    {
        fscanf ( arquivo, "%d", &z );
        arranjo[controle] = z;    
    }
        controle = 0;
    while ( controle < y && verifica == false )
    {
        if ( arranjo [ controle ] == x )
        {
            verifica = true;
        }
        controle = controle + 1;
    }
        if ( verifica == true )
        {
            printf("\nO valor ESTA no arquivo.");
        }
        else  
        {
			printf("\nO valor NAO esta no arquivo.");
		}
}

void method_08 ( )
{
	//defirnir variavel
    int x = 0;
	
	//usuario
    printf ( "\nEntre com um valor a ser procurado: " );
    scanf  ( "%d", &x ); getchar(                     );
    
	//chamar funcao
	ordem02 ( x );
    
}

void ordem03 (int x)
{
	//definir variaveis
	FILE* arquivo = fopen( "DADOS.txt", "rt" );
	int y         = 0;
	int z         = 0;
	int controle  = 0;
	bool verifica = false; 
	int arranjo[y];
	
	//arquivo
	fscanf ( arquivo, "%d", &y );
	
	//acoes
    for( controle = 0; controle < y; controle = controle +1 )
        {
            fscanf ( arquivo, "%d", &z );
            arranjo[controle] = z;    
        }
    controle = 0;
    while ( controle < y && verifica == false )
        {
            if ( arranjo [controle] == x )
            {
                verifica = true;
            }

            controle = controle + 1;
        }
        if ( verifica == true )
        {
            printf("\nO valor ESTA no arquivo na posicao %d.", controle);
        }
        else
        {
            printf("\nO valor NAO esta no arquivo.");
        }
}

void method_09 ( )
{
	//definir variavel
    int x = 0;
	
	//usuario
    printf("\nEntre com um valor a ser procurado: ");
    scanf("%d", &x); getchar(                      );
	
	//chamar a funcao
    ordem03(x);
}

void ordem04(int x)
{
	//definir variaveis
    FILE* arquivo = fopen("DADOS.txt", "rt");
	int y = 0;
	int z = 0;
	int controle = 0;
	int contador = 0; 
    int arranjo[y];
	
	//arquivo
	fscanf ( arquivo, "%d", &y );
	
	//acoes
    for ( controle = 0; controle<y; controle = controle +1 )
    {
        fscanf ( arquivo, "%d", &z );
		arranjo[controle] = z;    
    }
		controle = 0;
        while (controle<y)
        {
            if ( arranjo [ controle ] == x)
            {
                contador = contador + 1;
            }
            controle = controle + 1;
        }
    if ( contador > 0 )
    {
        printf("\nO valor se encontra %d vezes no programa.", contador);
    }
    else
    {
        printf( "\nO valor NAO esta no arquivo."                      );
    }
}

void method_10 ( )
{
	//definir variavel
    int x = 0;
	
	//usuario
    printf( "\nEntre com um valor a ser procurado: " );
    scanf ( "%d", &x ); getchar(                     );
    
	//chamar a funcao
	ordem04 ( x );
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