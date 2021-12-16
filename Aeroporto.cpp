//
// Created by PC on 28/11/2021.
//

#include "Aeroporto.h"

Aeroporto::Aeroporto(string nome, string pais, string cidade) {
    this->nome = nome;
    this->pais = pais;
    this->cidade = cidade;
}
string Aeroporto::getNome() const {
    return nome;
}
string Aeroporto::getPais() const {
    return pais;
}
string Aeroporto::getCidade() const {
    return cidade;
}
void Aeroporto::setNome(string nome) {
    this->nome = nome;
}
void Aeroporto::setPais(string pais) {
    this->pais = pais;
}
void Aeroporto::setCidade(string cidade) {
    this->cidade = cidade;
}