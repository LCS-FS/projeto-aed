#include <iostream>
#include "Transporte.h"
#include "Aeroporto.h"
#include <list>
using namespace std;

list<Aeroporto> aeroportos;

bool loadAirports();
bool saveAirports();

int main() {
    return 0;
}

bool loadAirports(){
    string nome, cidade, pais;
    ifstream loadStream;
    loadStream.open("aeroporto_all_save.txt");
    if(loadStream.is_open()){
       while(loadStream >> nome >> cidade >> pais){
           Aeroporto  aero(nome, pais, cidade);
           aero.loadFile();
           aeroportos.push_back(aero);
       }
       return true;
    }
    return false;
}

bool saveAirports(){
    ofstream saveStream;
    saveStream.open("aeroporto_all_save.txt", ofstream ::trunc);
    if(saveStream.is_open()){
        for(Aeroporto aeroporto: aeroportos){
            aeroporto.saveFile();
        }
        return true;
    }
    return false;
}