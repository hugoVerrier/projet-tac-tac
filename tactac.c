//
// Created by Tom Raviot on 25/01/2023.
//

#include "commun.h"

void creationPioches(int nbcase,Tuile Deck[108],int ModeDeJeu,Tuile DeckD[36]){
    if(ModeDeJeu==1){
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 6; ++j) {
                DeckD[i*6+j].couleur=j+1;
                DeckD[i*6+j].symbole=j+1;
            }
        }
    }
    else{
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 6; ++j) {
                for (int k = 0; k < 6; ++k) {
                    Deck[i*36+j*6+k].couleur=j+1;
                    Deck[i*36+j*6+k].symbole=j+1;
                }
            }
        }
    }
    MelangeTab(nbcase,Deck,ModeDeJeu,DeckD);
}

void MelangeTab(int nbcase, Tuile Deck[NORMAL],int ModeDeJeu, Tuile DeckD[DEGRADE]){
    if(ModeDeJeu==1){
        for (int i = nbcase - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            Tuile temp = DeckD[i];
            DeckD[i] = DeckD[j];
            DeckD[j] = temp;
        }
    }else {
        for (int i = nbcase - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            Tuile temp = Deck[i];
            Deck[i] = Deck[j];
            Deck[j] = temp;
        }
    }
}

void JeuProjet(Joueur TabJoueur[4],Tuile plateau[12][26],Tuile Deck[NORMAL],Tuile DeckD[DEGRADE],int choix){
    int ModeDeJeu=0, nbcase,nbjoueur=3;
    int fin = FALSE;
    Tuile test={0};
    printf("Mode de Jeu ? (1 : degrade sinon normal)\n");
    scanf(" %d",&ModeDeJeu);
    if(ModeDeJeu==1){
        nbcase = 36;}
    else {
        nbcase=108;
    }
    creationPioches(nbcase,Deck,ModeDeJeu,DeckD);
    DistributionTuiles(TabJoueur,Deck,DeckD,nbjoueur,ModeDeJeu);
//    afficheTab(nbcase,Deck,ModeDeJeu,DeckD);
    afficherPlateau(plateau, TabJoueur, choix);
    while(!fin) {
        choix = ChoixCase(TabJoueur[0], choix);
        coordonnes(plateau, TabJoueur[0], choix);
//        printf(" %d %d",(int)TabJoueur[0].pupitre[0].symbole,(int)TabJoueur[0].pupitre[0].couleur);
        RendreCartes(TabJoueur, Deck, DeckD, choix);
        afficherPlateau(plateau, TabJoueur, choix);
        if((DeckD[0].symbole==0)&&(DeckD[0].couleur==0)){
            fin = TRUE;
        }
    }
}

void RendreCartes(Joueur tabJ[4],Tuile Deck[NORMAL], Tuile DeckD[DEGRADE], int j){
    int i=0;
    while(DeckD[i].symbole!=0) {
        if(tabJ[j].pupitre->symbole==0){
          tabJ[j].pupitre->symbole=DeckD[i].symbole;
          tabJ[j].pupitre->couleur=DeckD[i].couleur;
        }
        i--;
    }
}



void afficheTab(int nbcase, Tuile Deck[NORMAL],int ModeDeJeu, Tuile DeckD[DEGRADE]) {
    if (ModeDeJeu == 1) {
        for (int i = 0; i < nbcase; i++) {

            if ((i % 6 == 0) && (i != 0)) {
                printf("\n");
            }
            printf(" %d", DeckD[i].couleur);
        }
    }
    else {
        for (int i = 0; i < nbcase; i++) {
            if ((i % 18 == 0) && (i != 0)) {
                printf("\n");
            }
            printf(" %d", Deck[i].couleur);
        }
    }
}

int ChoixCase(Joueur J, int choix){
    printf(" quelle cartes voulez vous jouez (taper 1 numero de la tuile du J1)\n");
    scanf(" %d", &choix);
    return choix;
}


void DistributionTuiles(Joueur tab[4], Tuile Deck[108], Tuile DeckD[36],int nbjoueur, int ModeDeJeu){
    if(ModeDeJeu==1){
        for (int i = 0; i < 6; ++i) {
            tab[0].pupitre[i].symbole=DeckD[35-i].symbole;
            tab[0].pupitre[i].couleur=DeckD[35-i].couleur;
            tab[1].pupitre[i].symbole=DeckD[35-(i+6)].symbole;
            tab[1].pupitre[i].couleur=DeckD[35-(i+6)].couleur;
            if(nbjoueur>2){
                tab[2].pupitre[i].symbole=DeckD[35-(i+12)].symbole;
                tab[2].pupitre[i].couleur=DeckD[35-(i+12)].couleur;
                if(nbjoueur>4){
                    tab[3].pupitre[i].symbole=DeckD[35-(i+18)].symbole;
                    tab[3].pupitre[i].couleur=DeckD[35-(i+18)].couleur;
                }
            }
        }
    }
    else{
        for (int i = 0; i < 6; ++i) {
            tab[0].pupitre[i].symbole=Deck[107-i].symbole;
            tab[0].pupitre[i].couleur=Deck[107-i].couleur;
            tab[1].pupitre[i].symbole=Deck[107-(i+6)].symbole;
            tab[1].pupitre[i].couleur=Deck[107-(i+6)].couleur;
            if(nbjoueur>2){
                tab[2].pupitre[i].symbole=Deck[107-(i+12)].symbole;
                tab[2].pupitre[i].couleur=Deck[107-(i+12)].couleur;
                if(nbjoueur>4){
                    tab[3].pupitre[i].symbole=Deck[107-(i+18)].symbole;
                    tab[3].pupitre[i].couleur=Deck[107-(i+18)].couleur;
                }
            }
        }
    }
}


//int verif(int x,int y, Tuile plateau[26][12],Tuile test){
//    if(plateau[x][y].symbole==0){
//        if( (plateau[x-1][y].symbole==0) && (plateau[x+1][y].symbole==0) && (plateau[x][y+1].symbole==0) && (plateau[x][y-1].symbole==0)){
//        plateau[x][y]=test;
//        }else if((plateau[x-1][y].symbole!=0)){
////            if((e)&&(plateau[x-1][y].couleur!=test.couleur)){
////                if((plateau[x-2][y].symbole==test.symbole)&&(plateau[x-2][y].couleur!=test.couleur)&&(plateau[x-2][y].symbole==plateau[x-1][y].symbole)){
////                    if((plateau[x-3][y].symbole==test.symbole)&&(plateau[x-3][y].couleur!=test.couleur)&&(plateau[x-2][y].symbole==plateau[x-1][y].symbole)&&(plateau[x-3][y].symbole==plateau[x-2][y].symbole)){
////                        if((plateau[x-4][y].symbole==test.symbole)&&(plateau[x-4][y].couleur!=test.couleur)&&(plateau[x-2][y].symbole==plateau[x-1][y].symbole))){
//                            for (int i = 0; i < 5; ++i) {
//                                for (int j = 0; j < 5; ++j) {
//                                    if(plateau[x-i][y].couleur==plateau[j][y].couleur){
//                                        if(plateau[x-i][y].symbole!=plateau[j][y].symbole){
//                                            return 1;
//                                        }
//                                    }
////                                }
////                            }
////                        }
////                    }
//                }
//            }
//        }
//    }
//}

