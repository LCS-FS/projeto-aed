#ifndef PROJETO_AED_SERVICOS_H
#define PROJETO_AED_SERVICOS_H


#include <string>
#include "Funcionario.h"
#include "Date.h"

using namespace std;
enum tipoServico {MANUTENCAO, LIMPEZA};

class servico {

public:
    servico(tipoServico tipo, Funcionario funcionario, Date data);

    // Getters
    tipoServico getTipo() const;
    Date getData() const;
    Funcionario getFuncionario() const;

    // Setters
    void setTipo(tipoServico novoTipo);
    void setFuncionario(Funcionario funcionario);

    // Writer
    string write() const ;

private:
    tipoServico tipo; /// Tipo de serviço que pode ser realizado (Manutenção/Limpeza)
    Date data; /// Data em que o serviço é realizado
    Funcionario funcionario; /// Funcionário responsável pelo serviço
};


#endif //PROJETO_AED_SERVICOS_H
