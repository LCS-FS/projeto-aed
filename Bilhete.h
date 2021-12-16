//
// Created by PC on 13/12/2021.
//

#ifndef PROJETO_AED_BILHETE_H
#define PROJETO_AED_BILHETE_H


class Bilhete {
public:
    Bilhete();
    Bilhete(int num, bool check_bagagem, bool checkin);
    int getNum() const;
    void setNum(int num);
    bool checkBagagem() const;
    void setCheckBagagem(bool check);
    bool getCheckin() const;
    void setCheckin(bool checkin);
private:
    int num;
    bool check_bagagem; //true se tiver bagagem, falso se nao
    bool checkin; //true se for check-in automatico, caso contrario false
};


#endif //PROJETO_AED_BILHETE_H
