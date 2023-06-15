//
//  Combat.hpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#ifndef Combat_hpp
#define Combat_hpp
#include <string>
#include <stdio.h>
#include "Boxeur.hpp"
using namespace std;
namespace Combats{
    class Combat {
    private:
        string niveau;
        //Commencement de l'association
        Boxeurs::Boxeur* coicoinBleu= nullptr;
    public:
        Combat(string niveau);
        ~Combat();
        string GetNiveau();
        
        
        //coins
        Boxeurs::Boxeur* GetCoinBleu();
        Boxeurs::Boxeur* GetCoinRouge();
        
        
        
        //Setter
        string SetCoinBleu(Boxeurs::Boxeur* boxeur);
        string SetCoinRouge(Boxeurs::Boxeur* boxeur);
        
        //vainqueur
        Boxeurs::Boxeur* GetVainqueur();
        string DesignerVainqueur( Boxeurs::Boxeur* boxeur);

    };

}


#endif /* Combat_hpp */
