#include "io.h"
#define MAX_ROWS 100
#define MAX_COLS 100


typedef struct s_int_Matrix
{
    int rows;
    int columns;
    ints *data;
    int ix, iy;
} int_Matrix;

typedef int_Matrix *ref_int_Matrix;
/**
new_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
@return referencia para arranjo com inteiros
@param rows - quantidade de dados
@param columns - quantidade de dados
*/
ref_int_Matrix new_int_Matrix(int rows, int columns)
{
    // reserva de espaco
    ref_int_Matrix tmpMatrix = (ref_int_Matrix)malloc(sizeof(int_Matrix));
    // estabelecer valores padroes
    if (tmpMatrix != NULL)
    {
        tmpMatrix->rows = 0;
        tmpMatrix->columns = 0;
        tmpMatrix->data = NULL;
        // reservar espaco
        if (rows > 0 && columns > 0)
        {
            tmpMatrix->rows = rows;
            tmpMatrix->columns = columns;
            tmpMatrix->data = malloc(rows * sizeof(ints));
            if (tmpMatrix->data)
            {
                for (tmpMatrix->ix = 0;
                     tmpMatrix->ix < tmpMatrix->rows;
                     tmpMatrix->ix = tmpMatrix->ix + 1)
                {
                    tmpMatrix->data[tmpMatrix->ix] = (ints)malloc(columns * sizeof(int));
                } // fim repetir
            }     // fim se
        }         // fim se
        tmpMatrix->ix = 0;
        tmpMatrix->iy = 0;
    } // fim se
    return (tmpMatrix);
} // fim new_int_Matrix ( )
/**
free_int_Matrix - Dispensar espaco para arranjo com inteiros
@param tmpMatrix - referencia para grupo de valores inteiros
*/

bool isEqual(int n, int array1[], int array2[]) {
  // definir dados locais
  bool result = true;
  int x = 0;
  // mostrar valores no arranjo
  x = 0;
  while (x < n && result) {
    // testar valor
    result = result && (array1[x] == array2[x]);
    // passar ao proximo
    x = x + 1;
  } // fim repetir
  // retornar resposta
  return (result);
}

