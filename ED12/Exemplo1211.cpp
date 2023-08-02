#include <iostream>
#include <limits>
#include <string>
#include "mymatrix.hpp"
#include <iostream>
#include <string>
#include <fstream>
using std::cin;  
using std::cout; 
using std::endl; 
#include <iomanip>
using std::setw; 
#include <string>
using std::string; 
#include <fstream>
using std::ifstream;
using std::ofstream; 
#include <string.h>

class aleatorio 
{
	public: 
		void intervalo ( int qua, int inf, int sup );
};

class matriz 
{
	public:
		void Escalar     ( char filename[80], int constante     );
		void Identidade  ( char filename[80]                    );
		void Somar       ( char filename[80], char filename2[80]);
		void SomarLinhas ( char filename[80], int constante     );
		void SubtrairLin ( char filename[80], int constante     );
		void ProcurarLin ( char filename[80], int procurando    );
		void ProcurarCol ( char filename[80], int procurando    );
		void Transpor    ( char filename[80]                    );
};

class CompareString
{

public:
    // Classes object of string
    char str[25];

    // Parameterized Constructor
    CompareString(char str1[])
    {
        // Initialize the string to class object
        strcpy(this->str, str1);
    }

    // Overloading '==' under a function
    // which returns integer 1/true
    // if left operand string
    // and right operand string are equal.
    //(else return 0/false)
    int operator==(CompareString s2)
    {
        if (strcmp(str, s2.str) == 0)
            return 1;
        else
            return 0;
    }

    // Overloading '<=' under a function
    // which returns integer 1/true
    // if left operand string is smaller than
    // or equal to the right operand string.
    // (else return 0/false)
    int operator<=(CompareString s3)
    {
        if (strlen(str) <= strlen(s3.str))
            return 1;
        else
            return 0;
    }

    // Overloading '>=' under a function
    // which returns integer 1/true
    // if left operand string is larger than
    // or equal to the right operand string.
    //(else return 0/false)
    int operator>=(CompareString s3)
    {
        if (strlen(str) >= strlen(s3.str))
            return 1;
        else
            return 0;
    }
};
void aleatorio::intervalo (int qua, int inf, int sup)
{
	//definir variaveis
	ofstream afile;
	afile.open ( "DADOS.TXT" );
	int x = 0;
	int z = 0;
	
	//acoes
	afile << qua;
	
	for ( x = 0; x < qua; x = x + 1 )
	{
		z = rand()% sup + inf;
		if ( z < sup && z > inf )
		{
			afile << z << std::endl;
		}
		else
		{
			x = x - 1;
		}
	}
	
}

void method_01 ( )
{
	//definir variaveis
	int inf = 0;
	int sup = 0;
	int qua = 0;
	
	//usuario
	std::cout << "Qual a quantidade?" ; std::cin >> qua; getchar ( );
	std::cout << "Qual o valor inf?"  ; std::cin >> inf; getchar ( );
	std::cout << "Qual o valor sup?"  ; std::cin >> sup; getchar ( );
	
	//chamando funcao
	aleatorio     *al1 = new aleatorio;
	al1 -> intervalo ( qua, inf, sup );
}

void matriz::Escalar (char filename[80], int constante )
{
	//definir variaveis
	int x = 0;
	int y = 0;
	int z = 0;
	int q = 0;
	ifstream afile;
	afile.open (filename);
	
	//acoes
	afile >> q;
	int matriz [q][q];
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			afile >> z;
			matriz [x][y] = z * constante;
		}	
	}
	
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			std::cout << matriz[x][y] << std::endl;
		}
	}
	
	afile.close ( ); 
}

void method_02 ( )
{
	//definir variaveis
	char filename [80];
	int  constante = 0;
	
	//usuario
	std::cout << "Qual o nome do arquivo?"  << std::endl; std::cin >> filename; getchar (  );
	std::cout << "Qual o nome da constante" << std::endl; std::cin >> constante; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz (        );
	m1 -> Escalar (filename,constante);
}

