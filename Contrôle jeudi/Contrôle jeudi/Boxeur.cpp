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
    this->nom = nom;
    this->poids = poids;
#ifdef TRACE
    
    cout << "Constructeur Boxeur : " << this->nom << endl;
    
#endif
}



// destructeur de Boxeur
    Boxeur::~Boxeur() {
#ifdef TRACE
        cout << "Destructeur Boxeur : " << nom << endl;
#endif
    }

     const string& Boxeur::GetNom()  {
        return nom;
    }

    double Boxeur::GetPoids()  {
        return poids;
    }

    void Boxeur::SetPoids(double poids) {
        this->poids = poids;
    }

}



