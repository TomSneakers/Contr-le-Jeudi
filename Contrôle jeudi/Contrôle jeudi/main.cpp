//
//  main.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include <iostream>
#include "Boxeur.hpp"


using namespace std;
int main() {
    cout <<"--DEBUT--" << endl<<endl;
    
    Boxeur::Boxeur boxeur_1("Box_1", 75.0);
    cout << "Adresse de boxeur_1 : " << &boxeur_1 << endl;
    cout << "Nom de boxeur_1 : " << boxeur_1.GetNom() << std::endl;
    cout << "Poids de boxeur_1 : " << boxeur_1.GetPoids() << " kg" << std::endl;

    
        
    cout << "--Fin--" << endl <<endl;

    return 0;
}