void matriz::Identidade ( char filename[80] )
{
	//definir dados
	int x = 0;
	int y = 0;
	int z = 0;
	int v = 0;
	int q = 0;
	ifstream afile;
	afile.open (filename);
	int matriz     [q][q];
	
	//acoes
	afile >> q;
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			afile >> matriz[x][y];
		}
	}
	
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			if ( x == y )
			{
				z = matriz[x][y];
				if ( z == 1 )
				{
					v = v + 1;
				}
			}
		}
	}
	
	if ( v == q )
	{
		std::cout << "\nA matriz e' identidade" << std::endl;
	}
	else
	{
		std::cout << "Nao e' identidade" << std::endl;
	}
	
	afile.close ( );
}

void method_03 (  )
{
	//definir variaveis
	char filename  [80];
	
	//usuario
	std::cout << "\nQual o nome do arquivo?" << std::endl; std::cin >> filename; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz (   );
	m1 -> Identidade ( filename );
}



void compare ( CompareString s1, CompareString s2 )
{
	//acoes
	if ( s1 == s2 )
	{
		std::cout << s1.str << "e' igual a" << s2.str << std::endl;
	}
	else
	{
		std::cout << s1.str << "nao e' igual a" << s2.str << std::endl;
			if ( s1 >= s2 )
			{
				std::cout << s1.str << "e' maior que" << s2.str << std::endl;
			}
			else
			{
				std::cout << s2.str << "e' maior que" << s1.str << std::endl;
			}
	}
}

void method_04 ( )
{
	//definir variaveis
	char str1 [80];
	char str2 [80];
	
	//usuario
	std::cout << "Qual a primeira string?" << std::endl; std::cin >> str1; getchar ( );
	std::cout << "Qual a segunda  string?" << std::endl; std::cin >> str2; getchar ( );
	
	//chamando funcoes
	CompareString s1 ( str1 );
	CompareString s2 ( str2 );
	
	compare ( s1,s2 );
}

void matriz::Somar ( char filename[], char filename2[] )
{
	//definir variaveis
	int qua           = 0;
	int x             = 0;
	int y             = 0;
	ifstream        afile;
	afile.open (filename);
	
	//acoes
	afile >> qua;
	int matriz [qua][qua];
	for ( x = 0; x < qua; x = x + 1 )
	{
		for ( y = 0; y < qua; y = y + 1 )
		{
			afile >> matriz[x][y];
		}
	}
	afile.close ( );
	
	//definir arquivo 2
	ifstream afile2;
	afile2.open ( filename2 );
	int qua2              = 0;
	int matriz2    [qua][qua];
	
	//acoes2
	afile2 >> qua2;
	for ( x = 0; x < qua2; x = x + 1 )
	{
		for ( y = 0; y < qua2; y = y + 1 )
		{
			afile2 >> matriz2[x][y];
		}
	}
	afile2.close ( );
	
	//somar as matrizes
	if ( qua == qua2 )
	{
		int matriz3[qua][qua];
		for ( x = 0; x < qua; x = x + 1 )
		{
			for ( y = 0; y < qua; y = y + 1 )
			{
				matriz3[x][y] = matriz[x][y] + matriz[x][y];
			}
		}
		for ( x = 0; x < qua; x = x + 1 )
		{
			for ( y = 0; y < qua; y = y + 1  )
			{
				std::cout << std::endl << matriz3 [x][y];
			}
		}
	}
	else if ( qua2 > qua )
	{
		int matriz3[qua][qua];
		for ( x = 0; x < qua2; x = x + 1 )
		{
			for ( y = 0; y < qua2; y = y + 1 )
			{
				if ( !matriz[x][y] )
				{
					matriz3 [x][y] = matriz2 [x][y];
				}
				else
				{
					matriz3[x][y] = matriz2[x][y] + matriz[x][y];
				}
			}
		}
		
		for ( x = 0; x < qua2; x = x + 1 )
		{
			for ( y = 0; y < qua2; y = y + 1 )
			{
				std::cout << std::endl << matriz[x][y];
			}
		}
		
	}
	else if ( qua > qua2 )
	{
		int matriz3[qua][qua];
		for ( x = 0; x < qua; x = x + 1 )
		{
			for ( y = 0; y < qua; y = y + 1 )
			{
				if ( !matriz2[x][y] )
				{
					matriz3 [x][y] = matriz[x][y];
				}
				else
				{
					matriz3 [x][y] = matriz[x][y] + matriz2[x][y];
				}
			}
		}
		
		for ( x = 0; x < qua; x = x + 1 )
		{
			for ( y = 0; y < qua; y = y + 1 )
			{
				std::cout << std::endl << matriz3[x][y];
			}
		}
	}
}

