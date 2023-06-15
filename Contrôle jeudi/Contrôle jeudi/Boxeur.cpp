//
//  Boxeur.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Boxeur.hpp"
#include <iostream>
using namespace std;
namespace Boxeur {
//Constructeur
Boxeur::Boxeur(const string& _nom, double _poids) : nom(_nom), poids(_poids) {
        cout << "Constructeur Boxeur : " << nom << endl;
    }

    Boxeur::~Boxeur() {
        cout << "Destructeur Boxeur : " << nom << endl;
    }

    string Boxeur::GetNom() const {
        return nom;
    }

    

    }
