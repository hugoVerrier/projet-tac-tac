//
// Created by hugov on 25/01/2023.
//

#ifndef PROJET_TAC_TAC_PLATEAU_H
#define PROJET_TAC_TAC_PLATEAU_H
#include "tactac.h"

void afficherPlateau2();
void jouerPion (int ligne, int colonne, char forme, char couleur);

void initialiserPlateau(Tuile plateau[12][26]);
void afficherPlateau(Tuile plateau[12][26]);

int coordonnes(Tuile plateau[12][26],Tuile test);

#define LIGNE 12
#define COLONNE 26









#endif //PROJET_TAC_TAC_PLATEAU_H
