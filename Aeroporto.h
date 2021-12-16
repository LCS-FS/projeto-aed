//
// Created by PC on 28/11/2021.
//

#ifndef PROJETO_AED_AEROPORTO_H
#define PROJETO_AED_AEROPORTO_H

#include <string>

using namespace std;

class Aeroporto {
public:
    Aeroporto(string nome, string pais, string cidade);
    string getNome() const;
    string getPais() const;
    string getCidade() const;
    void setNome(string nome);
    void setPais(string pais);
    void setCidade(string cidade);
private:
    string nome;
    string pais;
    string cidade;
};


#endif //PROJETO_AED_AEROPORTO_H
