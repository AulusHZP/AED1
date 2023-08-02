#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_intArray
{
    int length;
    int *data;
} intArray;

typedef intArray* ref_intArray;

/*
Funcao para acrescentar caractere ao final de uma cadeia
por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
*/

char* str_push_back ( char *s, char c)
{
	int length = strlen (s);
	s = realloc ( s, (length + 2) *sizeof (char) );
	s[length] = c;
	s[length + 1] = '\0';
	return s;
}

/*
Funcao para remover caractere do final de uma cadeia
por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
*/
char* str_pop_back ( char *s )
{
	int length = strlen (s);
	if ( length != 0 )
	{
		s = realloc ( s, length* sizeof (char) );
		s[length - 1] = '\0';
	}
	return s;

}

/*
Funcao para acrescentar caractere ao início de uma cadeia
por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
*/
char* str_push_front ( char *s, char c )
{
	int length = strlen (s);
	s = realloc ( s, (length + 2 )* sizeof (char) );
	memmove(s+1, s, length + 1);
	s[0] = c;
	return  s;
	
}

/**
Funcao para remover caractere do início de uma cadeia
por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
*/
char* str_pop_front ( char *s )
{
	int length = strlen (s);
	if ( length != 0 )
	{
		memmove( s, s+1, length );
		s = realloc ( s, length *sizeof (char) );
	}
	return s;
		
}

/*
Funcao para procurar pela primeira ocorrencia de caractere em cadeia
por meio de apontador.
@return apontador para a primeira ocorrência; NULL, caso contrario
@param s - apontador para cadeia de caracteres
@param c - caractere a ser procurado
*/
char* str_chr ( char *s, char c )
{
	while ( *s != '\0' )
	{
		if ( *s != c )
		{
			s++;
		}
	}
	return NULL;
}

/*
Funcao para separar caracteres ate' a ocorrencia de delimitador em cadeia
por meio de apontador.
@return apontador para caracteres; NULL, caso contrario
@param s - apontador para cadeia de caracteres
@param delimiter - caractere a ser procurado
*/
char* str_tok ( char *s, char delimiter )
{
	char* lstk = NULL;
	if ( s!= NULL )
	{
		lstk = s;
	}
	else if ( lstk == NULL )
	{
		return NULL;
	}
	char* result = lstk;
	
	while ( *lstk != '\0' )
	{
		if ( *lstk == delimiter )
		{
			*lstk = '\0';
			lstk = lstk + 1;
			return result;
		}
		lstk = lstk + 1;
	}
	return result;
	
}

/*
Funcao para comparar arranjos de inteiros
por meio de apontadores.
@return zero, se forem iguais;
negativo, se o valor da diferenca for menor e estiver no primeiro arranjo
positivo , se o valor da diferenca for maior e estiver no primeiro arranjo
@param p - apontador para inicio do primeiro arranjo
@param q - apontador para inicio do segundo arranjo
*/


int chars_cmp ( chars r, chars s )
{
	int t = 0;
	if ( s )
	{
		while ( val(r) && val(s) && val(r) == val(s) )
		{
			r++;
			s++;
		}
	}
	return ( val(r)-val(s) );
}

/*
Funcao para juntar arranjos de inteiros
por meio de apontadores.
@return apontador para inicio do arranjo com a uniao
@param p - apontador para inicio do primeiro arranjo
@param q - apontador para inicio do segundo arranjo
*/


ref_intArray intArray_cat(ref_intArray p, ref_intArray q)
{
    int newLength = p->length + q->length;
    int *newData = malloc(newLength * sizeof(int));
    
    for (int i = 0; i < p->length; i++) 
    {
        newData[i] = p->data[i];
    }
    
    for (int i = 0; i < q->length; i++) 
    {
        newData[p->length + i] = q->data[i];
    }
    
    ref_intArray result = malloc(sizeof(intArray));
    result->length = newLength;
    result->data = newData;
    
    return result;
}

/*
Funcao para procurar pela primeira ocorrencia de valor em arranjo
por meio de apontador.
@return apontador para a primeira ocorrência; NULL, caso contrario
@param a - apontador para arranjo de inteiros
@param x - valor ser procurado
*/

typedef int* ref_intArray;

ref_intArray intArray_seek(ref_intArray a, int x) 
{
    while (*a != '\0') 
    { // Percorre o array até encontrar o fim (caractere nulo)
        if (*a == x)
        { // Se o valor atual for igual ao valor procurado
            return a; // Retorna o apontador atual
        }
        a++; // Avança o ponteiro para o próximo elemento
    }
    return NULL; // Valor não encontrado, retorna NULL
}

