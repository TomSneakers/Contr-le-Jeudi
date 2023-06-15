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

    public:
        Combat(const string& _niveau);
        ~Combat();

        string GetNiveau() const;

        void SetCoinBleu(Boxeurs::Boxeur* boxeur);
        Boxeurs::Boxeur* GetCoinBleu() const;

        void SetCoinRouge(Boxeurs::Boxeur* boxeur);
        Boxeurs::Boxeur* GetCoinRouge() const;
    };

}

#endif /* COMBAT_HPP */
