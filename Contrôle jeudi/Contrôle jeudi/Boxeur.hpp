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

    class Boxeur {
    private:
        string nom;
        double poids;

    public:
        Boxeur(const string& _nom, double _poids);
        ~Boxeur();

        string GetNom() const;
        double GetPoids() const;
        void SetPoids(double _poids);
    };

}

#endif /* BOXEUR_HPP */


