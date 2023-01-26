//
// Created by hugov on 25/01/2023.
//

#include "plateau.h"
#include <stdio.h>
#define NB_LIGNES_MAX 12
#define NB_COLONNES_MAX 26
char plateau [NB_LIGNES_MAX][NB_COLONNES_MAX] = {{0}};

void afficherPlateau(){
    int i;
    int j;

    printf("     A    B    C    D    E    F    G    H    I    J    K    L    M    N    O    P    Q    R    S    T    U    V    W    X    Y    Z    \n");

    for (i = 0; i < 12; i++) {
        printf("    ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___\n");
        printf("%2d ", i+1);
        for (j = 0; j < 13; j++) {
            printf("|   |   ");
        }
        printf("\n");
    }
    printf("    ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n");
}

void jouerPion (int ligne, int colonne, char forme, char couleur){

    printf("\n");
    for (int i = 0; i < NB_LIGNES_MAX; ++i) {
        for (int j = 0; j < NB_COLONNES_MAX; ++j) {
            if (i == ligne && j == colonne) {
                plateau [i][j] = forme;

                printf("%c", plateau[i][j]);
            } else{
                (j == NB_COLONNES_MAX - 1) ? printf("%c \n", plateau[i][j]) : printf("%c ", plateau[i][j]);
            }
        }
    }
}