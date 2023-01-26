//
// Created by hugov on 26/01/2023.
//

//
// Created by hugov on 25/01/2023.
//

#ifndef PROJET_TAC_TAC_PLATEAU_H
#define PROJET_TAC_TAC_PLATEAU_H

#include "tactac.h"
#include "stdlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "time.h"
#include <windows.h>
#include <stdbool.h>


#define LIGNE 12
#define COLONNE 26
#define DEGRADE 36
#define NORMAL 108
#define NB_LIGNES_MAX 12
#define NB_COLONNES_MAX 26

typedef struct{
    char symbole, couleur; // 1 : Rouge, 2 : Jaune, 3 : Bleu, 4 : Vert, 5 : Violet, 6 : Cyan,
}Tuile;

typedef struct{
    int score;
    char nom[25];
    Tuile pupitre[6];
}Joueur;

//fonction du plateau
void afficherPlateau2();
void jouerPion (int ligne, int colonne, char forme, char couleur);
void initialiserPlateau(Tuile plateau[12][26]);
void afficherPlateau(Tuile plateau[12][26]);
void Couleur(Tuile test);
int coordonnes(Tuile plateau[12][26],Tuile test);


//fonction tactac
void MelangeTab(int nbcase, Tuile Deck[NORMAL],int ModeDeJeu, Tuile DeckD[DEGRADE]);
void JeuProjet(tableauJoueur,plateau,Deck,DeckD);
void afficheTab(int nbcase, Tuile Deck[108],int ModeDeJeu, Tuile DeckD[36]);
void creationPioches(int nbcase,Tuile Deck[108],int ModeDeJeu,Tuile DeckD[36]);
void DistributionTuiles(Joueur tab[4], Tuile Deck[108], Tuile DeckD[36],int nbjoueur, int ModeDeJeu);


//fonction du menu
void display_menu(void);
int get_menu_choice();
void debuter_une_nouvelle_partie(void);
void sauvegarder_une_partie(void);
void regles_du_jeu(void);
void tableau_des_scores(Joueur joueurs[], int nb_players);
void credits (void);
void quitter_le_jeu(void);







#endif //PROJET_TAC_TAC_PLATEAU_H
