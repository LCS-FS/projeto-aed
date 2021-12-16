//
// Created by PC on 28/11/2021.
//

#ifndef PROJETO_AED_PASSAGEIRO_H
#define PROJETO_AED_PASSAGEIRO_H

#include <string>
#include <vector>
#include <list>
#include "Bilhete.h"
#include "Bagagem.h"

using namespace std;

class Passageiro {
public:
    Passageiro(string nome, int id, vector<Bilhete> bilhetes, vector<Bagagem> bagagens);
    string getNome () const;
    int getId () const;
    vector<Bilhete> getBilhetes() const;
    vector<Bagagem> getBagagens() const;
private:
    string nome;
    int id;
    vector<Bilhete> bilhetes;
    vector<Bagagem> bagagens;
};


#endif //PROJETO_AED_PASSAGEIRO_H
