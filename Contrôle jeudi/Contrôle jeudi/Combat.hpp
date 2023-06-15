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

#include <string>


namespace Combats {

    class Combat {
    private:
        string niveau;
        Boxeurs::Boxeur* coinBleu;
        Boxeurs::Boxeur* coinRouge;
        Boxeurs::Boxeur* vainqueur;

    public:
        Combat(string _niveau);
        ~Combat();

        string GetNiveau();

        void SetCoinBleu(Boxeurs::Boxeur* boxeur);
        Boxeurs::Boxeur* GetCoinBleu();

        void SetCoinRouge(Boxeurs::Boxeur* boxeur);
        Boxeurs::Boxeur* GetCoinRouge();

        Boxeurs::Boxeur* DesignerVainqueur(string couleurCoin);
    };

}
#endif /* COMBAT_HPP */
