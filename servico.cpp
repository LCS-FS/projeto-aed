#include <sstream>
#include "servico.h"
#include <fstream>

/// Construtor
/// \param servico para o tipo de serviço efetuado
/// \param funcionario que é o funcionário encarregue do servico
/// \param data agendada para a aplicação do serviço
servico::servico(int id, string servico, string funcionario, Date data){
    this->id = id;
    this->funcionario = funcionario;
    this->tipo = servico;
    this->data = data;
}

/// Getter
/// \return tipo de servico
string servico::getTipo() const{
    return tipo;
}

/// Getter
/// \return funcionario encarregue do serviço
string servico::getFuncionario() const {
    return funcionario;
}

/// Getter
/// \return data agendada para a aplicação do serviço
Date servico::getData() const {
    return data;
}

/// Getter
/// \return \param id que é o numero que identifica o serviço
int servico::getID() const {
    return id;
}

/// Setter
/// \param funcionario que é o novo funcionário encarregue de executar o serviço
void servico::setFuncionario(string funcionario) {
    this->funcionario = funcionario;
}

/// Setter
/// \param novoTipo que é o novo tipo de serviço, igual ou diferente ao anterior
void servico::setTipo(string novoTipo) {
    tipo = novoTipo;
}

///// Writer
///// \return de uma string com os atributos do funcionário -- serviço: Data
//string servico::write() const {
//    stringstream oss;
//    oss << funcionario << tipo << data.write();
//    return oss.str();
//}

/*bool servico::saveFile() {
    ofstream save_all;

    save_all.open("servicos_all_save.txt", ios_base::app);
    save_all << id << endl;

    save_all << id << " " << funcionario << " " << tipo << " " <<  data.getYear() << " " << data.getMonth() << " " << data.getDay() << endl;
    save_all.close();
    return true;

}

bool servico::loadFile() {

}*/