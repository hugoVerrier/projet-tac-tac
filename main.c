//
// Created by Tom Raviot on 25/01/2023.
//
#include "commun.h"

int main() {
    Joueur tableauJoueur[4]={0};
    Tuile plateau[12][26]={0};
    Tuile Deck[NORMAL]={0};
    Tuile DeckD[DEGRADE]={0};
    int choix=0;
    srand(time(NULL));
    display_menu(tableauJoueur,plateau,Deck,DeckD,choix);

//    Tuile test;
//    initialiserPlateau(plateau);
//    coordonnes(plateau,test);
//    afficherPlateau(plateau);

//    int forme = 155;
//    printf(" %c",forme);
//

//    JeuProjet(tableauJoueur,plateau,Deck,DeckD,choix);

    return 0;

}


