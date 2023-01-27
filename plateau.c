//
// Created by hugov on 25/01/2023.
//

#include "commun.h"

void afficherPlateau(Tuile plateau[12][26],Joueur tabJ[4],int choix, int ordre, int nbJ){
    Joueur test,blanc;
    test.pupitre[0].symbole=33;
    test.pupitre[0].couleur=5;
    blanc.pupitre[0].symbole=0;
    blanc.pupitre[0].couleur=0;
    printf("  | a | b | c | d | e | f | g | h | i | j | k | l | m | n | o | p | q | r | s | t | u | v | w | x | y | z |\n");
    for (int i = 1; i < 13; ++i){
        printf("%2d",i);
        for (int j = 0; j < 26; ++j) {
            printf("|");
            CouleurCase(plateau,i-1,j);
            printf(" %c ",plateau[i-1][j].symbole);
            Couleur(blanc,0);
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
    printf("\n");
    printf("Joueur 1:");
    for (int i = 0; i < 6; ++i) {
        Couleur(tabJ[0],i);
        printf(" %c",tabJ[0].pupitre[i].symbole);
        Couleur(blanc,i);
    }
    printf("\n");
    printf("Joueur 2:");
    for (int i = 0; i < 6; ++i) {
        Couleur(tabJ[1],i);
        printf(" %c",tabJ[1].pupitre[i].symbole);
        Couleur(blanc,i);
    }
    printf("\n");
    if(nbJ>2){
        printf("Joueur 3:");
        for (int i = 0; i < 6; ++i) {
            Couleur(tabJ[2],i);
            printf(" %c",tabJ[2].pupitre[i].symbole);
            Couleur(blanc,i);
        }
        printf("\n");
        if(nbJ==4){
            printf("Joueur 4:");
            for (int i = 0; i < 6; ++i) {
                Couleur(tabJ[3],i);
                printf(" %c",tabJ[3].pupitre[i].symbole);
                Couleur(blanc,i);
            }
            printf("\n");
        }
    }
}

void initialiserPlateau(Tuile plateau[12][26]){
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 26; ++j) {
            plateau[i][j].symbole = ' ';
            plateau[i][j].couleur = 0;
        }

    }
}

