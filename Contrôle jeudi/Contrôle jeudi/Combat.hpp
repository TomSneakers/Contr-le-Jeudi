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
        Boxeurs::Boxeur* coinBleu = nullptr;
        Boxeurs::Boxeur* coinRouge = nullptr;

    public:
        Combat(string niveau);
        ~Combat();
        string GetNiveau();
        string VerifierCombat();
        
        //coins
        Boxeurs::Boxeur* GetCoinBleu();
        Boxeurs::Boxeur* GetCoinRouge();
        
        Combat* SetCombat(Combat* Combat);
        Combat* SetBoxeur(Combat* Boxeur);
        
        //Setter
        void SetCoinBleu(Boxeurs::Boxeur* boxeur);
        void SetCoinRouge(Boxeurs::Boxeur* boxeur);
        
        //vainqueur
        Boxeurs::Boxeur* GetVainqueur();
        void DesignerVainqueur( Boxeurs::Boxeur* boxeur);

    };

}


#endif /* Combat_hpp */
