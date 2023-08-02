#include "io.h"

void readMatriz1(int rows, int columns, int matriz[][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    chars text = IO_new_chars(STR_SIZE);

    // ler os valores
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            // Verifica se o elemento é positivo
            if (matriz[x][y] <= 0)
            {
                printf("Erro: elemento negativo ou nulo\n");
            }
            else
            {
                strcpy(text, STR_EMPTY);
                z = IO_readint(IO_concat(
                    IO_concat(IO_concat(text, IO_toString_d(x)), ", "),
                    IO_concat(IO_concat(text, IO_toString_d(y)), " : ")));

                matriz[x][y] = z;
            }
        }
    }

    // Mostra a matriz na tela
    printf("Matriz:\n");
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("%.2f ", matriz[x][y]);
        }
        printf("\n");
    }
}

void method_01()
{
    // definir dados
    int n = 2;
    int matriz[n][n];

    // chamar a funcao
    readMatriz1(n, n, matriz);
}

void readFile(char *filename, int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    FILE *arquivo = fopen(filename, "rt");
    int x = 0;
    int y = 0;
    int z = 0;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            fscanf(arquivo, "%d", &z);
            matriz[x][y] = z;
        }
    }

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("%d\n", matriz[x][y]);
        }
    }
    fclose(arquivo);
}

void readAndPrint(char *filename, int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    FILE *arquivo = fopen(filename, "wt");
    int x = 0;
    int y = 0;
    int z = 0;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("\n(%d,%d)", x, y);
            scanf("%d", &z);
            matriz[x][y] = z;
        }
    }

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            fprintf(arquivo, "%d", matriz[x][y]);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
}

void method_02()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    char filename[80];
    int matriz[rows][columns];

    // usuario
    printf("Informe o nome do arquivo: ");
    scanf("%s", filename);
    getchar();

    printf("\nColunas:");
    scanf("%d", &columns);
    getchar();

    printf("\nLinhas:");
    scanf("%d", &rows);
    getchar();

    readFile(filename, rows, columns, matriz);
    readAndPrint(filename, rows, columns, matriz);
}

void readMatriz2(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("Informe o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
            getchar();
            matriz[x][y] = z;
        }
    }

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("[%d][%d] = %d\n", x, y, matriz[x][y]);
        }
    }

    if (rows = columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if (x == y)
                {
                    printf("%d", matriz[x][y]);
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
}

void method_03()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("\nLinhas:");
    scanf("%d", rows);
    getchar();
    printf("\nColunas:");
    scanf("%d", &columns);
    getchar();

    // chamar a funcao
    readMatriz2(rows, columns, matriz);
}

void readMatriz3(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("Insira o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
            getchar();
            matriz[x][y] = z;
        }
    }

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("[%d][%d] = %d\n", x, y, matriz[x][y]);
        }
    }

    printf("\nDiagonal Secundaria:\n");
    if (rows == columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if (x + y == n - 1)
                {
                    printf("%d\n", matriz[x][y]);
                }
            }
        }
    }
}

void method_04()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Linhas");
    scanf("%d", &rows);
    getchar();

    printf("Colunas:");
    scanf("%d", &columns);
    getchar();

    // chamar funcao
    readMatriz3(rows, columns, matriz);
}

void readMatriz4(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("Elemento [%d][%d]: \n", x, y);
            scanf("%d", &z);
            getchar();
            matriz[x][y] = z;
        }
    }
    printf("Digagona Principal e seus valores abaixo:\n");
    if (rows == columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if ((x == y) || (x - y >= 0))
                {
                    printf("%d\n", matriz[x][y]);
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
}

void method_05()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Linhas:");
    scanf("%d", &rows);
    getchar();
    printf("Colunas:");
    scanf("%d", &columns);
    getchar();

    // chamar a funcao
    readMatriz4(rows, columns, matriz);
}

