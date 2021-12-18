//
// Created by PC on 28/11/2021.
//

#ifndef PROJETO_AED_VOO_H
#define PROJETO_AED_VOO_H

#include <string>
#include <list>
#include "Passageiro.h"
#include "TransporteBagagem.h"
#include "Date.h"
#include "Aeroporto.h"

using namespace std;

class Voo {
public:
    Voo();
    Voo(int numVoo, Date dataPartida, int duracaoVoo, list<Passageiro> passageiros, TransporteBagagem transporteBagagem);
    int getNum() const;
    Date getData() const ;
    int getDuracao() const;
    list<Passageiro> getPassageiros() const;
    void setNum(int num);
    void setDuracao(int dur);
    void setData(Date data);
    void addPassageiro(Passageiro& passageiro); //adiciona passageiro ao voo, retorna true se possivel e false se voo já estiver cheio
    bool removePassageiro(Passageiro& passageiro); //remove passageiro do voo, retorna true se encontrou o passageiro senao false
    bool saveFile ();
    bool loadFile ();
    bool const operator < (Voo v2) const;

private:
    int numVoo;
    Date dataPartida;
    int duracaoVoo;
    list<Passageiro> passageiros;
    TransporteBagagem transporteBagagem;
};


#endif //PROJETO_AED_VOO_H
