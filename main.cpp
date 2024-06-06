#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"

int main(){

    vector<unique_ptr<Veiculo>> veiculos; 

    veiculos.push_back(make_unique<Caminhao>("Volvo", "FH", 20, 3));
    veiculos.push_back(make_unique<Caminhao>("Mercedes", "Actros 2548", 28, 4));
    veiculos.push_back(make_unique<Van>("Mercedes", "Actros 2548", 5, 2));
    veiculos.push_back(make_unique<Van>("Ford", "Transit Minibus", 7, 3));

    for(const auto& veiculo : veiculos){
        veiculo -> exibirDados();
    }
    return 0;
}