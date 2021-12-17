
#include "Aeroporto.h"

Aeroporto::Aeroporto(string nome, string pais, string cidade):transportes(Transporte()){
    this->nome = nome;
    this->pais = pais;
    this->cidade = cidade;
}
string Aeroporto::getNome() const {
    return nome;
}
string Aeroporto::getPais() const {
    return pais;
}
string Aeroporto::getCidade() const {
    return cidade;
}
void Aeroporto::setNome(string nome) {
    this->nome = nome;
}
void Aeroporto::setPais(string pais) {
    this->pais = pais;
}
void Aeroporto::setCidade(string cidade) {
    this->cidade = cidade;
}

const BST<Transporte> &Aeroporto::getTransportes() const {
    return transportes;
}

void Aeroporto::setTransportes(const BST<Transporte> &transportes) {
    this->transportes = transportes;
}

bool Aeroporto::insertTransporte(Transporte transporte) {
    return transportes.insert(transporte);
}

bool Aeroporto::removeTransporte(Transporte transporte) {
    return transportes.remove(transporte);
}

bool Aeroporto::saveFile() {
    int distancia, day, year, month, hora, minuto;
    string tipo;
    ofstream save_all;

    save_all.open("aeroporto_all_save.txt", ios_base::app);
    save_all << nome << " " << cidade << " " << pais << endl;
    save_all.close();

    ofstream save_stream;
    save_stream.open("aeroporto_"+nome + "_" + cidade + "_" + pais + "_save.txt");
    if(save_stream.is_open()){
        save_stream << nome << " " << cidade << " " << pais << endl;

        BSTItrIn<Transporte> it(transportes);
        while(!it.isAtEnd()){
            distancia = it.retrieve().getDistancia();
            tipo = it.retrieve().getTipo();
            day = it.retrieve().getDate().getDay();
            month = it.retrieve().getDate().getMonth();
            year = it.retrieve().getDate().getYear();
            hora = it.retrieve().getTime().getHora();
            minuto = it.retrieve().getTime().getMinuto();

            save_stream << distancia << " " << tipo << " " << day << " " << month << " " << year << " " << hora << " " << minuto << endl;
            it.advance();
        }
        save_stream.close();
        return true;
    }
    else return false;
}

bool Aeroporto::loadFile() {
    int distancia, day, year, month, hora, minuto;
    string tipo, nome, cidade, pais;
    ifstream load_stream;
    load_stream.open("aeroporto_"+ this->nome + "_" + this->cidade + "_" + this->pais + "_save.txt");
    if(load_stream.is_open()){
        load_stream >> nome >> cidade >> pais;

        while(!load_stream.eof()){
            load_stream >> distancia >> tipo >> day >> month >> year >> hora >> minuto;

            Time time(hora, minuto);
            Date date(day, month, year);
            transportes.insert(Transporte(distancia, time, tipo, date));
        }

        load_stream.close();
        return true;
    }
    else return false;
}
