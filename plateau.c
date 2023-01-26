//
// Created by hugov on 25/01/2023.
//

#include "plateau.h"
#include <stdio.h>
#include "tactac.h"
#define NB_LIGNES_MAX 12
#define NB_COLONNES_MAX 26
char plateau [NB_LIGNES_MAX][NB_COLONNES_MAX] = {{0}};

void afficherPlateau() {
    printf("  | a | b | c | d | e | f | g | h | i | j | k | l | m | n | o | p | q | r | s | t | u | v | w | x | y | z |\n");
    //printf("1 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("2 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("3 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("4 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("5 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("6 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("7 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("8 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("9 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("10| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("11| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    //printf("12| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n");
    printf("__|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n");
    printf("\n");
    printf("  | a | b | c | d | e | f | g | h | i | j | k | l | m | n | o | p | q | r | s | t | u | v | w | x | y | z |\n");

    void afficherPlateau2(){
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

void aller(Tuile plateau[12][26]){
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
}

void initialiserPlateau(Tuile plateau[12][26]){
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 26; ++j) {
            plateau[i][j].symbole = 27;
            plateau[i][j].couleur = 0;
        }

    }
}