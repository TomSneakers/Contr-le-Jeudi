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
void Combat::SetCoinBleu(Boxeurs::Boxeur* coinBleu){
    this->coinBleu = coinBleu;
}
void Combat::SetCoinRouge(Boxeurs::Boxeur* coinRouge)
{
    this->coinRouge = coinRouge;
}






//Destructeur
Combat::~Combat(){
    
    cout << "Destructeur combat : " << this->niveau << endl;
    
}


//verifier

string Combats::Combat::VerifierCombat()
{
    string tmp= "le boxer est au niveau: " + this->niveau;
   
}


}