void printIntArray(int array[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void taks ( int sup, int inf, int quantidade )
{
	//definir variaveis
	FILE *arquivo = fopen ("DADOS.TXT", "wt");
	int controle       = 0;
	int z              = 0;
	int array [quantidade];
	fprintf ( arquivo, "%d", quantidade );
	
	//acoes
	for ( controle = 0; controle < quantidade; controle = controle + 1 )
		{
			int z = rand () %sup + inf;
			if ( z > sup || z < inf )
			{
				controle = controle - 1;
			}
			else 
			{
				array [controle] = z;
				fprintf ( arquivo, "\n%d", z );
			}
		}
	}
	
void method_01 ( )
{
	//definir variaveis
	int sup        = 0;
	int inf        = 0;
	int quantidade = 0;
		
	//usuario
	printf ( "Qual o limite superior?" );
	scanf  ( "%d", &sup );getchar (    );

	printf ( "Qual o limite inferior?" );
	scanf  ( "%d", &inf );getchar (    );

	printf ( "Qual o quantidade?" );
	scanf  ( "%d", &quantidade    ); getchar (    );
		
	//chamar funcao
	task ( sup, inf, quantidade );
}

bool searchArray ( int value, int n, int array [] )
{
    //definir variaveis
    bool result = false;
    int x       =     0;

    //acoes
    x = 0;
    while ( x < n && !result )
    {
        result = (value == array [x] );
        x      = x + 1;
    }

    //retorno
    return result;
}

void method_02 ( )
{
    //definir dados
    int n     = 0;
    int value = 0;
    int array [n];
    n = freadArraySize ( "DADOS,TXT" );

    //acoes
    if ( n <= 0 )
    {
        printf ( "\nError" );
    }
    else
    {
        freadIntArray ( "DADOS.TXT", n, array );
        printf        ( "\nOriginal"          );

        value = array[0];
        IO_printf("\nProcurar por (%d) = %d\n",
        value, searchArray(value, n, array));
        value = array[n / 2];
        IO_printf("\nProcurar por (%d) = %d\n",
        value, searchArray(value, n, array));
        value = array[n - 1];
        IO_printf("\nProcurar por (%d) = %d\n",
        value, searchArray(value, n, array));
        value = (-1);
        IO_printf("\nProcurar por (%d) = %d\n",
        value, searchArray(value, n, array));
    }
}

bool IsEqual ( int n, int array [ ], int array2 [ ] )
{
    //definir variaveis
    bool result = false;
    int x       =     0;
    
    //acoes
    while ( x < n && result )
    {
        result = result && array[x] == array2 [x];
        x      = x + 1;
    }    

    //retorno
    return result;
}

void method_03 ( )
{
    //definir variaveis
    int n = 0; 
    n = freadArraySize ( "ARRAY1.TXT" );

    //acoes
    if (n <= 0)
    {
        IO_printf ( "\nERRO: Valor invalido.\n" );
    } 
    else 
    {
        int array[n];
        int other[n];

        freadIntArray ( "ARRAY1.TXT", n, array );
        copyIntArray  ( n, other, array        );

        IO_printf     ( "\nOriginal\n" );
        printIntArray ( n, array       );

        IO_printf     ( "\nCopia\n" );
        printIntArray ( n, other    );

        IO_printf( "\nIguais = %d\n", isEqual ( n, array, other ) );

        other[0] = (-1) * other[0];

        IO_printf ( "\nCopia alterada\n" );
        printIntArray ( n, other );

        IO_printf( "\nIguais = %d\n", isEqual ( n, array, other ) );
    } 
}

void AddIntArray ( int n, int array [], int array2 [], int array3 [], int k )
{
    //definir variaveis
    int x = 0;

    //acoes
    for ( x = 0; x < n; x = x + 1 )
    {
        array3 [ x ] = array [ x ] + array2 [ x ] * k;
    }
}

void method_04 ( )
{
    // definir variaveis
    int n = 0; 
    n = freadArraySize( "ARRAY1.TXT" );

    if ( n <= 0 )
    {
        printf ( "\nERRO: Valor invalido.\n" );
    }
    else
    {
        int array [n];
        int other [n];
        int sum   [n];

        freadIntArray ( "ARRAY1.TXT", n, array );
        copyIntArray  ( n, other, array        );

        IO_printf      ( "\nOriginal\n" );
        printIntArray  ( n, array       );

        IO_printf      ( "\nCopia\n" );
        printIntArray  ( n, other    );

        AddIntArray ( n, sum, array, (-2), other );

        IO_printf     ( "\nSoma\n" );
        printIntArray ( n, sum     );
    } 
}

void task1 ( char filename [80] )
{
    // definir variaveis
    FILE *arquivo  = fopen ( filename, "rt" );
    int controle   = 0;
    int quantidade = 0;
    bool crescente = false;
    int array [quantidade];
    fscanf ( arquivo, "%d", &quantidade );

    //acoes
    for ( controle = 0; controle < quantidade; controle = controle + 1 )
    {
        fscanf ( arquivo, "%d", &array[controle] );
    }

    controle  = 1;
    while ( controle < quantidade && crescente == true )
    {
        if ( array[controle] < array[controle - 1] )
        {
            crescente = false;
        }
        controle = controle + 1;
    }

    if ( crescente == true )
    {
        printf ( "\nEsta em ordem"     );
    }
    else
    {
        printf ( "\nNao esta em ordem" );
    }
    fclose ( arquivo );
}

void method_05 ( )
{
    //definir variaveis
    char filename [80];
    int value      = 0;

    //usuario
    printf ( "\nQual o nome do arquivo:" );
    scanf  ( "%s", filename ); getchar ( );

    //funcao
    task1 ( filename );
}

void task2 ( char filename [80] )
{
    //definir variaveis
    FILE *arquivo = fopen ( filename, "rt" );
    int x         = 0;
    int y         = 0;
    int matriz [3][3];
    int transp [3][3];

    //acoes
    for ( x = 0; x < 3; x = x + 1 )
    {
        for ( y = 0; y < 3; y = y + 1)
        {
            fscanf ( arquivo, "%d", &matriz[x][y] );
            fscanf ( arquivo, "%d", &transp[x][y] );
        }
    }

    //fechar o arquivo
    fclose ( arquivo );
}

void method_06 ( )
{
    //definir variaveis
    char filename [80];

    //usuario
    printf ( "\nNome do arquivo:" );
    scanf  ( "%s", filename       ); getchar ( );

    //chamar a funcao
    task2 ( filename );
}

int ReadAndPrint ( char *filename, int rows, int columns, int matriz[rows][columns] )
{
    //definir dados
    FILE *arquivo = fopen ( filename, "rt" );
    int x = 0;
    int y = 0;
    int z = 0;
    bool trust = true;

    //acoes
    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            printf ( "\n[%d][%d]", x ,y    );
            scanf  ( "%d", &z ); getchar ( );
            matriz[x][y] = z;
        }
    }

    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            fprintf ( arquivo, "%d", matriz[x][y] );
            if ( matriz[x][y] != 0 )
            {
                trust = false;
            }
        }
    }

    if ( trust == false )
    {
        printf ( "\nA matriz contem valores diferente de 0" );
    }
    else
    {
        printf ( "\nA matriz contem valores iguais a zero"  );
    }

    fclose ( arquivo );

}

