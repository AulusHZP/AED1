
#ifndef _CONTATO_H_
#define _CONTATO_H_
#include <cstring>
using std::strlen;
#include <iostream>
#include <iomanip>
#include <string>
using std::string; 
#include <fstream>
using std::ifstream; 
using std::ofstream; 
#include "Erro.hpp"

void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
}

class Contato : public Erro
{
private:
    string nome;
    string fone;
    string fone2;
    void conferirFone(char N[])
    {
        bool conferir = true;
        int x = 0;

        while (x < strlen(N) && conferir == true)
        {
            if ((N[x] >= '0' && N[x] <= '9') || N[x] == '-')
            {
                conferir = true;
            }
            else
            {
                conferir = false;
            }

            x = x + 1;
        }

        if (conferir == true)
        {
            std::cout << "O numero esta certo" << std::endl;
        }
        else
        {
            std::cout << "O numero esta errado";
        }
    }

public:

    ~Contato ( )
    {  }
    Contato  ( )
    {
        setErro(0); 
        nome = "";
        fone = "";
        fone2 = "";
    } 

    void setNome(std::string nome)
    {
        if (nome.empty())
            setErro(1); 
        else
            this->nome = nome;
    } 

    void setFone2(std::string fone2)
    {
        if (fone2.empty())
            {setErro(2);} 
        else
            {this->fone2 = fone2;}
    }

    void setFone(std::string fone)
    {
        if (fone.empty())
            setErro(2); 
        else
            this->fone = fone;
    } 

    std::string getNome()
    {
        return (this->nome);
    } 

    std::string getFone()
    {
        return (this->fone);
    } 

    std::string toString()
    {
        return ("{ " + getNome() + ", " + getFone() + " }");
    } 

    Contato(std::string nome_inicial, std::string fone_inicial)
    {
        setErro(0);                                
        setNome(nome_inicial); 
        setFone(fone_inicial); 
    }                          

    bool hasErro()
    {
        return (getErro() != 0);
    } 

    Contato(Contato const &another)
    {
        setErro(0);            
        setNome(another.nome);
        setFone(another.fone); 
    }                          

    void Nome ( )
    {
        //definir variaveis
        char N[80];

        //usuario
        std::cout << "Entre com o nome: " << std::endl; std::cin >> N; getchar ( );

        //acoes
        if (strlen(N) != 0)
        {
            nome = N;
        }
    }

    void Telefone ( )
    {
        //definir variavel
        char N[9];

        //usuario
        std::cout << "Entre com o telefone: " << std::endl; std::cin >> N; getchar ( );

        //acao
        fone = N;
    }

    void print ( )
    {
        std::cout << "Nome do contato:     " << nome << std::endl;
        std::cout << "Telefone do Contato: " << fone << std::endl;
    }

    void ChecarTelefone ( )
    {
        //definir variavel
        char N[9];

        //usuario
        std::cout << "Entre com o telefone: " << std::endl; std::cin >> N; getchar ( );

        //acoes
        fone = N;
        conferirFone(N);
        getchar();
    } 

    void LerArquivo ( char filename[] )
    {
        //definir variaveis
        ifstream afile;
        afile.open(filename);

        //acoes
        afile >> nome;
        afile >> fone;

        //funcao
        print ( );

        //fechar arquivo
        afile.close ( );
    }

    void GravarArquivo ( char filename[] )
    {
        //definir variaveis
        ofstream afile;
        afile.open(filename);
        afile << "2";

        //usuario
        std::cout << "Entre com o nome do seu contato: "   << std::endl; std::cin >> nome; getchar ( );
        std::cout << "Entre com o numero do seu contato: " << std::endl; std::cin >> fone; getchar ( );
        afile << "Nome do contato:"     << nome << std::endl;
        afile << "Telefone do Contato:" << fone << std::endl;
        afile << std::endl;
        std::cout << "Contato Gravado com Sucesso" << std::endl;

        //fechar arquivo
        afile.close ( );
    }

    Contato ( std::string nome_inicial, std::string fone_inicial, std::string fone_inicial2 )
    {
        //chamar funcoes
        setErro  (0);              
        setNome  (nome_inicial );
        setFone  (fone_inicial );
        setFone2 (fone_inicial2); 
    } 

    void print2 ( )
    {   
        //mostrar
        std::cout << "Nome do contato:"             << nome  << std::endl;
        std::cout << "Telefone do Contato:"         << fone  << std::endl;
        std::cout << "Segundo Telefone do Contato:" << fone2 << std::endl;
    }

    void QuantTelefones ( )
    {
        //definir variavel
        int quantidade = 0;

        //acoes
        if (fone.length() != 0)
        {
            quantidade = quantidade + 1;
        }

        if (fone2.length() != 0)
        {
            quantidade = quantidade + 1;
        }

        //mostrar resultado
        std::cout << "O contato tem " << quantidade << " telefones" << std::endl;
    }

    void AddTelefones ( )
    {
        //acoes
        if (fone2.length() == 0)
        {
            char resposta[80];
            char telefone[80];

            std::cout << "Quer adicionar mais um telefone? :" << std::endl; std::cin >> resposta; getchar ( );

            if (strcmp(resposta, "Sim") == 0 || strcmp(resposta, "SIM") == 0 || strcmp(resposta, "sim") == 0 || strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0)
            {
                std::cout << std::endl;
                std::cout << "Entre com o segundo telefone:" << std::endl;
                std::cin >> telefone; getchar ( );
                setFone2 (telefone);
                print2   (        );
            }
            else
            {
                print (  );
            }
        }
        else
        {
            std::cout << "O contato ja possui 2 telefones" << std::endl;
        }
    }

    void MudarTelefone2 ( )
    {
        //chamar funcao
        print2 (     );

        //definir variavel
        char newFone[80];

        //acoes
        if (fone2.length() != 0)
        {
            std::cout << std::endl;
            std::cout << "Entre com o novo telefone: " << std::endl;
            std::cin >> newFone; getchar ( );
            fone2 = newFone;
            print2 (  );
        }
        else
        {
            std::cout << "O contato nao possui 2 telefones" << std::endl;
        }
    }

    void DeletarTelefone2()
    {
        //chamar funcao
        print2();

        //acoes
        if (fone2.length() != 0)
        {
            std::cout << std::endl;
            std::cout << "Seu segundo telefone vai ser deletado" << std::endl;
            std::cout << std::endl;
            fone2 = "";
            print2 ( );
        }
        else
        {
            std::cout << "O contato nao possui 2 telefones" << std::endl;
        }
    }

};                             
using ref_Contato = Contato *; 
#endif