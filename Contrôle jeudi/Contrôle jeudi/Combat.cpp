//
//  Combat.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Combat.hpp"
#include <string>
#include <iostream>

#define TRACE

using namespace std;
namespace Combats{

Combat::Combat(string niveau){
    this-> niveau = niveau;
}

string Combat::GetNiveau(){
    return this->niveau;
}

Combat::~Combat(){
    
    cout << "Destructeur Boxeur : " << this->niveau << endl;
    
}
}
