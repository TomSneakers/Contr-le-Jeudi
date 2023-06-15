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
    public:
        Combat(string niveau);
        ~Combat();
        
        Boxeurs::Boxeur* GetCoinBleu();
        Boxeurs::Boxeur* GetCoinRouge();
        string SetCoinBleu
    };

}


#endif /* Combat_hpp */
