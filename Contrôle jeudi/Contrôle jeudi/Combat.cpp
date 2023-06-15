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


//contructeur
Combat::Combat(string niveau){
    this-> niveau = niveau;
}




//setter
string Combat::GetNiveau(){
    return this->niveau;
}




//Destructeur
Combat::~Combat(){
    
    cout << "Destructeur combat : " << this->niveau << endl;
    
}
}
