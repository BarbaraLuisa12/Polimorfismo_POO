#ifndef VAN
#define VAN

#include <string>
#include <iostream>
#include "Veiculo.hpp"

using namespace std;

class Van : public Veiculo {
    private:
        int passageiros;
    public:
        Van(const string& marca, const string& modelo, int
        capacidade, int passageiros)
        : Veiculo(marca, modelo, capacidade), passageiros(passageiros)
{}

        void exibirDados() const override {
        std::cout << "Van - ";
        Veiculo::exibirDados();
        std::cout << "Passageiros: " << passageiros << "\n";
 }
};

#endif

