#include <sstream>
#include "servico.h"

/// Construtor
/// \param servico para o tipo de serviço efetuado
/// \param funcionario que é o funcionário encarregue do servico
/// \param data agendada para a aplicação do serviço
servico::servico(tipoServico servico, Funcionario funcionario, Date data){
    this->funcionario = funcionario;
    this->tipo = servico;
    this->data = data;
}

/// Getter
/// \return tipo de servico
tipoServico servico::getTipo() const{
    return tipo;
}

/// Getter
/// \return funcionario encarregue do serviço
Funcionario servico::getFuncionario() const {
    return funcionario;
}

/// Getter
/// \return data agendada para a aplicação do serviço
Date servico::getData() const {
    return data;
}

/// Setter
/// \param funcionario que é o novo funcionário encarregue de executar o serviço
void servico::setFuncionario(Funcionario funcionario) {
    this->funcionario = funcionario;
}

/// Setter
/// \param novoTipo que é o novo tipo de serviço, igual ou diferente ao anterior
void servico::setTipo(tipoServico novoTipo) {
    tipo = novoTipo;
}

/// Writer
/// \return de uma string com os atributos do funcionário -- serviço: Data
string servico::write() const {
    stringstream oss;
    oss << funcionario.getNome() << tipo << data.write();
    return oss.str();
}