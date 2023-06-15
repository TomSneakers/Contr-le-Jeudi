//
//  Boxeur.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Boxeur.hpp"
#include <iostream>
//#define TRACE
#include <string>
using namespace std;
namespace Boxeurs {


//Constructeur
Boxeur::Boxeur(string nom, double poids) {
#ifdef TRACE
    
    this->nom = nom;
    this->poids = poids;
    cout << "Constructeur Boxeur : " << this->nom << endl;
    
#endif
}



// destructeur de Boxeur
    Boxeur::~Boxeur() {
#ifdef TRACE
        cout << "Destructeur Boxeur : " << nom << endl;
#endif
    }

     string Boxeur::GetNom()  {
        return nom;
    }

    double Boxeur::GetPoids()  {
        return poids;
    }

    void Boxeur::SetPoids(double poids) {
        this->poids = poids;
    }

}



