#ifndef MAIN_CPP_AVIAO_H
#define MAIN_CPP_AVIAO_H

#include <string>
#include "Voo.h"
#include "servico.h"
#include <queue>

using namespace std;

class Aviao {
public:

    Aviao(string matricula, int capacidade);
    void adicionarPlanoVoo(list<Voo*> plano);
    void adicionarVoo(Voo *v);
    void adicionarServico(servico *servico);
    void terminarServico();

    // Getters
    string getMatricula() const;
    int getCapacidade() const;
    list<Voo*> getPlanoVoo() const;
    queue<servico*> getServicosAgendados() const;
    list<servico*> getServicosFeitos() const;

    // Setters
    void setPlanoVoo(list<Voo*> novoPlano);
    void setServicosAgendados(queue<servico*> novosServicos);

    // Writer
    string write()const;
    void saveFile();
    void loadFile();

private:
    string const matricula;
    int const capacidade;
    list<Voo*> planoVoo;
    queue<servico*> servicosAgendados;
    list<servico*> servicosFeitos;
};


#endif //MAIN_CPP_AVIAO_H
