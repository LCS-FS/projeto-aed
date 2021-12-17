//
// Created by PC on 28/11/2021.
//

#include <string>
#include "Voo.h"

Voo::Voo(int numVoo, Date dataPartida, int duracaoVoo, list<Passageiro> passageiros, TransporteBagagem transporteBagagem){
    this->numVoo = numVoo;
    this->dataPartida = dataPartida;
    this->duracaoVoo = duracaoVoo;
    this->passageiros = passageiros;
    this->transporteBagagem = transporteBagagem;
}
int Voo::getNum() const{
    return numVoo;
}
Date Voo::getData() const {
    return dataPartida;
}
int Voo::getDuracao() const {
    return duracaoVoo;
}
list<Passageiro> Voo::getPassageiros() const {
    return passageiros;
}
void Voo::setNum(int num) {
    numVoo = num;
}
void Voo::setData(Date data) {
    dataPartida = data;
}
void Voo::setDuracao(int dur){
    duracaoVoo = dur;
}

bool Voo::addPassageiro(Passageiro& passageiro) {
    passageiros.push_back(passageiro);
    return true;
}

bool Voo::removePassageiro(Passageiro& passageiro) {
    list<Passageiro>::iterator it;
    for (it = passageiros.begin(); it != passageiros.end(); it++) {
        if (it->getId() == passageiro.getId()) {
            passageiros.erase(it);
            return true;
        }
    }
    return false;
}