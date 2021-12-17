#ifndef PROJETO_AED_AEROPORTO_H
#define PROJETO_AED_AEROPORTO_H

#include <string>
#include <fstream>
#include <sys/stat.h>
#include "Transporte.h"
#include "bst.h"
#include "binaryTree.h"

using namespace std;

class Aeroporto {
public:
    Aeroporto(string nome, string pais, string cidade);
    string getNome() const;
    string getPais() const;
    string getCidade() const;
    void setNome(string nome);
    void setPais(string pais);
    void setCidade(string cidade);
    const BST<Transporte> &getTransportes() const;
    void setTransportes(const BST<Transporte> &transportes);
    bool insertTransporte(Transporte transporte);
    bool removeTransporte(Transporte transporte);
    bool saveFile();
    bool loadFile();

private:
    string nome;
    string pais;
    string cidade;
    BST<Transporte> transportes;
};


#endif //PROJETO_AED_AEROPORTO_H
