//
//  Combat.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Combat.hpp"
#include <string>
#include <iostream>
using namespace std;
namespace Combat {

    Boxeurs::Combat(string& _niveau) : niveau(_niveau) {
        std::cout << "Constructeur Combat : " << niveau << std::endl;
    }

    Combat::~Combat() {
        std::cout << "Destructeur Combat : " << niveau << std::endl;
    }

    std::string Combat::GetNiveau() {
        return niveau;
    }

} // namespace Combat


#endif