void method_07 ( )
{
    //definir variaveis
    char filename[80];
    int columns   = 0;
    int rows      = 0;
    int matriz[rows][columns];

    //usuario
    printf("\nEntre com a quantidade de colunas: ");
    scanf("%d", &columns); getchar (              );
  
    printf("\nEntre com a quantidade de linhas: ");
    scanf("%d", &rows); getchar (                );
    
    printf("\nEntre com o nome do arquivo em que quer gravar: ");
    scanf("%s", filename); getchar (                           );
      
    ReadAndPrint (filename, rows, columns, matriz );
}

int ReadFile ( char *filename, int rows, int columns, int matriz[rows][columns] )
{
    //definir variaveis
    FILE *arquivo = fopen ( filename, "rt" );
    int x         = 0;
    int y         = 0;
    int z         = 0;

    // acoes
    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            fscanf ( arquivo, "%d", &z);
            matriz[x][y] = z;
        }
    }
    fclose ( arquivo );

    //retorno
    return (matriz [rows][columns]);
}

void compara ( int rows, int columns, int matriz[rows][columns], int matriz2 [rows][columns] )
{
    //definir dados
    int x     =    0;
    int y     =    0;
    bool same = true;

    //acoes
    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            if ( matriz [x][y] != matriz2[x][y] )
            {
                same = false;
            }
        }
    }

    if ( same == true )
    {
        printf ( "\nAs matrizes sao iguais"     );
    }
    else
    {
        printf ( "\nAs matrizes nao sao iguais" );
    }
}

void method_08 ( )
{
    //definir variaveis
    char filename  [80];
    char filename2 [80];
    int rows      =   0;
    int columns   =   0;
    int matriz  [rows][columns];
    int matriz2 [rows][columns];

    //usuario    
    printf("\nEntre com a quantidade de colunas: ");
    scanf("%d", &columns); getchar (              );

    printf("\nEntre com a quantidade de linhas: ");
    scanf("%d", &rows); getchar (                );

    printf("\nEntre com o nome do arquivo: ");
    scanf("%s", filename); getchar (        );
  
    printf("\nEntre com o nome do segundo arquivo: ");
    scanf("%s", filename2); getchar (               );

    //chamar funcoes
    ReadFile ( filename, rows, columns, matriz  );
    ReadFile ( filename2, rows, columns, matriz );
    compara  ( rows, columns, matriz, matriz2   );
}

