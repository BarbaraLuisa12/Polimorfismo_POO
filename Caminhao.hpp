#ifndef CAMINHAO
#define CAMINHAO

#include <string>
#include <iostream>
#include "Veiculo.hpp"

using namespace std;

class Caminhao : public Veiculo {
    private:
        int eixos;
    public:
        Caminhao(const string& marca, const string& modelo, int
        capacidade, int eixos)
        : Veiculo(marca, modelo, capacidade), eixos(eixos) {}
        void exibirDados() const override {
        std::cout << "Caminhao - ";
        Veiculo::exibirDados();
        std::cout << "Eixos: " << eixos << "\n";
 }
};
#endif 