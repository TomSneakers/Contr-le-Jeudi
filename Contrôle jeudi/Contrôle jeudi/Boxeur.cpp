//
//  Boxeur.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Boxeur.hpp"
#include <iostream>

namespace Boxeur {

Boxeur::Boxeur(const std::string& _nom, double _poids) : nom(_nom), poids(_poids) {
    std::cout << "Constructeur Boxeur : " << nom << std::endl;
}
}
