#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
    Personnage david("Starforge", 50), goliath;
    //Création de 2 objets de type Personnage : david et goliath

    //Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Atziri Disfavour", 60);
    goliath.attaquer(david);

    //Temps mort ! Voyons voir la vie de chacun…
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}
