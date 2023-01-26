//
// Created by Tom Raviot on 25/01/2023.
//

#ifndef PROJET_TAC_TAC_TACTAC_H
#define PROJET_TAC_TAC_TACTAC_H

#define DEGRADE 36
#define NORMAL 108

typedef struct{
    char symbole, couleur;
}Tuile;

typedef struct{
    int score;
    char nom[25];
    Tuile pupitre[6];
}Joueurs;

void MelangeTab(int nbcase, Tuile Deck[NORMAL],int ModeDeJeu, Tuile DeckD[DEGRADE]);
void JeuProjet();
void afficheTab(int nbcase, Tuile Deck[108],int ModeDeJeu, Tuile DeckD[36]);
void creationPioches(int nbcase,Tuile Deck[108],int ModeDeJeu,Tuile DeckD[36]);

#endif //PROJET_TAC_TAC_TACTAC_H
