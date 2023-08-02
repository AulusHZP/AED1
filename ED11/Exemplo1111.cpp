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

void pause (std::string text)
{
  std::string dummy;
  std::cin.clear ();
  std::cout << std::endl << text;
  std::cin.ignore ();
  std::getline (std::cin, dummy);
  std::cout << std::endl << std::endl;
}

class random
{
  public:
    random ( int num, int inf, int sup );
};

class arranjo 
{
    public:
        void maiorPar         ( char filename [80] );
        void menorImpar       ( char filename [80] );
        void somar            ( char filename [80] );
        void media            ( char filename [80] );
        void positivo         ( char filename [80] );
        void ordemDecrescente ( char filename [80] );
        void presente         ( char filename [80], int pro, int inf, int sup );
        void escalar          ( char filename [ 80 ], int constante );
        void colocarEmOrdem   ( char filename [80] );
};

random::random (int num, int inf, int sup)
{
  // abrir arquivo
  std::ofstream afile; 
  afile.open ("DADOS.TXT");

  // definir variaveis
  int x = 0;
  int y = 0;

  afile << num << std::endl;
  afile << std::endl;

  // repetir
  for (x = 0; x < num; x = x + 1)
  {
    y = inf + (rand() % sup);

    if ((y > inf) && (y > sup))
    {
      afile << y << std::endl;
    }
    else
    {
      x = x - 1;
    }
  }

  afile.close ();
}

void method01 ( )
{
	//definir variaveis
	int num = 0;
	int inf = 0;
	int sup = 0;
	
	//usuario
	std::cout << "A quantidade:" << std::endl;
	std::cin  >> num; getchar (             );
	
	std::cout << "Limite Inferior:" << std::endl;
	std::cin  >> inf; getchar (                );
	
	std::cout << "Limite superior:" << std::endl;
	std::cin  >> sup; getchar (                );
	
    //acao
	random* e1 = new random ( num, inf, sup );

  std::cout << "Valores gravados no arquivo" << std::endl;
}

void arranjo::maiorPar (char filename [80])
{
  // abrir arquivo
  std::ifstream afile; 
  afile.open (filename);

  // definir variaveis
  int x = 0;
  int i = 0;
  int maior = 0;
  int arranjo [x];
  
  afile >> x;

  // acao
  if (x != 0)
  {
    for (i = 0; i < x; i++)
    {
      afile >> arranjo [i];
      if (i %2 == 0)
      {
        if (arranjo [i] > maior)
        {
          maior = arranjo [i];
        }
      }
    }
  }
  else
  {
   std::cout << "\nValor invalido";
  }
  std::cout << "\nO maior valor do arquivo e' igual a " << maior << std::endl;

  // fechar arquivo
  afile.close();
}

void method02 ( )
{
    //definir variavel
    char filename [80];

    //usuario
    std::cout << "Digite o nome do arquivo: " << std::endl;
    std::cin  >> filename; getchar (                );

    //chamar funcao
    arranjo* e2 = new arranjo ( );
    e2 -> maiorPar ( filename   );
}

void arranjo::menorImpar ( char filename[80] )
{
    //arquivo
    std::ifstream afile;
    afile.open ( filename );

    //definir variaveis
    int x   = 0;
    int i   = 0;
    int men = 0;
    int arr [x];
    afile >> x ;

    //acoes
    if (x != 0)
    {
        for ( i = 0; i < x; i = i + 1 )
        {
            afile >> arr [i];
        }
        men = arr [0];

        for ( i = 1; i < x; i = i + 1 )
        {
            if ( arr [i] % 2 == 0 )
            {
                if ( arr [i] < arr [i - 1] )
                {
                    men = arr [i];
                }
            }
        }
    }
    else
    {
        std::cout << "\nValor invalido" << std::endl;
    }
    afile.close ( );
    std::cout << "O menor valor do arquivo e igual a " << men << std::endl;
}

