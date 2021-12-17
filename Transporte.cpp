#include "Transporte.h"
#include <algorithm>

Transporte::Transporte(int distancia, Time time, string tipo, Date date){
    transform(tipo.begin(), tipo.end(), tipo.begin(), ::tolower);
    remove(tipo.begin(), tipo.end(), ' ');

    if(tipo != "metro" && tipo != "autocarro" && tipo != "comboio") throw "Transporte não é do tipo: carro, autocarro ou metro.";

    this->distancia = distancia;
    this->time = time;
    this->tipo = tipo;
    this->date = date;
}

void Transporte::setDistancia(int distancia) {
    this->distancia = distancia;
}
int Transporte::getDistancia() const{
    return distancia;
}
void Transporte::setTime(Time time) {
    this->time = time;
}
Time Transporte::getTime() const{
    return time;
}
void Transporte::setTipo(string tipo) {
    this->tipo = tipo;
}
string Transporte::getTipo() const{
    return tipo;
}

bool const Transporte::operator<(Transporte t2) const{
    if(date == t2.getDate()) return time < t2.getTime();
    return date < t2.getDate();
}

const Date &Transporte::getDate() const {
    return date;
}

void Transporte::setDate(const Date &date) {
    Transporte::date = date;
}

Transporte::Transporte(){
    distancia = 9999;
    tipo = "autocarro";
}