/*
Funcao para separar sequencia de valores em arranjo
por meio de apontador.
@return apontador para inicio da sequencia de inteiros; NULL, caso contrario
@param a - apontador para arranjo de inteiros
@param start - posicao inicial
@param size - quantidade de dados
*/

// Definição do tipo de dado ref_intArray
typedef int* ref_intArray;

// Função para separar sequência de valores em arranjo por meio de apontador.
// Retorna um apontador para o início da sequência de inteiros ou NULL caso contrário.
ref_intArray intArray_sub(ref_intArray a, int start, int size) {
    int length = 0;
    ref_intArray result = a + start;

    while (length < size) {
        if (*result == '\0') { // Verifica se chegou ao fim do arranjo
            return NULL;
        }
        result++;
        length++;
    }

    return result;
}

void method01 ( )
{
	char *str = malloc(10 * sizeof(char));  // Alocar memória inicial para a cadeia
    strcpy(str, "Ola");  // Inicializar a cadeia
    
    printf("Antes: %s\n", str);
    str = str_push_back(str, '!');
    printf("Depois: %s\n", str);
}

void method02 ( )
{
    char *str = malloc(10 * sizeof(char));  // Alocar memória inicial para a cadeia
    strcpy(str, "Ola");  // Inicializar a cadeia
    
    printf("Antes: %s\n", str);
    str = str_pop_back(str);
    printf("Depois: %s\n", str);
}

void method03 ( )
{
	char *str = malloc(10 * sizeof(char));  // Alocar memória inicial para a cadeia
    strcpy(str, "Ola");  // Inicializar a cadeia
    
    printf("Antes: %s\n", str);
    str = str_push_front(str, '!');
    printf("Depois: %s\n", str);
}

void method04 ( )
{
    char *str = malloc(10 * sizeof(char));  // Alocar memória inicial para a cadeia
    strcpy(str, "Hello");  // Inicializar a cadeia
    
    printf("Antes: %s\n", str);
    str = str_pop_front(str);
    printf("Depois: %s\n", str);
}

void method05 ( )
{
    char str[] = "Ola Pessoal!";
    char searchChar = 'B';
    
    char *result = str_chr(str, searchChar);
    
    if (result != NULL) 
	{
        printf("O caractere '%c' foi encontrado na posição %ld da cadeia.\n", searchChar, result - str);
    } 
	else 
	{
        printf("O caractere '%c' não foi encontrado na cadeia.\n", searchChar);
    }
}

void method06 ( )
{
	char str[] = "Ola Pessoal";
    char delimiter = ' ';
    
    char *token = str_tok(str, delimiter);
    
    while (token != NULL) 
	{
        printf("Token: %s\n", token);
        token = str_tok(NULL, delimiter);
    }
}

void method07 ( )
{
      int array1Data[] = {1, 2, 3, 4, 5};
    int array2Data[] = {1, 2, 3, 4, 6};
    
    intArray array1 = {5, array1Data};
    intArray array2 = {5, array2Data};
    
    int result = intArray_cmp(&array1, &array2);
    
    if (result == 0) {
        printf("Os arranjos sao iguais.\n");
    } else if (result < 0) {
        printf("O primeiro arranjo e menor.\n");
    } else {
        printf("O primeiro arranjo e maior.\n");
    }
    
}

void method08 ( )
{
      int array1Data[] = {1, 2, 3};
    int array2Data[] = {4, 5, 6};
    
    intArray array1 = {3, array1Data};
    intArray array2 = {3, array2Data};
    
    ref_intArray result = intArray_cat(&array1, &array2);
    
    printf("Resultado: ");
    for (int i = 0; i < result->length; i++) 
    {
        printf("%d ", result->data[i]);
    }
    printf("\n");
    
    free(result->data);
    free(result);
}

void method09 ( )
{
    int arr[] = {5, 2, 10, 8, 3};
    int x = 10;

    
    ref_intArray result = intArray_seek(arr, x);

    if (result != NULL) {
        printf("Valor encontrado na posição %ld.\n", result - arr);
    } else {
        printf("Valor não encontrado.\n");
    }
}

void method10 ( )
{
    int arr[] = {5, 2, 10, 8, 3};
    int start = 1;
    int size = 3;

    // Chamada da função intArray_sub para separar a sequência de valores no array arr
    ref_intArray result = intArray_sub(arr, start, size);

    if (result != NULL) {
        printf("Sequência encontrada: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    } else {
        printf("Sequência não encontrada.\n");
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
        case 10:
            method10();

        } // fim escolher
    } while (x != 0);

    // encerrar
    IO_pause("Apertar ENTER para terminar");

    return (0);
} // fim main ()