void method03 ( )
{
    //definir variavel
    char filename [80];

    //usuario
    std::cout << "Digite o nome do arquivo: " << std::endl;
    std::cin  >> filename; getchar (                     );

    //acoes
    arranjo *e3 = new arranjo ( );
    e3 -> menorImpar ( filename );

    std::cout << "Gravado no arquivo com sucesso" << std::endl;
}

void arranjo::somar ( char filename[80] )
{
  //definir variaveis
  std::ifstream afile;
  afile.open ( filename );
  int x = 0;
  int y = 0;
  int s = 0;
  int array [x];
  afile >> x;

  //acoes
  if ( x != 0 )
  {
    for ( y = 0; y < x; y = y + 1 )
    {
      afile >> array [y];
    }

    for ( y = 0; y < x; y = y + 1 )
    {
      s = s + array [y];
    }

  }
  else 
  {
    std::cout << "Valor invalido " << std::endl;
  }
  afile.close ( );
}

void method04 ( )
{
  //definir variaveis
  char filename [80];

  //usuario
  std::cout << "Digite o nome do arquivo: " << std::endl;
  std::cin  >> filename; getchar (                     );

  //acoes
  arranjo* e4 = new arranjo ( );
  e4 -> somar ( filename      );
  getchar (                   );
}

void arranjo::media ( char filename [80] )
{
  //definir variaveis
  std::ifstream afile;
  afile.open ( filename );
  int     x = 0;
  int     i = 0;
  int     s = 0;
  double  m = 0;
  int     array [x];
  afile >> x;

  //acoes
  if ( x != 0 )
  {
    for ( i = 0; i < x; i = i + 1 )
    {
      afile >> array [i];
    }
    for ( i = 0; i < x; i = i + 1 )
    {
      s = s + array [i];
    }
  }
  m = s/x;
  std::cout << "A media dos valores digitados e: " << m << std::endl;

  afile.close ( );
}

void method05 ( )
{
  //definir variaveis
  char filename [80];
  
  //usuario
  std::cout << "Digite o nome do arquivo:" << std::endl;
  std::cin  >> filename; getchar (                    );

  //acoes
  arranjo* e5 = new arranjo ( );
  e5 -> media ( filename      );
}

void arranjo::positivo ( char filename [80] )
{
  //definir dados
  std::ifstream afile;
  afile.open ( filename );
  int  i = 0;
  int  x = 0;
  bool n = false;
  int  array [x];
  afile >> x;

  //acoes
  if ( x != 0 )
  {
    for ( i = 0; i < x; i = i + 1 )
    {
      afile >> array [i];
    }
    if ( array[i] > 0 )
    {
      n = true;
    }
  }

  if ( n = true )
  {
    std::cout << "Os valores sao positivos" << std::endl;
  }
  else 
  {
    std::cout << "Sao negativos" << std::endl;
  }
  afile.close ( );
}

void method06 ( )
{
  //definir variaveis
  char filename [80];

  //usuario
  std::cout << "Digite o nome do arquivo:" << std::endl;
  std::cin  >> filename; getchar (                    );

  //acoes
  arranjo *e6 = new arranjo ( );
  e6 -> positivo ( filename   );
}

void arranjo::ordemDecrescente ( char filename [80] )
{
  //definir variaveis
  std::ifstream afile;
  afile.open ( filename );
  int i   = 0;
  int x   = 0;
  bool o  = false;
  int  array [x];
  afile >> x ;

  //acoes
  if ( x != 0 )
  {
    for ( i = 0; i < x; i = i + 1 )
    {
      afile >> array [i];
    }
    for ( i = 0; i < x; i = i + 1 )
    {
      if ( array [i] < array [ i + 1 ] )
      {
        o = true;
      }
    }
  }

  if ( o = true )
  {
    std::cout << "\nOs valores estao em ordem" << std::endl;
  }
  else
  {
    std::cout << "\nOs valores nao estao em ordem" << std::endl;
  }

  afile.close ( );
}

void method07 ( )
{
  //definir variaveis
  char filename [80];

  //usuario
  std::cout << "Digite o nome do arquivo:" << std::endl;
  std::cin  >> filename; getchar (                    ); 

  //acoes
  arranjo* e7 = new arranjo (     );
  e7->ordemDecrescente ( filename );
  getchar (                       );
}