void SumArray ( int matriz1[][MAX_COLS], int matriz2[][MAX_COLS], int rows, int columns, int constante )
{
    //definir variaveis
    int x = 0;
    int y = 0;

    //acoes
    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            matriz1[x][y] = matriz1[x][y] + matriz2[x][y] * constante;
        }
    }
}

void method_09 ( )
{
    //definir variaveis
    int matriz1[MAX_ROWS][MAX_COLS];
    int matriz2[MAX_ROWS][MAX_COLS];
    int rows       = 0;
    int columns    = 0;
    int constante  = 0;
    FILE *arquivo1 = fopen ( "MATRIZ1.TXT", "rt" );
    FILE *arquivo2 = fopen ( "MATRIZ2.TXT", "rt" ); 
    int x = 0;
    int y = 0;

    //arquivo
    fscanf ( arquivo1, "%d %d", &rows, &columns );
    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            fscanf ( arquivo1, "%d", &matriz1[x][y] );
        }
    }

    for ( x = 0; x < rows; x = x + 1 )
    {
        for ( y = 0; y < columns; y = y + 1 )
        {
            fscanf ( arquivo2, "%d", &matriz2[x][y] );
        }
    }

    fscanf ( arquivo2, "%d", &constante );
    fclose ( arquivo1 );
    fclose ( arquivo2 );

    //acoes
    if ( rows <= 0 || columns <= 0 )
    {
        printf ( "Erro\n" );
    }
    else
    {
        SumArray ( matriz1, matriz2, rows, columns, constante );
        printf   ( "Resultado:\n" );
        for ( x = 0; x < rows; x = x + 1)
        {
            for ( y = 0; y < columns; y = y +  1 )
            {
                printf ( "%d ", matriz1[x][y] );
            }
        }
    }
}

void MultiplicarMatrizes ( int matriz1[][MAX_COLS], int matriz2[][MAX_COLS], int resultado[][MAX_COLS], int linhas1, int colunas1, int colunas2 ) 
{
    int i, j, k;

    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void method_10 ( )
{
 int matriz1[MAX_ROWS][MAX_COLS];
    int matriz2[MAX_ROWS][MAX_COLS];
    int resultado[MAX_ROWS][MAX_COLS];
    int linhas1, colunas1, linhas2, colunas2;

    FILE* arquivo1 = fopen("Matriz1.txt", "r");
    FILE* arquivo2 = fopen("Matriz2.txt", "r");

    // Ler as dimensões das matrizes
    fscanf(arquivo1, "%d %d", &linhas1, &colunas1);
    fscanf(arquivo2, "%d %d", &linhas2, &colunas2);

    // Verificar se as dimensões das matrizes são compatíveis para a multiplicação
    if (colunas1 != linhas2) {
        printf("Erro: as dimensões das matrizes não são compatíveis para a multiplicação.\n");
    }

    // Ler os valores da matriz 1
    int i, j;
    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas1; j++) {
            fscanf(arquivo1, "%d", &matriz1[i][j]);
        }
    }

    // Ler os valores da matriz 2
    for (i = 0; i < linhas2; i++) {
        for (j = 0; j < colunas2; j++) {
            fscanf(arquivo2, "%d", &matriz2[i][j]);
        }
    }

    fclose(arquivo1);
    fclose(arquivo2);

    // Calcular o produto das matrizes
    MultiplicarMatrizes(matriz1, matriz2, resultado, linhas1, colunas1, colunas2);

    // Imprimir o resultado
    printf("Resultado:\n");
    for (i = 0; i < linhas1; i++) 
    {
        for (j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
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