Joueur coordonnes(Tuile plateau[12][26], Joueur J,int i) {
    int a;
    char b;
    Tuile test;
    test.symbole=0;
    test.couleur=0;
    printf("rentrer la ligne :");
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[0][0].symbole = J.pupitre[i - 1].symbole;
                plateau[0][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = test.symbole;
                J.pupitre[i - 1].couleur = test.couleur;
                return J;
            } else if (b == 'b') {
                plateau[0][1].symbole = J.pupitre[i - 1].symbole;
                plateau[0][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[0][2].symbole = J.pupitre[i - 1].symbole;
                plateau[0][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[0][3].symbole = J.pupitre[i - 1].symbole;
                plateau[0][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[0][4].symbole = J.pupitre[i - 1].symbole;
                plateau[0][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[0][5].symbole = J.pupitre[i - 1].symbole;
                plateau[0][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[0][6].symbole = J.pupitre[i - 1].symbole;
                plateau[0][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[0][7].symbole = J.pupitre[i - 1].symbole;
                plateau[0][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[0][8].symbole = J.pupitre[i - 1].symbole;
                plateau[0][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[0][9].symbole = J.pupitre[i - 1].symbole;
                plateau[0][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[0][10].symbole = J.pupitre[i - 1].symbole;
                plateau[0][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[0][11].symbole = J.pupitre[i - 1].symbole;
                plateau[0][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[0][12].symbole = J.pupitre[i - 1].symbole;
                plateau[0][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[0][13].symbole = J.pupitre[i - 1].symbole;
                plateau[0][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[0][14].symbole = J.pupitre[i - 1].symbole;
                plateau[0][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[0][15].symbole = J.pupitre[i - 1].symbole;
                plateau[0][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[0][16].symbole = J.pupitre[i - 1].symbole;
                plateau[0][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[0][17].symbole = J.pupitre[i - 1].symbole;
                plateau[0][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[0][18].symbole = J.pupitre[i - 1].symbole;
                plateau[0][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[0][19].symbole = J.pupitre[i - 1].symbole;
                plateau[0][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[0][20].symbole = J.pupitre[i - 1].symbole;
                plateau[0][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[0][21].symbole = J.pupitre[i - 1].symbole;
                plateau[0][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[0][22].symbole = J.pupitre[i - 1].symbole;
                plateau[0][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[0][23].symbole = J.pupitre[i - 1].symbole;
                plateau[0][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[0][24].symbole = J.pupitre[i - 1].symbole;
                plateau[0][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[0][25].symbole = J.pupitre[i - 1].symbole;
                plateau[0][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 2:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[1][0].symbole = J.pupitre[i - 1].symbole;
                plateau[1][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[1][1].symbole = J.pupitre[i - 1].symbole;
                plateau[1][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[1][2].symbole = J.pupitre[i - 1].symbole;
                plateau[1][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[1][3].symbole = J.pupitre[i - 1].symbole;
                plateau[1][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[1][4].symbole = J.pupitre[i - 1].symbole;
                plateau[1][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[1][5].symbole = J.pupitre[i - 1].symbole;
                plateau[1][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[1][6].symbole = J.pupitre[i - 1].symbole;
                plateau[1][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[1][7].symbole = J.pupitre[i - 1].symbole;
                plateau[1][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[1][8].symbole = J.pupitre[i - 1].symbole;
                plateau[1][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[1][9].symbole = J.pupitre[i - 1].symbole;
                plateau[1][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[1][10].symbole = J.pupitre[i - 1].symbole;
                plateau[1][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[1][11].symbole = J.pupitre[i - 1].symbole;
                plateau[1][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[1][12].symbole = J.pupitre[i - 1].symbole;
                plateau[1][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[1][13].symbole = J.pupitre[i - 1].symbole;
                plateau[1][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[1][14].symbole = J.pupitre[i - 1].symbole;
                plateau[1][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[1][15].symbole = J.pupitre[i - 1].symbole;
                plateau[1][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[1][16].symbole = J.pupitre[i - 1].symbole;
                plateau[1][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[1][17].symbole = J.pupitre[i - 1].symbole;
                plateau[1][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[1][18].symbole = J.pupitre[i - 1].symbole;
                plateau[1][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[1][19].symbole = J.pupitre[i - 1].symbole;
                plateau[1][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[1][20].symbole = J.pupitre[i - 1].symbole;
                plateau[1][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[1][21].symbole = J.pupitre[i - 1].symbole;
                plateau[1][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[1][22].symbole = J.pupitre[i - 1].symbole;
                plateau[1][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[1][23].symbole = J.pupitre[i - 1].symbole;
                plateau[1][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[1][24].symbole = J.pupitre[i - 1].symbole;
                plateau[1][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[1][25].symbole = J.pupitre[i - 1].symbole;
                plateau[1][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 3:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[2][0].symbole = J.pupitre[i - 1].symbole;
                plateau[2][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[2][1].symbole = J.pupitre[i - 1].symbole;
                plateau[2][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[2][2].symbole = J.pupitre[i - 1].symbole;
                plateau[2][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[2][3].symbole = J.pupitre[i - 1].symbole;
                plateau[2][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[2][4].symbole = J.pupitre[i - 1].symbole;
                plateau[2][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[2][5].symbole = J.pupitre[i - 1].symbole;
                plateau[2][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[2][6].symbole = J.pupitre[i - 1].symbole;
                plateau[2][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[2][7].symbole = J.pupitre[i - 1].symbole;
                plateau[2][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[2][8].symbole = J.pupitre[i - 1].symbole;
                plateau[2][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[2][9].symbole = J.pupitre[i - 1].symbole;
                plateau[2][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[2][10].symbole = J.pupitre[i - 1].symbole;
                plateau[2][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[2][11].symbole = J.pupitre[i - 1].symbole;
                plateau[2][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[2][12].symbole = J.pupitre[i - 1].symbole;
                plateau[2][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[2][13].symbole = J.pupitre[i - 1].symbole;
                plateau[2][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[2][14].symbole = J.pupitre[i - 1].symbole;
                plateau[2][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[2][15].symbole = J.pupitre[i - 1].symbole;
                plateau[2][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[2][16].symbole = J.pupitre[i - 1].symbole;
                plateau[2][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[2][17].symbole = J.pupitre[i - 1].symbole;
                plateau[2][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[2][18].symbole = J.pupitre[i - 1].symbole;
                plateau[2][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[2][19].symbole = J.pupitre[i - 1].symbole;
                plateau[2][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[2][20].symbole = J.pupitre[i - 1].symbole;
                plateau[2][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[2][21].symbole = J.pupitre[i - 1].symbole;
                plateau[2][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[2][22].symbole = J.pupitre[i - 1].symbole;
                plateau[2][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[2][23].symbole = J.pupitre[i - 1].symbole;
                plateau[2][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[2][24].symbole = J.pupitre[i - 1].symbole;
                plateau[2][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[2][25].symbole = J.pupitre[i - 1].symbole;
                plateau[2][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 4:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[3][0].symbole = J.pupitre[i - 1].symbole;
                plateau[3][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[3][1].symbole = J.pupitre[i - 1].symbole;
                plateau[3][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[3][2].symbole = J.pupitre[i - 1].symbole;
                plateau[3][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[3][3].symbole = J.pupitre[i - 1].symbole;
                plateau[3][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[3][4].symbole = J.pupitre[i - 1].symbole;
                plateau[3][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[3][5].symbole = J.pupitre[i - 1].symbole;
                plateau[3][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[3][6].symbole = J.pupitre[i - 1].symbole;
                plateau[3][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[3][7].symbole = J.pupitre[i - 1].symbole;
                plateau[3][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[3][8].symbole = J.pupitre[i - 1].symbole;
                plateau[3][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[3][9].symbole = J.pupitre[i - 1].symbole;
                plateau[3][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[3][10].symbole = J.pupitre[i - 1].symbole;
                plateau[3][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[3][11].symbole = J.pupitre[i - 1].symbole;
                plateau[3][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[3][12].symbole = J.pupitre[i - 1].symbole;
                plateau[3][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[3][13].symbole = J.pupitre[i - 1].symbole;
                plateau[3][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[3][14].symbole = J.pupitre[i - 1].symbole;
                plateau[3][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[3][15].symbole = J.pupitre[i - 1].symbole;
                plateau[3][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[3][16].symbole = J.pupitre[i - 1].symbole;
                plateau[3][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[3][17].symbole = J.pupitre[i - 1].symbole;
                plateau[3][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[3][18].symbole = J.pupitre[i - 1].symbole;
                plateau[3][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[3][19].symbole = J.pupitre[i - 1].symbole;
                plateau[3][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[3][20].symbole = J.pupitre[i - 1].symbole;
                plateau[3][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[3][21].symbole = J.pupitre[i - 1].symbole;
                plateau[3][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[3][22].symbole = J.pupitre[i - 1].symbole;
                plateau[3][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[3][23].symbole = J.pupitre[i - 1].symbole;
                plateau[3][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[3][24].symbole = J.pupitre[i - 1].symbole;
                plateau[3][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[3][25].symbole = J.pupitre[i - 1].symbole;
                plateau[3][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 5:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[4][0].symbole = J.pupitre[i - 1].symbole;
                plateau[4][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[4][1].symbole = J.pupitre[i - 1].symbole;
                plateau[4][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[4][2].symbole = J.pupitre[i - 1].symbole;
                plateau[4][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[4][3].symbole = J.pupitre[i - 1].symbole;
                plateau[4][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[4][4].symbole = J.pupitre[i - 1].symbole;
                plateau[4][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[4][5].symbole = J.pupitre[i - 1].symbole;
                plateau[4][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[4][6].symbole = J.pupitre[i - 1].symbole;
                plateau[4][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[4][7].symbole = J.pupitre[i - 1].symbole;
                plateau[4][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[4][8].symbole = J.pupitre[i - 1].symbole;
                plateau[4][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[4][9].symbole = J.pupitre[i - 1].symbole;
                plateau[4][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[4][10].symbole = J.pupitre[i - 1].symbole;
                plateau[4][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[4][11].symbole = J.pupitre[i - 1].symbole;
                plateau[4][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[4][12].symbole = J.pupitre[i - 1].symbole;
                plateau[4][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[4][13].symbole = J.pupitre[i - 1].symbole;
                plateau[4][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[4][14].symbole = J.pupitre[i - 1].symbole;
                plateau[4][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[4][15].symbole = J.pupitre[i - 1].symbole;
                plateau[4][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[4][16].symbole = J.pupitre[i - 1].symbole;
                plateau[4][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[4][17].symbole = J.pupitre[i - 1].symbole;
                plateau[4][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[4][18].symbole = J.pupitre[i - 1].symbole;
                plateau[4][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[4][19].symbole = J.pupitre[i - 1].symbole;
                plateau[4][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[4][20].symbole = J.pupitre[i - 1].symbole;
                plateau[4][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[4][21].symbole = J.pupitre[i - 1].symbole;
                plateau[4][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[4][22].symbole = J.pupitre[i - 1].symbole;
                plateau[4][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[4][23].symbole = J.pupitre[i - 1].symbole;
                plateau[4][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[4][24].symbole = J.pupitre[i - 1].symbole;
                plateau[4][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[4][25].symbole = J.pupitre[i - 1].symbole;
                plateau[4][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 6:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[5][0].symbole = J.pupitre[i - 1].symbole;
                plateau[5][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[5][1].symbole = J.pupitre[i - 1].symbole;
                plateau[5][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[5][2].symbole = J.pupitre[i - 1].symbole;
                plateau[5][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[5][3].symbole = J.pupitre[i - 1].symbole;
                plateau[5][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[5][4].symbole = J.pupitre[i - 1].symbole;
                plateau[5][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[5][5].symbole = J.pupitre[i - 1].symbole;
                plateau[5][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[5][6].symbole = J.pupitre[i - 1].symbole;
                plateau[5][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[5][7].symbole = J.pupitre[i - 1].symbole;
                plateau[5][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[5][8].symbole = J.pupitre[i - 1].symbole;
                plateau[5][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[5][9].symbole = J.pupitre[i - 1].symbole;
                plateau[5][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[5][10].symbole = J.pupitre[i - 1].symbole;
                plateau[5][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[5][11].symbole = J.pupitre[i - 1].symbole;
                plateau[5][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[5][12].symbole = J.pupitre[i - 1].symbole;
                plateau[5][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[5][13].symbole = J.pupitre[i - 1].symbole;
                plateau[5][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[5][14].symbole = J.pupitre[i - 1].symbole;
                plateau[5][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[5][15].symbole = J.pupitre[i - 1].symbole;
                plateau[5][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[5][16].symbole = J.pupitre[i - 1].symbole;
                plateau[5][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[5][17].symbole = J.pupitre[i - 1].symbole;
                plateau[5][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[5][18].symbole = J.pupitre[i - 1].symbole;
                plateau[5][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[5][19].symbole = J.pupitre[i - 1].symbole;
                plateau[5][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[5][20].symbole = J.pupitre[i - 1].symbole;
                plateau[5][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[5][21].symbole = J.pupitre[i - 1].symbole;
                plateau[5][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[5][22].symbole = J.pupitre[i - 1].symbole;
                plateau[5][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[5][23].symbole = J.pupitre[i - 1].symbole;
                plateau[5][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[5][24].symbole = J.pupitre[i - 1].symbole;
                plateau[5][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[5][25].symbole = J.pupitre[i - 1].symbole;
                plateau[5][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 7:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[6][0].symbole = J.pupitre[i - 1].symbole;
                plateau[6][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[6][1].symbole = J.pupitre[i - 1].symbole;
                plateau[6][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[6][2].symbole = J.pupitre[i - 1].symbole;
                plateau[6][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[6][3].symbole = J.pupitre[i - 1].symbole;
                plateau[6][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[6][4].symbole = J.pupitre[i - 1].symbole;
                plateau[6][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[6][5].symbole = J.pupitre[i - 1].symbole;
                plateau[6][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[6][6].symbole = J.pupitre[i - 1].symbole;
                plateau[6][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[6][7].symbole = J.pupitre[i - 1].symbole;
                plateau[6][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[6][8].symbole = J.pupitre[i - 1].symbole;
                plateau[6][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[6][9].symbole = J.pupitre[i - 1].symbole;
                plateau[6][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[6][10].symbole = J.pupitre[i - 1].symbole;
                plateau[6][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[6][11].symbole = J.pupitre[i - 1].symbole;
                plateau[6][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[6][12].symbole = J.pupitre[i - 1].symbole;
                plateau[6][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[6][13].symbole = J.pupitre[i - 1].symbole;
                plateau[6][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[6][14].symbole = J.pupitre[i - 1].symbole;
                plateau[6][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[6][15].symbole = J.pupitre[i - 1].symbole;
                plateau[6][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[6][16].symbole = J.pupitre[i - 1].symbole;
                plateau[6][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[6][17].symbole = J.pupitre[i - 1].symbole;
                plateau[6][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[6][18].symbole = J.pupitre[i - 1].symbole;
                plateau[6][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[6][19].symbole = J.pupitre[i - 1].symbole;
                plateau[6][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[6][20].symbole = J.pupitre[i - 1].symbole;
                plateau[6][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[6][21].symbole = J.pupitre[i - 1].symbole;
                plateau[6][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[6][22].symbole = J.pupitre[i - 1].symbole;
                plateau[6][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[6][23].symbole = J.pupitre[i - 1].symbole;
                plateau[6][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[6][24].symbole = J.pupitre[i - 1].symbole;
                plateau[6][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[6][25].symbole = J.pupitre[i - 1].symbole;
                plateau[6][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 8:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[7][0].symbole = J.pupitre[i - 1].symbole;
                plateau[7][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[7][1].symbole = J.pupitre[i - 1].symbole;
                plateau[7][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[7][2].symbole = J.pupitre[i - 1].symbole;
                plateau[7][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[7][3].symbole = J.pupitre[i - 1].symbole;
                plateau[7][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[7][4].symbole = J.pupitre[i - 1].symbole;
                plateau[7][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[7][5].symbole = J.pupitre[i - 1].symbole;
                plateau[7][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[7][6].symbole = J.pupitre[i - 1].symbole;
                plateau[7][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[7][7].symbole = J.pupitre[i - 1].symbole;
                plateau[7][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[7][8].symbole = J.pupitre[i - 1].symbole;
                plateau[7][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[7][9].symbole = J.pupitre[i - 1].symbole;
                plateau[7][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[7][10].symbole = J.pupitre[i - 1].symbole;
                plateau[7][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[7][11].symbole = J.pupitre[i - 1].symbole;
                plateau[7][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[7][12].symbole = J.pupitre[i - 1].symbole;
                plateau[7][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[7][13].symbole = J.pupitre[i - 1].symbole;
                plateau[7][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[7][14].symbole = J.pupitre[i - 1].symbole;
                plateau[7][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[7][15].symbole = J.pupitre[i - 1].symbole;
                plateau[7][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[7][16].symbole = J.pupitre[i - 1].symbole;
                plateau[7][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[7][17].symbole = J.pupitre[i - 1].symbole;
                plateau[7][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[7][18].symbole = J.pupitre[i - 1].symbole;
                plateau[7][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[7][19].symbole = J.pupitre[i - 1].symbole;
                plateau[7][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[7][20].symbole = J.pupitre[i - 1].symbole;
                plateau[7][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[7][21].symbole = J.pupitre[i - 1].symbole;
                plateau[7][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[7][22].symbole = J.pupitre[i - 1].symbole;
                plateau[7][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[7][23].symbole = J.pupitre[i - 1].symbole;
                plateau[7][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[7][24].symbole = J.pupitre[i - 1].symbole;
                plateau[7][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[7][25].symbole = J.pupitre[i - 1].symbole;
                plateau[7][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 9:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[8][0].symbole = J.pupitre[i - 1].symbole;
                plateau[8][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[8][1].symbole = J.pupitre[i - 1].symbole;
                plateau[8][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[8][2].symbole = J.pupitre[i - 1].symbole;
                plateau[8][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[8][3].symbole = J.pupitre[i - 1].symbole;
                plateau[8][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[8][4].symbole = J.pupitre[i - 1].symbole;
                plateau[8][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[8][5].symbole = J.pupitre[i - 1].symbole;
                plateau[8][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[8][6].symbole = J.pupitre[i - 1].symbole;
                plateau[8][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[8][7].symbole = J.pupitre[i - 1].symbole;
                plateau[8][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[8][8].symbole = J.pupitre[i - 1].symbole;
                plateau[8][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[8][9].symbole = J.pupitre[i - 1].symbole;
                plateau[8][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[8][10].symbole = J.pupitre[i - 1].symbole;
                plateau[8][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[8][11].symbole = J.pupitre[i - 1].symbole;
                plateau[8][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[8][12].symbole = J.pupitre[i - 1].symbole;
                plateau[8][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[8][13].symbole = J.pupitre[i - 1].symbole;
                plateau[8][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[8][14].symbole = J.pupitre[i - 1].symbole;
                plateau[8][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[8][15].symbole = J.pupitre[i - 1].symbole;
                plateau[8][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[8][16].symbole = J.pupitre[i - 1].symbole;
                plateau[8][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[8][17].symbole = J.pupitre[i - 1].symbole;
                plateau[8][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[8][18].symbole = J.pupitre[i - 1].symbole;
                plateau[8][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[8][19].symbole = J.pupitre[i - 1].symbole;
                plateau[8][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[8][20].symbole = J.pupitre[i - 1].symbole;
                plateau[8][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[8][21].symbole = J.pupitre[i - 1].symbole;
                plateau[8][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[8][22].symbole = J.pupitre[i - 1].symbole;
                plateau[8][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[8][23].symbole = J.pupitre[i - 1].symbole;
                plateau[8][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[8][24].symbole = J.pupitre[i - 1].symbole;
                plateau[8][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[8][25].symbole = J.pupitre[i - 1].symbole;
                plateau[8][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 10:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[9][0].symbole = J.pupitre[i - 1].symbole;
                plateau[9][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[9][1].symbole = J.pupitre[i - 1].symbole;
                plateau[9][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[9][2].symbole = J.pupitre[i - 1].symbole;
                plateau[9][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[9][3].symbole = J.pupitre[i - 1].symbole;
                plateau[9][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[9][4].symbole = J.pupitre[i - 1].symbole;
                plateau[9][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[9][5].symbole = J.pupitre[i - 1].symbole;
                plateau[9][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[9][6].symbole = J.pupitre[i - 1].symbole;
                plateau[9][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[9][7].symbole = J.pupitre[i - 1].symbole;
                plateau[9][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[9][8].symbole = J.pupitre[i - 1].symbole;
                plateau[9][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[9][9].symbole = J.pupitre[i - 1].symbole;
                plateau[9][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[9][10].symbole = J.pupitre[i - 1].symbole;
                plateau[9][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[9][11].symbole = J.pupitre[i - 1].symbole;
                plateau[9][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[9][12].symbole = J.pupitre[i - 1].symbole;
                plateau[9][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[9][13].symbole = J.pupitre[i - 1].symbole;
                plateau[9][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[9][14].symbole = J.pupitre[i - 1].symbole;
                plateau[9][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[9][15].symbole = J.pupitre[i - 1].symbole;
                plateau[9][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[9][16].symbole = J.pupitre[i - 1].symbole;
                plateau[9][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[9][17].symbole = J.pupitre[i - 1].symbole;
                plateau[9][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[9][18].symbole = J.pupitre[i - 1].symbole;
                plateau[9][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[9][19].symbole = J.pupitre[i - 1].symbole;
                plateau[9][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[9][20].symbole = J.pupitre[i - 1].symbole;
                plateau[9][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[9][21].symbole = J.pupitre[i - 1].symbole;
                plateau[9][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[9][22].symbole = J.pupitre[i - 1].symbole;
                plateau[9][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[9][23].symbole = J.pupitre[i - 1].symbole;
                plateau[9][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[9][24].symbole = J.pupitre[i - 1].symbole;
                plateau[9][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[9][25].symbole = J.pupitre[i - 1].symbole;
                plateau[9][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 11:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[10][0].symbole = J.pupitre[i - 1].symbole;
                plateau[10][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[10][1].symbole = J.pupitre[i - 1].symbole;
                plateau[10][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[10][2].symbole = J.pupitre[i - 1].symbole;
                plateau[10][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[10][3].symbole = J.pupitre[i - 1].symbole;
                plateau[10][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[10][4].symbole = J.pupitre[i - 1].symbole;
                plateau[10][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[10][5].symbole = J.pupitre[i - 1].symbole;
                plateau[10][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[10][6].symbole = J.pupitre[i - 1].symbole;
                plateau[10][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[10][7].symbole = J.pupitre[i - 1].symbole;
                plateau[10][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[10][8].symbole = J.pupitre[i - 1].symbole;
                plateau[10][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[10][9].symbole = J.pupitre[i - 1].symbole;
                plateau[10][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[10][10].symbole = J.pupitre[i - 1].symbole;
                plateau[10][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[10][11].symbole = J.pupitre[i - 1].symbole;
                plateau[10][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[10][12].symbole = J.pupitre[i - 1].symbole;
                plateau[10][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[10][13].symbole = J.pupitre[i - 1].symbole;
                plateau[10][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[10][14].symbole = J.pupitre[i - 1].symbole;
                plateau[10][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[10][15].symbole = J.pupitre[i - 1].symbole;
                plateau[10][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[10][16].symbole = J.pupitre[i - 1].symbole;
                plateau[10][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[10][17].symbole = J.pupitre[i - 1].symbole;
                plateau[10][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[10][18].symbole = J.pupitre[i - 1].symbole;
                plateau[10][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[10][19].symbole = J.pupitre[i - 1].symbole;
                plateau[10][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[10][20].symbole = J.pupitre[i - 1].symbole;
                plateau[10][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[10][21].symbole = J.pupitre[i - 1].symbole;
                plateau[10][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[10][22].symbole = J.pupitre[i - 1].symbole;
                plateau[10][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[10][23].symbole = J.pupitre[i - 1].symbole;
                plateau[10][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[10][24].symbole = J.pupitre[i - 1].symbole;
                plateau[10][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[10][25].symbole = J.pupitre[i - 1].symbole;
                plateau[10][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
        case 12:
            printf("rentrer la colonne : ");
            scanf(" %c", &b);
            if (b == 'a') {
                plateau[11][0].symbole = J.pupitre[i - 1].symbole;
                plateau[11][0].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'b') {
                plateau[11][1].symbole = J.pupitre[i - 1].symbole;
                plateau[11][1].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'c') {
                plateau[11][2].symbole = J.pupitre[i - 1].symbole;
                plateau[11][2].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'd') {
                plateau[11][3].symbole = J.pupitre[i - 1].symbole;
                plateau[11][3].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'e') {
                plateau[11][4].symbole = J.pupitre[i - 1].symbole;
                plateau[11][4].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'f') {
                plateau[11][5].symbole = J.pupitre[i - 1].symbole;
                plateau[11][5].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'g') {
                plateau[11][6].symbole = J.pupitre[i - 1].symbole;
                plateau[11][6].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'h') {
                plateau[11][7].symbole = J.pupitre[i - 1].symbole;
                plateau[11][7].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'i') {
                plateau[11][8].symbole = J.pupitre[i - 1].symbole;
                plateau[11][8].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'j') {
                plateau[11][9].symbole = J.pupitre[i - 1].symbole;
                plateau[11][9].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'k') {
                plateau[11][10].symbole = J.pupitre[i - 1].symbole;
                plateau[11][10].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'l') {
                plateau[11][11].symbole = J.pupitre[i - 1].symbole;
                plateau[11][11].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'm') {
                plateau[11][12].symbole = J.pupitre[i - 1].symbole;
                plateau[11][12].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'n') {
                plateau[11][13].symbole = J.pupitre[i - 1].symbole;
                plateau[11][13].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'o') {
                plateau[11][14].symbole = J.pupitre[i - 1].symbole;
                plateau[11][14].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'p') {
                plateau[11][15].symbole = J.pupitre[i - 1].symbole;
                plateau[11][15].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'q') {
                plateau[11][16].symbole = J.pupitre[i - 1].symbole;
                plateau[11][16].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'r') {
                plateau[11][17].symbole = J.pupitre[i - 1].symbole;
                plateau[11][17].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 's') {
                plateau[11][18].symbole = J.pupitre[i - 1].symbole;
                plateau[11][18].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 't') {
                plateau[11][19].symbole = J.pupitre[i - 1].symbole;
                plateau[11][19].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'u') {
                plateau[11][20].symbole = J.pupitre[i - 1].symbole;
                plateau[11][20].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'v') {
                plateau[11][21].symbole = J.pupitre[i - 1].symbole;
                plateau[11][21].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'w') {
                plateau[11][22].symbole = J.pupitre[i - 1].symbole;
                plateau[11][22].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'x') {
                plateau[11][23].symbole = J.pupitre[i - 1].symbole;
                plateau[11][23].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'y') {
                plateau[11][24].symbole = J.pupitre[i - 1].symbole;
                plateau[11][24].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            } else if (b == 'z') {
                plateau[11][25].symbole = J.pupitre[i - 1].symbole;
                plateau[11][25].couleur = J.pupitre[i - 1].couleur;
                J.pupitre[i - 1].symbole = 0;
                J.pupitre[i - 1].couleur = 0;
                return J;
            }
            break;
    }
    printf("\n");
}


void Couleur(Joueur  J,int i){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    switch(J.pupitre[i].couleur){
        case 1 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            break;

        case 2 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            break;

        case 3 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            break;

        case 4 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            break;

        case 5 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED);
            break;

        case 6 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
            break;

        default :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
            break;
    }
}

void CouleurCase(Tuile plateau[12][26],int i,int j){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    switch(plateau[i][j].couleur){
        case 1 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            break;

        case 2 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
            break;

        case 3 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            break;

        case 4 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            break;

        case 5 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED);
            break;

        case 6 :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);
            break;

        default :
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
            break;
    }
}