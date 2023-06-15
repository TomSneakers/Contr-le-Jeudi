//
//  Combat.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Combat.hpp"
#include <iostream>

namespace Combats {

    Combat::Combat(const std::string& _niveau) : niveau(_niveau), coinBleu(nullptr), coinRouge(nullptr) {
        std::cout << "Constructeur Combat : " << niveau << std::endl;
    }

    Combat::~Combat() {
        std::cout << "Destructeur Combat : " << niveau << std::endl;
    }

    std::string Combat::GetNiveau() const {
        return niveau;
    }

    void Combat::SetCoinBleu(Boxeurs::Boxeur* boxeur) {
        coinBleu = boxeur;
    }

    Boxeurs::Boxeur* Combat::GetCoinBleu() const {
        return coinBleu;
    }

    void Combat::SetCoinRouge(Boxeurs::Boxeur* boxeur) {
        coinRouge = boxeur;
    }

    Boxeurs::Boxeur* Combat::GetCoinRouge() const {
        return coinRouge;
    }

} // namespace Combat
