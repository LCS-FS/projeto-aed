#ifndef PROJETO_AED_TRANSPORTE_H
#define PROJETO_AED_TRANSPORTE_H
#include <string>
#include "time.h"
#include "Date.h"
#include "Time.h"


using namespace std;


class Transporte {
public:
    Transporte(); //default dist = 9999, tipo = autocarro, default time, default date
    Transporte(int distancia, Time time, string tipo, Date date); //construtor, converte todas as strings tipo para lowercase e remove espacos, throws uma excecao quando o tipo é diferente de "metro", "comboio" ou "autocarro"
    void setDistancia(int distancia);
    int getDistancia() const;
    void setTime(Time time);
    Time getTime() const;
    void setTipo(string tipo);
    string getTipo() const;
    bool const operator<(const Transporte t2) const;
    const Date &getDate() const;
    void setDate(const Date &date);

private:
    int distancia;
    Time time;
    string tipo;
    Date date;
};


#endif //PROJETO_AED_TRANSPORTE_H
