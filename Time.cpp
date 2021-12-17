#include "Time.h"

Time::Time(){
    hora = 00;
    minuto = 00;
}

Time::Time(int hora, int minuto) {
    if (hora > 23) throw "hora > 23";
    if (hora < 0) throw "hora < 0";
    if(minuto > 59) throw "minuto > 59";
    if(minuto < 0) throw "minuto < 0";
    this -> hora = hora;
    this-> minuto = minuto;
}

void Time::setHora(int hora) {
    this -> hora = hora;
}
void Time::setMinuto(int minuto) {
    this -> minuto = minuto;
}
int Time::getHora() const{
    return hora;
}
int Time::getMinuto() const{
    return minuto;
}

bool const Time::operator<(const Time t2) const {
    if(hora == t2.getHora()){
        return minuto < t2.getMinuto();
    }
    return hora < t2.getHora();
}