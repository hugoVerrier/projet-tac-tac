//
// Created by Tom Raviot on 25/01/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "menu.h"
#include "tactac.h"
#include "plateau.h"
#include "tactac.h"
#include "stdlib.h"
#include "time.h"



int main() {
    /*int choice;
    int (partie_terminee) = 0;
    do {
        printf("\nMenu:\n");
        printf("1. Nouvelle partie\n");
        printf("2. Sauvegarder partie\n");
        printf("3. Regles du jeu\n");
        printf("4. Credits\n");
        printf("5. Quitter le jeu \n");
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
                credits();
                break;
            case 5:
                printf("Au revoir!");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choice != 6);*/
    Tuile plateau[12][26];
    Tuile test;
    initialiserPlateau(plateau);
    coordonnes(plateau,test);
    afficherPlateau(plateau);
    return 0;

}