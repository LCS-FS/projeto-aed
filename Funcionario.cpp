//
// Created by ASUS on 28/11/2021.
//

#include <sstream>
#include "Funcionario.h"

/// construtor completo da classe Funcionario
/// \param nome
/// \param morada
/// \param contacto
/// \param email
/// \param data de nascimento
Funcionario::Funcionario(string nome, string morada, string contacto) {
    this->nome = nome;
    this->morada = morada;
    this->contacto = contacto;
}

///
/// \return nome do funcionário
string Funcionario::getNome() const {
    return nome;
}

///
/// \return morada do funcionário
string Funcionario::getMorada() const {
    return morada;
}

///
/// \return contacto do funcionario
string Funcionario::getContacto() const {
    return contacto;
}


///
/// \return os atributos de um funcionario como Nome: n -- Contacto: c
string Funcionario::write() const {
    stringstream oss;
    oss << "Nome: " << nome << " -- Contacto: " << contacto;
    return oss.str();
}

Funcionario::Funcionario(){}
