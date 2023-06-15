//
//  Boxeur.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Boxeur.hpp"
#include <iostream>
#define TRACE

using namespace std;
namespace Boxeurs {


//Constructeur
Boxeur::Boxeur(const std::string& _nom, double _poids) {
#ifdef TRACE
    
    this->nom = _nom;
    this->poids = _poids;
    cout << "Constructeur Boxeur : " << this->nom << endl;
    
#endif
}



// destructeur de Boxeur
    Boxeur::~Boxeur() {
#ifdef TRACE
        cout << "Destructeur Boxeur : " << nom << endl;
#endif
    }

    string Boxeur::GetNom() const {
        return nom;
    }

    double Boxeur::GetPoids() const {
        return poids;
    }

    void Boxeur::SetPoids(double _poids) {
        poids = _poids;
    }

}



