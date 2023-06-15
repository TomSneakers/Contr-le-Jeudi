//
//  Boxeur.hpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#ifndef Boxeur_hpp
#define Boxeur_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

namespace Boxeur {

class Boxeur{
private:
    string nom;
    double poids;
public:
    string GetNom() {return nom;};
    double GetPoids();
    double SetPoids (string& poids);
};
}

#endif /* Boxeur_hpp */
