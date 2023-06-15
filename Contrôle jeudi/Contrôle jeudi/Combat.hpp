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
using namespace std;
namespace Boxeurs{
    class Combat {
    private:
        string niveau;
    public:
        Combat(string& _niveau);
        ~Combat();
        string GetNiveau();
    };

}


#endif /* Combat_hpp */