void method_05 ( )
{
	//definir variaveis
	char filename1  [80];
	char filename2 [80];
	
	//usuario
	std::cout << "\nQual o nome do primeiro arquivo?" << std::endl; std::cin >> filename1; getchar ( );
	std::cout << "\nQual o nome do segundo arquivo?"  << std::endl; std::cin >> filename2; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz (        );
	m1 -> Somar (filename1, filename2);
}

void matriz::SomarLinhas ( char filename[80], int constante )
{
	//definir variaveis
	ifstream afile;
	afile.open ( filename );
	int x = 0;
	int y = 0;
	int q = 0;
	afile >> q;
	int matriz[q][q];
	int Linha1 [q];
	int Linha2 [q];
	int Linha3 [q*2];
	
	//acoes
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			afile  >> matriz[x][y];
		}
	}
	
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			if ( x == 0 )
			{
				Linha1[y] = matriz[x][y];
			}
			else if ( x == 1 )
			{
				Linha2[y] = matriz[x][y];
			}
		}
	}
	
	for ( x = 0; x < q*2; x = x + 1 )
	{
		Linha3[x] = Linha1[x] + Linha2[x] * constante;
	}
	
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			if ( x == 0 )
			{
				matriz[x][y] = Linha3[y];
			}
			std::cout << std::endl << matriz[x][y];
		}
	}
	afile.close ( );
}

void method_06 ( )
{
	//definir variaveis
	char filename[80];
	int  constante = 0;
	
	//usuario
	std::cout << "Qual o nome do arquivo?" << std::endl; std::cin >> filename ; getchar ( );
	std::cout << "Qual a constante usada?" << std::endl; std::cin >> constante; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz(                );
	m1 -> SomarLinhas ( filename, constante );
}

void matriz::SubtrairLin ( char filename[80], int constante )
{
	//definir variaveis
	ifstream afile;
	afile.open (filename);
	int x = 0;
	int y = 0;
	int q = 0;
	afile >> q;
	int matriz[q][q];
	int Linha1[q];
	int Linha2[q];
	int Linha3[q*2];
	
	//acoes
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			afile >> matriz[x][y];
		}
	}
	
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			if ( x == 0 )
			{
				Linha1[y] = matriz[x][y];
			}
			else if ( x == 1 )
			{
				Linha2[y] = matriz[x][y];
			}
		}
	}
	
	for ( x = 0; x < q*2; x = x + 1 )
	{
		Linha3[x] = (Linha1[x] - Linha2[x]) *constante;
	}
	
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			if ( x == 0 )
			{
				matriz[x][y] = Linha3[y];
			}
			std::cout << std::endl << matriz[x][y];
		}
	}
	afile.close( );
}

void method_07 ( )
{
	//definir variaveis
	char filename [80];
	int  constante = 0;
	
	//usuario
	std::cout << "Entre com o nome do arquivo?  " << std::endl; std::cin >> filename ; getchar ( );
	std::cout << "Entre com o nome da constante?" << std::endl; std::cin >> constante; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz (               );
	m1 -> SomarLinhas ( filename, constante );
}

void matriz::ProcurarLin ( char filename[80], int procurando )
{
	//definir variaveis
	ifstream afile;
	afile.open ( filename );
	int x  = 0;
	int y  = 0;
	int q  = 0;
	bool v = false;
	afile >> q;
	int matriz[q][q];
	
	//acoes
	for ( x = 0; x < q; x = x + 1 )
	{
		for ( y = 0; y < q; y = y + 1 )
		{
			afile >> matriz[x][y];
			if ( matriz[x][y] == procurando )
			{
				v = true;
			}
		}
	}
	
	if ( v == true )
	{
		std::cout << "O valor esta no arranjo" << std::endl;
	}
	
	afile.close ( );
}

