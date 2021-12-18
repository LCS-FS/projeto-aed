#include <string>
#include "Aviao.h"
#include <sstream>
#include <fstream>

using namespace std;

/// Construtor
/// \param m matricula do aviao
/// \param c capacidade de passageiros do aviao
Aviao::Aviao(string m, int c): matricula(m), capacidade(c) {}


/// \param plano é uma lista de voos
/// é adicionado ao plano de voos todos os voos dentro da lista \param plano
void Aviao::adicionarPlanoVoo(list<Voo*> plano) {
    for(auto v : plano)
        planoVoo.push_back(v);
}


/// \param v é um voo que vai ser adicionado à lista de voos planeados
void Aviao::adicionarVoo(Voo v) {
    planoVoo.push_back(&v);
}

bool comparador(servico *s1, servico *s2){
    return s1->getData()<s2->getData();
}

/// \param servico é um serviço que vai ser adicionado à lista de serviços agendados
void Aviao::adicionarServico(servico s){
    list<servico*> auxList;
    auxList.push_back(&s);
    while(!servicosAgendados.empty()){
        auxList.push_back(servicosAgendados.front());
        servicosAgendados.pop();
    }
    auxList.sort(comparador);

    for(auto i: auxList){
        servicosAgendados.push(i);
    }
}

/// termina o serviço na front() da queue de serviços agendados
void Aviao::terminarServico() {
    servicosFeitos.push_back(servicosAgendados.front());
    servicosAgendados.pop();
}

/// Getter
/// \return \param matricula do avião
string Aviao::getMatricula() const{
    return matricula;
}

/// Getter
/// \return \param capacidade do avião
int Aviao::getCapacidade() const{
    return capacidade;
}

/// Getter
/// \return \param planoVoo que retorna os voos planeados
list<Voo*> Aviao::getPlanoVoo() const{
    return planoVoo;
}

/// Getter
/// \return \param sericosAgendados que retorna a queue de serviços agendados
queue<servico*> Aviao::getServicosAgendados() const{
    return servicosAgendados;
}

/// Getter
/// \return \param servicosFeitos que retorna a lista de serviços já feitos
list<servico*> Aviao::getServicosFeitos() const{
    return servicosFeitos;
}


/// Writer
/// \return uma string com os atributos base do avião: Matricula Capacidade
string Aviao::write() const {
    stringstream oss;
    oss << matricula << " " << capacidade;
    return oss.str();
}