void readMatriz6(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("Digite o valor da posicao [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
            getchar();
            matriz[x][y] = z;
        }
    }
    printf("Diagonal Principal e seus valores acima =");
    printf("\n");

    if (rows == columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if ((x == y) || (x - y <= 0))
                {
                    printf("%d", matriz[x][y]);
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
}

void method_06()
{
    // definir variaveis
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Linhas: ");
    scanf("%d", &rows);
    getchar();
    printf("Colunas: ");
    scanf("%d", &columns);
    getchar();

    // chamar a funcao
    readMatriz6(rows, columns, matriz);
}

readMatriz7(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("Insira o valor [%d][%d]: ", x, y);
            scanf("%d", &z);
            getchar();
            matriz[x][y] = z;
        }
    }

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("%d\n", matriz[x][y]);
        }
    }
    printf("\n");
    printf("Segunda diagonal e seus valores abaixo = ");
    printf("\n");

    if (rows == columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if (x + y == n - 1 || x >= n - y)
                {
                    printf("%d\t", matriz[x][y]);
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
}

void method_07()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Insira o numero de linhas e colunas da matriz: ");
    scanf("%d", &rows);
    getchar();
    scanf("%d", &columns);
    getchar();

    // chamar a funcao
    readMatriz7(rows, columns, matriz);
}

void readMatriz8(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("Insira o elemento [%d][%d]: ", x, y);
            scanf("%d", &z);
            getchar();
            matriz[x][y] = z;
        }
    }
    printf("Diagonal Secundaria e seus valores acima =");
    printf("\n");

    if (rows = columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if (x + y == n - 1 || x + y < n + 1)
                {
                    printf("%d", matriz[x][y]);
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
}

void method_08()
{
    // definir variaveis
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Insira o numero de linhas e colunas: ");
    scanf("%d %d", &rows, &columns);
    getchar();

    // chamar a funcao
    readMatriz8(rows, columns, matriz);
}

void readMatriz9(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("\n(%d,%d): ", x, y);
            scanf("%d", &z);
            matriz[x][y] = z;
        }
    }
    printf("\n");
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("%d\t", matriz[x][y]);
        }

        printf("\n");
    }
    printf("Diagonal Principal e seus valores abaixo = ");

    if (rows = columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if ((x == y) || (x - y >= 0))
                {
                    if (matriz[x][y] != 0)
                    {
                        printf("%d\t", matriz[x][y]);
                    }
                    else
                    {
                        printf("0");
                    }
                }
            }
            printf("\n");
        }
    }
}

void method_09()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Informe o numero de linhas e colunas da matriz: \n");
    scanf("%d %d", &rows, &columns);
    getchar();

    // chamar a funcao
    readMatriz9(rows, columns, matriz);
}

void readMatriz10(int rows, int columns, int matriz[rows][columns])
{
    // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
    int n = rows;

    // acoes
    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("\n[%d][%d]:", x, y);
            scanf("%d", z);
            getchar();
            matriz[x][y] = z;
        }
    }
    printf("\n");

    for (x = 0; x < rows; x = x + 1)
    {
        for (y = 0; y < columns; y = y + 1)
        {
            printf("%d ", matriz[x][y]);
        }
    }
    printf("\n");
    printf("Diagonal Principal e seus valores acima =");
    printf("\n");

    if (rows == columns)
    {
        for (x = 0; x < rows; x = x + 1)
        {
            for (y = 0; y < columns; y = y + 1)
            {
                if (x == y || x - y <= 0)
                {
                    printf("%d\n", matriz[x][y]);
                }
                else
                {
                    printf("0");
                }
            }
        }
    }
}

void method_10()
{
    // definir dados
    int rows = 0;
    int columns = 0;
    int matriz[rows][columns];

    // usuario
    printf("Informe o numero de linhas e colunas da matriz:");
    scanf("%d %d", &rows, &columns);
    getchar();

    // chamar a funcao
    readMatriz10(rows, columns, matriz);
}

int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial

    // repetir até desejar parar
    do
    {
        // identificar
        printf("\nExemplo0911-20- Programa - v0.0");

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
