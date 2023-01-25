//
// Created by Tom Raviot on 25/01/2023.
//

#ifndef PROJET_TAC_TAC_TACTAC_H
#define PROJET_TAC_TAC_TACTAC_H

typedef struct{
    char symbole, couleur;
}Tuile;

typedef struct{
    int score;
    char nom[25];
    Tuile pupitre[6];
}Joueurs;

int pioche();


#endif //PROJET_TAC_TAC_TACTAC_H
