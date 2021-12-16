//
// Created by PC on 13/12/2021.
//

#include "Bilhete.h"

Bilhete::Bilhete() {}

Bilhete::Bilhete(int num, bool check_bagagem, bool checkin) {
    this->num = num;
    this->check_bagagem = check_bagagem;
    this->checkin = checkin;
}

int Bilhete::getNum() const {
    return num;
}

void Bilhete::setNum(int num) {
    this->num = num;
}

bool Bilhete::checkBagagem() const {
    return check_bagagem;
}

void Bilhete::setCheckBagagem(bool check) {
    this->check_bagagem = check;
}

bool Bilhete::getCheckin() const {
    return checkin;
}

void Bilhete::setCheckin(bool checkin) {
    this->checkin = checkin;
}
