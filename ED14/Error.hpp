/**
 Sugestão para a classe para tratamento de erros.
*/
// dependencias
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
/**
 * Classe para tratar erro.
 */
#ifndef _ERRO_H_
#define _ERRO_H_
class Erro
{
    /*
    * tratamento de erro.
    Codigos de erro:
    0. Nao ha' erro.
    */
    /**
     * atributos privados.
     */
private:
    int erro;
    /**
     * definicoes publicas.
     */
public:
    /**
     * Destrutor.
     */
    ~Erro();
    /**
     * Construtor padrao.
     */
    Erro(){};
    /**
     * Constante da classe.
     */
    static const std::string NO_ERROR;
    // ------------------------------------------- metodos para acesso
    /**
     * Funcao para obter o codigo de erro.
     * @return codigo de erro guardado
     */
    int getErro()
    {
        return (0); // valor provisorio, precisara' ser definido futuramente
    }               // fim getErro( )
    /**
     * Funcao para testar se ha' erro.
     * @return true, se houver;
     * false, caso contrario
     */
    bool hasError();
    /**
     * Funcao para obter mensagem
     * relativa ao código de erro.
     * @return mensagem sobre o erro
     */
    virtual std::string getErroMsg()
    {
        return ("");
    } // end getErroMsg ( )
    /**
     * definicoes com acesso restrito.
     */
protected:
    // ------------------------------------------- metodos para acesso restrito
    /**
     * Metodo para estabelecer novo codigo de erro.
     * @param codigo a ser guardado
     */
    void setErro(int codigo);
}; // fim class Erro

class Task
{
private:
    /* data */
public:
    void ConverteInt(char conteudo[])
    {
        int x = 0;
        int convertido = 0;

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";
            if ((conteudo[x] >= '0' && conteudo[x] <= '9') || (conteudo[x] >= 'a' && conteudo[x] <= 'z') || (conteudo[x] >= 'A' && conteudo[x] <= 'Z'))
            {
                convertido = int(conteudo[x]);
                std::cout << convertido;
            }
            else
            {
                std::cout << "Valor nao pode ser convertido";
            }

            std::cout << std::endl;
        }
    }

    double ConverteDouble(char conteudo[])
    {
        int x = 0;
        double convertido = 0.0;

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";

            if ((conteudo[x] >= '0' && conteudo[x] <= '9') || (conteudo[x] >= 'a' && conteudo[x] <= 'z') || (conteudo[x] >= 'A' && conteudo[x] <= 'Z'))
            {
                std::cout << std::fixed << std::setprecision(2);
                convertido = 1.0 * (int(conteudo[x]));
                std::cout << convertido;
            }
            else
            {
                std::cout << "Valor nao pode ser convertido";
            }

            std::cout << std::endl;
        }

        return (convertido);
    }

    bool ConverteBool(char conteudo[])
    {
        int x = 0;
        bool convertido;

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";

            if (conteudo[x] == '0' || conteudo[x] == 'F' || conteudo[x] == 'f')
            {
                convertido = false;
                std::cout << convertido << " (false)";
            }

            else if (conteudo[x] == '1' || conteudo[x] == 'T' || conteudo[x] == 't')
            {
                convertido = true;
                std::cout << convertido << " (true)";
            }

            else
            {
                std::cout << "Valor nao pode ser convertido" << std::endl;
            }

            std::cout << std::endl;
        }

        return (convertido);
    }

    bool Procurar(char conteudo[], char procurado[])
    {
        int x = 0;
        bool convertido;

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";

            if (conteudo[x] == *procurado)
            {
                convertido = true;
                std::cout << procurado << " (true)";
            }

            std::cout << std::endl;
        }

        return (convertido);
    }

    char Maiusculo(char conteudo[])
    {
        int x = 0;
        char convertido[strlen(conteudo)];

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";

            if ((conteudo[x] >= 'a' && conteudo[x] <= 'z') || (conteudo[x] >= 'A' && conteudo[x] <= 'Z'))
            {
                convertido[x] = toupper(conteudo[x]);
                std::cout << convertido[x];
            }

            else
            {
                std::cout << "O valor nao pode ser convertido.";
            }

            std::cout << std::endl;
        }

        return (convertido[strlen(conteudo)]);
    }

    char Minusculo(char conteudo[])
    {
        int x = 0;
        char convertido[strlen(conteudo)];

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";

            if ((conteudo[x] >= 'a' && conteudo[x] <= 'z') || (conteudo[x] >= 'A' && conteudo[x] <= 'Z'))
            {
                convertido[x] = tolower(conteudo[x]);
                std::cout << convertido[x];
            }

            else
            {
                std::cout << "O valor nao pode ser convertido.";
            }

            std::cout << std::endl;
        }

        return (convertido[strlen(conteudo)]);
    }

    void Trocar(char conteudo[], char procurado[], char inserir)
    {
        int x = 0;

        for (x = 0; x < strlen(conteudo); x = x + 1)
        {
            std::cout << conteudo[x] << " = ";

            if (conteudo[x] == *procurado)
            {
                conteudo[x] = inserir;

                std::cout << conteudo[x];
            }

            else
            {
                std::cout << conteudo[x];
            }

            std::cout << std::endl;
        }
    }

    void Sequencias(char conteudo[])
    {
        int x = 0;
        int soma = 0;
        int quantidade = strlen(conteudo);

        while (x < quantidade && conteudo[x] != ' ')
        {
            soma = soma + 1;
            x = x + 1;
        }

        char sequencia1[soma];
        std::cout << "\nSequencia: ";

        for (x = 0; x < soma; x++)
        {
            sequencia1[x] = conteudo[x];
            std::cout << "\n", sequencia1[x];
        }

        if (soma < quantidade)
        {
            x = soma;
            int soma2 = soma;

            while (x < quantidade && conteudo[x] != ' ')
            {
                soma2 = soma2 + 1;
                x = x + 1;
            }

            char sequencia2[soma2];
            std::cout << "\nNova sequencia: ";

            for (x = soma; x < soma2; x = x + 1)
            {
                sequencia2[x] = conteudo[x];
                std::cout << "\n", sequencia2[x];
            }
        }
    }

    void Cesar() 
    {
        char palavra[30];
        std::cout << "\nEntre com o conteudo: ";
        std::cin >> palavra;
        char aux[30];
        int chave = 1, i;

        while (chave < 26)
        {
            i = 0;
            while (palavra[i] != '\0')
            {
                aux[i] = palavra[i] + chave;
                if ((palavra[i] + chave) > 122)
                {
                    aux[i] -= 26;
                }
                if ((palavra[i] + chave) < 97)
                {
                    aux[i] += 26;
                }
                i++;
            }
            aux[i] = '\0';
            std::cout << "chave: " << chave << " : " << aux;

            if (chave % 5 == 0)
            {
                std::cout << "\n\n";
            }
            chave = chave + 1;
        }
       std::cout << "\n";
    }
};

const std::string Erro::NO_ERROR = "[ERRO] Nao ha' erro."; // definir o valor da constante
#endif