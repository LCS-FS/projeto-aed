//
// Created by PC on 14/12/2021.
//

#ifndef PROJETO_AED_BAGAGEM_H
#define PROJETO_AED_BAGAGEM_H


class Bagagem {
public:
    Bagagem();
    Bagagem(float comprimento, float largura, float altura, float peso);
private:
    float comprimento; //em centimetros
    float largura; //em centimetros
    float altura; //em centimetros
    float peso; //em kg

};


#endif //PROJETO_AED_BAGAGEM_H
