//
// Created by clsan on 25.01.2023.
//

#ifndef PROJET_TAC_TAC_MENU_H
#define PROJET_TAC_TAC_MENU_H

#include "tactac.h"


void display_menu(void);
int get_menu_choice();
void debuter_une_nouvelle_partie(void);
void sauvegarder_une_partie(void);
void regles_du_jeu(void);
void tableau_des_scores(Joueurs joueurs[], int nb_players);
void credits (void);
void quitter_le_jeu(void);

#endif //PROJET_TAC_TAC_MENU_H
