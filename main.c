//
// Created by Tom Raviot on 25/01/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "menu.h"
#include "tactac.h"
#include "plateau.h"


int main() {
    int choice;
    int (partie_terminee) = 0;
    int nb_players;
    Joueurs joueurs[nb_players];
    do {
        printf("\nMenu:\n");
        printf("1. Nouvelle partie\n");
        printf("2. Sauvegarder partie\n");
        printf("3. Regles du jeu\n");
        printf("4. Tableau des scores\n");
        printf("5. Credits\n");
        printf("6. Quitter le jeu \n");
        printf("Entrez votre choix : \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                //affichage de l'état du plateau
                afficherPlateau();
                break;
            case 2:
                sauvegarder_une_partie();
                break;
            case 3:
                regles_du_jeu();
                break;
            case 4:
                for (int i = 0; i < nb_players; ++i) {
                    printf("Entrez le nom du joueur %d : ", i + 1);
                    scanf("%s", joueurs[i].nom);
                    printf("Entrez le score du joueur %d : ", i + 1);
                    scanf("%d", &joueurs[i].score);
                }
                tableau_des_scores(joueurs, nb_players);
                return 0;
            case 5:
                credits();
                break;
            case 6:
                printf("Au revoir!");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choice != 6);


}