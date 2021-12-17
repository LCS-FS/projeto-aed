//
// Created by ASUS on 28/11/2021.
//

#ifndef PROJETO_AED_FUNCIONARIO_H
#define PROJETO_AED_FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {

public:
    Funcionario();

    Funcionario(const string &nome, const string &morada, const string &contacto);

    Funcionario(string nome, string morada, string contacto);
    string getNome() const;
    string getMorada() const;
    string getContacto() const;
    string write() const;

private:
    string nome;
    string morada;
    string contacto;
};


#endif //PROJETO_AED_FUNCIONARIO_H
