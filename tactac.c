//
// Created by Tom Raviot on 25/01/2023.
//

#include "tactac.h"
#include <stdio.h>
#include <stdlib.h>


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

void JeuProjet(){
    int ModeDeJeu=0, nbcase;
    Tuile Deck[NORMAL]={0};
    Tuile DeckD[DEGRADE]={0};
    printf("Mode de Jeu ? (1 : degrade sinon normal)\n");
    scanf(" %d",&ModeDeJeu);
    if(ModeDeJeu==1){
        nbcase = 36;}
    else {
        nbcase=108;
    }
    creationPioches(nbcase,Deck,ModeDeJeu,DeckD);
    afficheTab(nbcase,Deck,ModeDeJeu,DeckD);
}

void afficheTab(int nbcase, Tuile Deck[NORMAL],int ModeDeJeu, Tuile DeckD[DEGRADE]) {
    if (ModeDeJeu == 1) {
        for (int i = 0; i < nbcase; i++) {

            if ((i % 6 == 0) && (i != 0)) {
                printf("\n");
            }
            printf(" %d", DeckD[i].symbole);
        }
    }
    else {
        for (int i = 0; i < nbcase; i++) {
            if ((i % 18 == 0) && (i != 0)) {
                printf("\n");
            }
            printf(" %d", Deck[i].symbole);
        }
    }
}


//void verif(int x,int y, Tuile plateau[26][12],Tuile test){
//    if(plateau[x][y].symbole==0){
//        if( (plateau[x-1][y.symbole]==0) && (plateau[x+1][y].symbole==0) && plateau[x][y+1].symbole==0) && (plateau[x][y-1]==0)){
//        plateau[x][y]=test;
//        }else if()
//    }
//}

