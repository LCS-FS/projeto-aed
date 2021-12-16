cmake_minimum_required(VERSION 3.19)
project(projeto_aed)

set(CMAKE_CXX_STANDARD 14)

add_executable(projeto_aed main.cpp Voo.cpp Voo.h Aeroporto.cpp Aeroporto.h Passageiro.cpp Passageiro.h Bilhete.cpp Bilhete.h Bagagem.cpp Bagagem.h TransporteBagagem.cpp TransporteBagagem.h)