void arranjo::presente ( char filename [80], int pro, int inf, int sup )
{
  //definir variaveis
  std::ifstream afile;
  afile.open ( filename );
  int   i = 0;
  int   x = 0;
  bool  p = false;
  int  array [x];
  afile >> x;

  //acoes
  if ( x  != 0 )
  {
    for ( i = 0; i < x; i = i + 1 )
    {
      afile >> array [i];
    }
    for ( i = i; i <= sup; i = i + 1 )
    {
      if ( array [ i ] == i )
      {
        pro = true;
      }
    }
  }
  if ( pro == true )
  {
    std::cout << "O valor procurando esta no intervalo" << std::endl;
  }
  afile.close ( );
}

void method08 ( )
{
  //definir variaveis
  char filename [80];
  int pro = 0;
  int inf = 0;
  int sup = 0;

  //usuario
  std::cout << "\nDigite o nome do arquivo" << std::endl;
  std::cin >> filename; getchar (                      );
  std::cout << "\nDigite o valor "          << std::endl;
  std::cin >> pro; getchar (                           );
  std::cout << "\nDigite o limite inf"      << std::endl;
  std::cin >> inf; getchar (                           );
  std::cout << "\nDigite o limite sup"      << std::endl;
  std::cin >> sup; getchar (                           );

  //acoes
  arranjo *e8 = new arranjo ( );
  e8 -> presente ( filename, pro, inf, sup );
}

void arranjo::escalar ( char filename [ 80 ], int constante )
{
  //definir variaveis
  std::ifstream afile;
  afile.open ( filename );
  int i = 0;
  int x = 0;
  int y = 0;
  int array [x];
  afile >> x;

  //acoes
  if ( x != 0 )
  {
    for ( i = 0; i < x; i = i + 1 )
    {
      afile >> y;
      array [ i ] = y * i;
    }

    for ( i = 0; i < x; i = i + 1 )
    {
      std::cout << array [ i ] << std::endl;
    }
  }
  afile.close ( );
}

void method09 (  )
{
  //definir variaveis
  char filename [80];
  int constante  = 0;

  //usuario
  std::cout << "\nDigite o nome do arquivo" << std::endl;
  std::cin >> filename; getchar (                      );
  std::cout << "\nDigite a constante"       << std::endl;
  std::cin >> constante; getchar (                     );

  //acoes
  arranjo *e9 = new arranjo (         );
  e9 -> escalar ( filename, constante );

}

void arranjo::colocarEmOrdem ( char filename [80] )
{
  //definir dados
  std::ifstream afile;
  afile.open ( filename );
  int x     = 0;
  int i     = 0;
  int o     = 0;
  int array [x];
  afile    >> x;

  //acoes
  if ( x != 0 )
  {
    for ( i = 0; i < x; i = i + 1 )
    {
      afile >> array [i];
    }
    for ( i = 0; i < x; i = i + 1 )
    {
      if ( array [ i ] < array [ i + 1 ] )
      {
        o = array [ i + 1 ];
        array [ i + 1 ] = array [ i ];
        array [ i ] = o;
      }
    }
    for ( i = 0; i < x; i = i + 1 )
    {
      std::cout << array [i] << std::endl;
    }
  }
  afile.close ( );
}

void method10 ( )
{
  //definir dados 
  char filename [80];

  //usuario
  std::cout << "\nQual o nome do arquivo:" << std::endl;
  std::cin  >> filename; getchar (                    );

  //acoes
  arranjo *e10 = new arranjo (     );
  e10 -> colocarEmOrdem ( filename );
}

// ----------------------------------------------- acao principal
int main ( int argc, char** argv )
{
  // definir dado
  int x = 0;
    
  do
  {
       
    // mostrar opcoes
    cout << "Opcoes " << endl;
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
      cout << endl << "ERRO: Valor invalido." << endl;
    } // fim escolher
  }
  while ( x != 0 );
    
  // encerrar
  pause ( "Apertar ENTER para terminar" );
    
  return ( 0 );
} // fim main( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/