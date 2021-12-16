//
// Created by PC on 28/11/2021.
//
#include "Passageiro.h"

Passageiro::Passageiro(string nome, int id, vector<Bilhete> bilhetes, vector<Bagagem> bagagens) {
    this->nome = nome;
    this->id = id;
    this->bilhetes = bilhetes;
    this->bagagens = bagagens;
}
string Passageiro::getNome () const {
    return nome;
}

int Passageiro::getId () const {
    return id;
}

vector<Bilhete> Passageiro::getBilhetes() const {
    return bilhetes;
}

vector<Bagagem> Passageiro::getBagagens() const {
    return bagagens;
}