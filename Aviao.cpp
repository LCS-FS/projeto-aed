#include <string>
#include "Aviao.h"
#include <sstream>
#include <fstream>

using namespace std;

/// Construtor
/// \param m matricula do aviao
/// \param c capacidade de passageiros do aviao
Aviao::Aviao(string m, int c): matricula(m), capacidade(c) {}

///
/// \param numVoo é o número de identificação do Voo
/// \param pass é o passageiro para ser adicionado ao Voo
/// \return true se o passageiro foi inserido no voo
bool Aviao::addPassageiro(int numVoo, Passageiro pass) {
    for (Voo v : planoVoo) {
        if (v.getNum() == numVoo) {
            if (v.getPassageiros().size() < capacidade) {
                v.addPassageiro(pass);
                return true;
            }
        }
    }
    return false;
}

/// Operator
/// Operador "<" por matricula, alfabeticamente
bool const Aviao::operator < (Aviao a2) const {
    return matricula < a2.getMatricula();
}

/// \param plano é uma lista de voos
/// é adicionado ao plano de voos todos os voos dentro da lista \param plano
void Aviao::adicionarPlanoVoo(list<Voo> plano) {
    for(auto v : plano)
        planoVoo.push_back(v);
}


/// \param v é um voo que vai ser adicionado à lista de voos planeados
void Aviao::adicionarVoo(Voo v) {
    planoVoo.push_back(v);
}

/// Comparator Key
/// \param s1 serviço 1
/// \param s2 serviço 2
/// \return comparação entre s1 e s2 de acordo com as suas datas
bool comparador(servico s1, servico s2){
    return s1.getData()<s2.getData();
}

/// \param servico é um serviço que vai ser adicionado à lista de serviços agendados
void Aviao::addServAgendado(servico s){
    servicosAgendados.push_back(s);
    servicosAgendados.sort(comparador);
}

/// Adder
/// Adiciona um \param servico à lista \param servicosCompletos
void Aviao::addServCompleto (servico s) {
    servicosFeitos.push_back(s);
    servicosFeitos.sort(comparador);
    servicosAgendados.sort(comparador);
}

/// termina o serviço na front() da lista de serviços agendados
void Aviao::terminarServico() {
    servicosFeitos.push_back(servicosAgendados.front());
    servicosAgendados.pop_front();
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
list<Voo> Aviao::getPlanoVoo() const{
    return planoVoo;
}

/// Getter
/// \return \param sericosAgendados que retorna a queue de serviços agendados
list<servico> Aviao::getServicosAgendados() const{
    return servicosAgendados;
}

/// Getter
/// \return \param servicosFeitos que retorna a lista de serviços já feitos
list<servico> Aviao::getServicosFeitos() const{
    return servicosFeitos;
}


/// Writer
/// \return uma string com os atributos base do avião: Matricula - Capacidade - Numero de Voos Agendados
string Aviao::write() const {
    stringstream oss;
    oss << "Matricula: " << matricula << " - Capacidade: " << capacidade << " - Numero de Voos Agendados: " << planoVoo.size() << endl;
    return oss.str();
}
