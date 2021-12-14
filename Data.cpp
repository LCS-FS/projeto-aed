//
// Created by ASUS on 14/12/2021.
//

#include "Data.h"
#include <sstream>

Data::Data() { // este construtor é um easter egg, procurem na internet
    ano = 2014;
    mes = 3;
    dia = 8;
    tempo = Time();
}

Data::Data(int ano, int mes, int dia, Time tempo) {
    this->ano = ano;
    this->mes = mes;
    this->dia = dia;
    this->tempo = tempo;
}

Data::Data(int ano, int mes, int dia) {
    this->ano = ano;
    this->mes = mes;
    this->dia = dia;
    tempo = Time();
}

int Data::getAno() const{
    return ano;
}

int Data::getMes() const{
    return mes;
}

int Data::getDia() const{
    return dia;
}

Time Data::getTempo() const{
    return tempo;
}

string Data::write() const{
    stringstream oss;
    oss << ano << "-" << mes << "-" << dia << " " << tempo.write();
    return oss.str();
}