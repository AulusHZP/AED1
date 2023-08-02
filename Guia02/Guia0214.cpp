/*
Guia_0214 - v0.0. - 05 / 03 / 2023
Author: Áulus Batista (764688)
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Guia0214 ./Guia0214.cpp
No Windows: g++ -o Guia0214.exe Guia0214.cpp
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0214
No Windows: Guia0214
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
    // colocar paredes no mundo
    world->set(2, 3, VWALL);
    world->set(2, 4, VWALL);
    world->set(2, 5, VWALL);
    world->set(2, 6, VWALL);
    world->set(2, 7, VWALL);
    world->set(2, 8, VWALL);
    world->set(5, 3, VWALL);
    world->set(5, 4, VWALL);
    world->set(5, 5, VWALL);
    world->set(5, 6, VWALL);
    world->set(5, 7, VWALL);
    world->set(5, 8, VWALL);
    world->set(3, 3, VWALL);
    world->set(3, 4, VWALL);
    world->set(3, 5, VWALL);
    world->set(3, 6, VWALL);
    world->set(3, 7, VWALL);
    world->set(4, 3, VWALL);
    world->set(4, 4, VWALL);
    world->set(4, 5, VWALL);
    world->set(4, 6, VWALL);
    world->set(4, 7, VWALL);
    world->set(3, 2, HWALL);
    world->set(4, 2, HWALL);
    world->set(5, 2, HWALL);
    world->set(3, 8, HWALL);
    world->set(5, 8, HWALL);

    // colocar um marcador no mundo
    world->set(3, 3, BEEPER);
    world->set(4, 3, BEEPER);
    world->set(5, 3, BEEPER);
    world->set(5, 2, BEEPER);
    world->set(5, 1, BEEPER);

    // salvar a configuracao atual do mundo
    world->save(fileName);
} // decorateWorld ( )
/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
Nota: Todas as definicoes irao valer para qualquer outro robo
criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
    /**
    turnRight - Procedimento para virar 'a direita.
    */
    void turnRight()
    {
        // definir dado local
        int step = 0;
        // testar se o robo esta' ativo
        if (checkStatus())
        {
            // o agente que executar esse metodo
            // devera' virar tres vezes 'a esquerda
            for (step = 1; step <= 3; step = step + 1)
            {
                turnLeft();
            } // end for
        }     // end if
    }         // end turnRight ( )
    /*
    putBeepers - Metodo para colocar todos os marcadores
    */
    void putBeepers()
    {
        if (areYouHere(7, 1))
        {
            putBeeper();
            putBeeper();
            putBeeper();
            putBeeper();
            putBeeper();
            putBeeper();
        }
    }
    /**
    moveN - Metodo para mover certa quantidade de passos.
    @param steps - passos a serem dados.
    */
    void moveN(int steps)
    {
        // definir dado local
        int step = 0;
        // testar se a quantidade de passos e' maior que zero
        for (step = steps; step > 0; step = step - 1)
        {
            // dar um passo
            move();
        } // end if
    }     // end moveN( )
    /**
    doPartialTask - Metodo para especificar parte de uma tarefa.
    */
    void doPartialTask()
    {
        // especificar acoes dessa parte da tarefa
        turnLeft();
        moveN(8);
        turnRight();
        moveN(3);
        turnRight();
        moveN(6);
        pickBeeper();
        pickBeeper();
        turnRight();
        turnRight();
        moveN(5);
        turnLeft();
        moveN(1);
        turnLeft();
        moveN(5);
        pickBeeper();
        pickBeeper();
        pickBeeper();
        turnRight();
        turnRight();
        moveN(5);
        turnRight();
        moveN(2);
        turnRight();
        moveN(5);
        pickBeeper();
        turnRight();
        turnRight();
        moveN(5);
        turnLeft();
        moveN(1);
        turnRight();
        moveN(1);
        turnRight();
        moveN(2);
        turnRight();
        moveN(8);
        turnLeft();
        moveN(1);
        putBeepers();
        turnLeft();
        turnLeft();
        moveN(6);
        turnRight();
        turnRight();
        turnOff();
    } // end doPartialTask( )

    /**
    doTask - Relacao de acoes para o robo executar.
    */
    void doTask()
    {
        // definir dado local
        int step = 4;
        // especificar acoes da tarefa
        while (step > 0)
        {
            // realizar uma parte da tarefa
            doPartialTask();
            // tentar passar 'a proxima
            step = step - 1;
        } // end while
        // encerrar
        turnOff();
    } // end doTask( )
};    // end class MyRobot

// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/
int main()
{
    // definir o contexto
    // criar o ambiente e decorar com objetos
    // OBS.: executar pelo menos uma vez,
    // antes de qualquer outra coisa
    // (depois de criado, podera' ser comentado)
    world->create(""); // criar o mundo
    decorateWorld("Guia0214.txt");
    world->show();
    // preparar o ambiente para uso
    world->reset();              // limpar configuracoes
    world->read("Guia0214.txt"); // ler configuracao atual para o ambiente
    world->show();               // mostrar a configuracao atual
    set_Speed(1);                // definir velocidade padrao
    // criar robo
    MyRobot *robot = new MyRobot();
    // posicionar robo no ambiente (situacao inicial):
    // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido
    // )
    robot->create(1, 1, EAST, 0, "Karel");
    // executar tarefa
    robot->doTask();
    // encerrar operacoes no ambiente
    world->close();
    // encerrar programa
    getchar();
    return (0);
} // end main ( )
  // -------------------------------------------- testes
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  ---------------------------------------------- historico
  Versao Data Modificacao
  0.1 21/08 esboco
  */