//
// Created by clsan on 25.01.2023.
//

#include "menu.h"
#include <stdio.h>
#include <stdlib.h>


void display_menu(void){
// afficher le menu
    printf("\nMenu:\n");
    printf("1. Nouvelle partie\n");
    printf("2. Regles du jeu\n");
    printf("3. Credits\n");
    printf("4. Quitter le jeu \n");
    printf("Entrez votre choix : ");
}

// lire le choix de l'utilisateur
int get_menu_choice(void) {
    int choice;
    scanf("%d", &choice);
    return choice;
}

void debuter_une_nouvelle_partie() {
    int mode_de_jeu;
    int nb_joueurs;
    printf("En quel mode voulez\x2dvous jouer ? (degrade ou normal) \n");
    scanf("%d", mode_de_jeu);
    // demande du nombre de joueurs
    printf("Entrez le nombre de joueurs (2 a 4) :\n");
    scanf("%d", &nb_joueurs);
}
void sauvegarder_une_partie(){

}

void regles_du_jeu(){
    printf("Mise en place\n"
           "Chaque joueur doit se munir d une feuille de papier et d un crayon pour noter ses points.\n"
           "Placez toutes les tuiles dans le sac.\n"
           "A tour de role, chacun va piocher 6 tuiles.\n"
           "Les tuiles piochees forment la main et sont placees face cachee devant chaque joueur.\n"
           "Le reste des tuiles forme la reserve.\n"
           "Avant de commencer...\n"
           "Chacun etudie sa main.\n"
           "Chacun compte les tuiles de sa main qui presentent une caracteristique commune : couleur Tuile couleur Qwirkle ou symbole Tuile symbole Qwirkle.\n"
           "Attention ! Les tuiles identiques, meme symbole et meme couleur, ne comptent pas Tuile identique Qwirkle.\n"
           "Le joueur qui a trouve le plus de tuiles commence ; il pose ses tuiles, face visible, devant lui et pioche dans le sac pour ramener sa main a 6.\n"
           "Jouez dans le sens des aiguilles d une montre.\n"
           "Comment se deroule un tour ?\n"
           "A son tour de jeu, le joueur peut realiser une des actions suivantes :\n"
           "\x2d Ajouter une tuile a une ligne et piocher dans la reserve,\n"
           "\x2d Ajouter 2 ou plusieurs tuiles de meme caracteristique a une ligne et piochez dans la reserve,\n"
           "\x2d Echanger une partie ou la totalite des tuiles de sa main contre des tuiles de la reserve et passer son tour.\n"
           "Ajouter une ou plusieurs tuiles\n"
           "Les tuiles posees doivent continuer la ligne existante.\n"
           "Le joueur a le choix entre creer une ligne de forme Ligne jeu Qwirkle ou creer une ligne de couleur Ligne couleur Qwirkle.\n"
           "Deux tuiles adjacentes doivent avoir un point commun Tuiles adjacentes Qwirkle. \n"
           "Ligne de couleur\n"
           "Une ligne de couleur ne peut etre composee que des 6 symboles differents.\n"
           "Ainsi, 1 symbole ne peut pas se repeter dans la meme ligne.\n"
           "Ligne de symbole\n"
           "Une ligne de symbole ne peut etre composee que des 6 couleurs differentes.\n"
           "1 couleur ne peut pas se repeter dans la meme ligne.\n"
           "Echanger une partie ou la totalite de ses tuiles\n"
           "Il est possible d’echanger une partie ou la totalite de ses tuiles contre les tuiles la reserve si :\n"
           " Le joueur ne peut pas jouer.\n"
           "\x2d Le joueur ne veut pas jouer.\n"
           "Les tuiles a echanger sont mises de cote.\n"
           "Le joueur pioche le meme nombre de tuiles dans la reserve.\n"
           "Les tuiles a echanger sont remises dans la reserve.\n"
           "Le joueur passe son tour.\n"
           "Calcul des points\n"
           "Quand un joueur cree ou complete une ligne, il gagne 1 point pour chaque tuile composant la ligne.\n"
           "Tuile couleur Qwirkle = 3 points\n"
           "\n"
           "Quand la tuile d un joueur permet de creer 2 lignes, celle-ci lui rapporte 2 points.\n"
           "Tuiles adjacentes Qwirkle = 3 points + 2 points (carre rouge) + 2 points\n"
           "\n"
           "Quand un joueur arrive à creer une ligne couleur de 6 symboles differents ou une ligne symbole de 6 couleurs differentes, il forme un Qwirkle et gagne 6 points supplementaires.\n"
           "Le joueur qui joue toute ses tuiles gagne 6 points.\n"
           "Fin de la partie\n"
           "Quand la reserve est epuisee, les joueurs continuent a jouer.\n"
           "La partie prend fin dans les 2 cas suivants :\n"
           "\x2d Un joueur a joue toutes ses tuiles ; il marque 6 points supplementaires.\n"
           "\x2d Aucun joueur ne peut jouer ses tuiles ; personne ne marque 6 points supplementaires.\n"
           "Le joueur qui a recolte le maximum de points est declare vainqueur.");
}

void credits (){
    // afficher les credits du jeu
    printf("Voici les credits du jeu :\n");
    printf("- Developpeur : Tom, Hugo, Alexi\n");
}

void quitter_le_jeu(){
    // quitter le jeu
    exit(0);
}

