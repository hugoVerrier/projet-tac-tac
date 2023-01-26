//
// Created by hugov on 25/01/2023.
//

#include "plateau.h"
#include <stdio.h>


void afficherPlateau(Tuile plateau[12][26]){
    printf("  | a | b | c | d | e | f | g | h | i | j | k | l | m | n | o | p | q | r | s | t | u | v | w | x | y | z |\n");
    for (int i = 1; i < 13; ++i){
        printf("%2d",i);
        for (int j = 0; j < 26; ++j) {
            printf("| %c ",plateau[i-1][j].symbole);
        }
        printf("|");
        printf("\n");
        printf("__");
        for (int j = 0; j < 26; ++j) {
            printf("|___");
        }
        printf("|");
        printf("\n");

    }
};

void initialiserPlateau(Tuile plateau[12][26]){
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 26; ++j) {
            plateau[i][j].symbole = ' ';
            plateau[i][j].couleur = 0;
        }

    }
}
