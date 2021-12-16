//
// Created by PC on 14/12/2021.
//

#include "TransporteBagagem.h"

TransporteBagagem::TransporteBagagem() {}

TransporteBagagem::TransporteBagagem(int c, int n, int m) {
    this->c = c;
    this->n = n;
    this->m = m;
}

int TransporteBagagem::getC() const {
    return c;
}
void TransporteBagagem::setC(int c) {
    this->c = c;
}
int TransporteBagagem::getN() const {
    return n;
}
void TransporteBagagem::setN(int n) {
    this->n = n;
}
int TransporteBagagem::getM() const {
    return m;
}
void TransporteBagagem::setM(int m) {
    this->m = m;
}

void TransporteBagagem::addBagagemTapete(Bagagem bagagem) {
    tapete.push(bagagem);
}

bool TransporteBagagem::addBagagensCarrinho() {
    stack<Bagagem> aux;
    vector<stack<Bagagem>> auxv;
    if (tapete.size() > c*n*m) {
        return false;
    }
    while (!tapete.empty()) {
        while (auxv.size() < n) {
            while(aux.size() < m) {
                aux.push(tapete.front());
                tapete.pop();
            }
            auxv.push_back(aux);
            while(!aux.empty()) {
                aux.pop();
            }
        }
        carrinho.push_back(auxv);
        auxv.clear();
    }
    return true;
}