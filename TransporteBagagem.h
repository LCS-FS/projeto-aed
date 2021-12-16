//
// Created by PC on 14/12/2021.
//

#ifndef PROJETO_AED_CARRINHO_H
#define PROJETO_AED_CARRINHO_H

#include "Bagagem.h"
#include <vector>
#include <stack>
#include <queue>

using namespace std;


class TransporteBagagem {
public:
    TransporteBagagem();
    TransporteBagagem(int c, int n, int m);
    int getC() const;
    void setC(int c);
    int getN() const;
    void setN(int n);
    int getM() const;
    void setM(int m);
    void addBagagemTapete(Bagagem bagagem);
    bool addBagagensCarrinho(); //adiciona as bagagens ao carrinho, retorna true se for possivel, se nao retorna false
private:
    int c; //nº de carruagens
    int n; //nº de pilhas
    int m; //tamanho das pilhas
    vector<vector<stack<Bagagem>>> carrinho;
    queue<Bagagem> tapete;

};

#endif //PROJETO_AED_CARRINHO_H
