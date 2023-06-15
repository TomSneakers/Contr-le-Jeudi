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
namespace Boxeurs {

    class Boxeur {
    private:
        string nom;
        double poids;

    public:
        Boxeur(string nom, double poids);
        ~Boxeur();

        string GetNom() ;
        double GetPoids() ;
        void SetPoids(double _poids);
    };

}

#endif /* BOXEUR_HPP */


