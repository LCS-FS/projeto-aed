#ifndef PROJETO_AED_TIME_H
#define PROJETO_AED_TIME_H


class Time {
private:
    int hora, minuto; //formato hh mm
public:
    Time(); //default 0:0
    Time(int hora, int minuto);
    void setHora(int hora);
    void setMinuto(int minuto);
    int getHora() const;
    int getMinuto() const;
    bool const operator<(const Time t2) const;
};


#endif //PROJETO_AED_TIME_H