void method_08 ( )
{
	//definir variaveis
	char filename  [80];
	int  procurando = 0;
	
	//usuario
	std::cout << "Entre com o nome do arquivo?  " << std::endl; std::cin >> filename  ; getchar ( );
	std::cout << "Entre com o nome da constante?" << std::endl; std::cin >> procurando; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz (                   );
	m1 -> ProcurarLin (filename, procurando);
	
}

void matriz::ProcurarCol(char filename[80], int procurado)
{
	//definir variaveis
    ifstream afile;
    afile.open(filename);
    int  x = 0;
    int  y = 0;
    int  q = 0;
    bool v = false;
    int  c = 0;
    afile >> q;
    int matriz[q][q];

	//acoes	
    for ( x = 0; x < q; x = x + 1 )
    {
        for ( y = 0; y < q; y = y + 1 )
        {
            afile >> matriz[x][y];
            if  (matriz[x][y] == procurado )
            {
                v = true;
                c = y;
            }
        }
    }

    if (v == true)
    {
        std::cout << "\nO valor ESTA no arrranjo na coluna " << c << std::endl;
    }
    afile.close( );
}

void method_09 ( )
{
	//definir variaveis
	char filename  [80];
	int  procurando = 0;
	
	//usuario
	std::cout << "Entre com o nome do arquivo?" << std::endl; std::cin >> filename  ; getchar ( );
	std::cout << "Entre com o nome da numero?"  << std::endl; std::cin >> procurando; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz (                      );
	m1 -> ProcurarCol ( filename, procurando );	
}

void matriz::Transpor ( char filename[80] )
{
	//definir Variaveis
    ifstream afile;
    afile.open(filename);
    int x = 0;
    int y = 0;
    int q = 0;
    afile >> q;
    int matriz[q][q];

	//acoes
    for ( x = 0; x < q; x = x + 1 )
    {
        for ( y = 0; y < q; y = y + 1 )
        {
            afile >> matriz[x][y];
        }
    }

    int matriz2[q][q];

    for ( x = 0; x < q; x = x + 1 )
    {
        for ( y = 0; y < q; y = y + 1 )
        {
            matriz2[x][y] = matriz[x][y];
        }
    }
	
	afile.close ( );
}

void method_10 ( )
{
	//definir variaveis
	char filename  [80];
	
	//usuario
	std::cout << "Entre com o nome do arquivo?" << std::endl; std::cin >> filename  ; getchar ( );
	
	//chamar a funcao
	matriz *m1 = new matriz ( );
	m1 -> Transpor ( filename );
}

int main ( )
{
  // definir dado
  int x = 0;
    
  do
  {
       
    // mostrar opcoes
    cout << "Opcoes "       << endl;
    cout << " 0 - parar " << endl;
    cout << " 1 - Methodo 1"  << endl;
    cout << " 2 - Methodo 2"  << endl;
    cout << " 3 - Methodo 3"  << endl;
    cout << " 4 - Methodo 4"  << endl;
    cout << " 5 - Methodo 5"  << endl;
    cout << " 6 - Methodo 6"  << endl;
    cout << " 7 - Methodo 7"  << endl;
    cout << " 8 - Methodo 8"  << endl;
    cout << " 9 - Methodo 9"  << endl;
    cout << "10 - Methodo 10" << endl;
       
    // ler do teclado
    cout << endl << "Entrar com uma opcao: ";
    cin >> x;
       
    // escolher acao
    switch ( x )
    {
      case 1:
      method_01 ( );
      break;
      case 2:
      method_02 ( );
      break;
      case 3:
      method_03 ( );
      break;
      case 4:
      method_04 ( );
      break;
      case 5:
      method_05 ( );
      break;
      case 6:
      method_06 ( );
      break;
      case 7:
      method_07 ( );
      break;
      case 8:
      method_08 ( );
      break;
      case 9:
      method_09 ( );
      break;
      case 10:
      method_10 ( );
      break;
      default:
      cout << endl << "ERRO: Valor invalido." << endl;
    } // fim escolher
  }
  while ( x != 0 );  
  return ( 0 );
} 
