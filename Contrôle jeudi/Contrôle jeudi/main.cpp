//
//  main.cpp
//  Contrôle jeudi
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include <iostream>
#include "Boxeur.hpp"
#include "Combat.hpp"
#include <iostream>
#include "Boxeur.hpp"
#include "Combat.hpp"

using namespace Boxeurs;
using namespace Combats;
using namespace std;

int main() {
    cout << "-- DEBUT --" << endl << endl;

// Boxeurs
    Boxeur boxeur_1("Box_1", 75.0);
    cout << "Adresse de boxeur_1 : " << &boxeur_1 << endl;
    cout << "Nom de boxeur_1 : " << boxeur_1.GetNom() << endl;
    cout << "Poids de boxeur_1 : " << boxeur_1.GetPoids() << " kg" << endl << endl;

    Boxeur* boxeur_2 = new Boxeur("Box_2", 78.0);
    cout << "Adresse de boxeur_2 : " << boxeur_2 << endl;
    cout << "Nom de boxeur_2 : " << boxeur_2->GetNom() << endl;

// Combat
    Combat combat_1("Comb_1_1/8");
    combat_1.SetCoinBleu(&boxeur_1);
    combat_1.SetCoinRouge(boxeur_2);

    cout << "Le combat de niveau " << combat_1.GetNiveau() << " (adresse: " << &combat_1 << ")" << endl;
    cout << "Boxeur dans le coin bleu : " << combat_1.GetCoinBleu()->GetNom() << endl;
    cout << "Boxeur dans le coin rouge : " << combat_1.GetCoinRouge()->GetNom() << endl;
//Vainqueur
    cout << "Désignation du vainqueur..." << endl;
    Boxeur* vainqueur = combat_1.DesignerVainqueur("bleu");
    if (vainqueur != nullptr) {
        cout << "Le vainqueur est : " << vainqueur->GetNom() << endl;
    } else {
        cout << "Aucun vainqueur désigné." << endl<<endl;
    }

    cout << "delete boxeur_2"<< endl;
    delete boxeur_2;

    cout << "-- FIN --" << endl << endl;

    
    return 0;
}
