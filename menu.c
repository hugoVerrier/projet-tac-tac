//
// Created by clsan on 25.01.2023.
//
#include "commun.h"

void display_menu(Joueur Tabj[4],Tuile plateau[12][26],Tuile Deck[NORMAL],Tuile DeckD[DEGRADE],int choix) {
    int choix2;
    int partie_terminee = 0;
    int nb_players;
    do {
        printf("Menu:\n");
        printf("1. Debuter une nouvelle partie\n");
        printf("2. Sauvegarder une partie\n");
        printf("3. Regles du jeu\n");
        printf("4. Tableau des scores\n");
        printf("5. Credits\n");
        printf("6. Quitter le jeu\n");
        printf("Entrez votre choix :\n");
        scanf("%d", &choix2);
        switch (choix2) {
            case 1:
                printf("Entrer le nombre de joueurs dans la partie ( entre 2 et 4) :\n");
                scanf("%d", &nb_players);
                if (nb_players < 2 || nb_players > 4){
                    printf("Le nombre de joueurs doit etre compris entre 2 et 4\n");
                }
                //affichage de l'état du plateau
                Tuile plateau[12][26];
                initialiserPlateau(plateau);
                JeuProjet(Tabj,plateau,Deck,DeckD,choix);
                break;
            case 2:
                //sauvegarder_une_partie();
                break;
            case 3:
                //regles_du_jeu();
                break;
            case 4:

                for (int i = 0; i < nb_players; ++i) {
                    Joueur joueurs[nb_players];
                    printf("Entrez le nom du joueur %d : ", i + 1);
                    scanf("%s", joueurs[i].nom);
                    printf("Entrez le score du joueur %d : ", i + 1);
                    scanf("%d", &joueurs[i].score);
                }
                Joueur joueurs;
                tableau_des_scores;
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
    } while (choix2 != 6);
}
// lire le choix de l'utilisateur
int get_menu_choice(void) {
    int choice;
    scanf("%d", &choice);
    return choice;
}

void debuter_une_nouvelle_partie(){
    int nb_joueurs;
    // demande du nombre de joueurs
    printf("Entrez le nombre de joueurs (2 a 4) :\n");
    scanf("%d", &nb_joueurs);
}
void sauvegarder_une_partie(){

}

void regles_du_jeu(){
    printf("QWIRKLE est un jeu tactique d'association et de logique."
           "\n----------------------------------------------------------\n");
    printf("Il se joue de 2 a 4 joueurs\n"
           "chaque joueur dispose de 6 tuiles.\n"
           "Chacun leur tour, les joueurs placent un maximum de tuiles sur une seule lignes avec un caractere commun :\n"
           "La couleur ou la forme.\n"
           "A chaque tour on marque les points des lignes que l'on a complete. l'astuce consiste a placer ses pieces,\n"
           "a des endroits strategiques, comme par exemple des intersections, pour marquer un maximum de points.\n"
           "                                                                                                      "
           "Il existe 2 modes de jeu:\n");
    printf("Mode normal:\n---------\n");
    printf("108 tuiles pour 6 formes et 6 couleurs.\n"
           "Chaque forme est donc presente 3 fois dans une meme couleur dans la pioche\n");
    printf("                                                                                                          ");
    printf("Mode degrade:\n-----------\n");
    printf("36 tuiles pour 6 formes et 6 couleurs"
           "Chaque forme n est presente qu une fois dans une meme couleur dans la pioche\n");
    printf("                                                                                                           ");
    printf("On peut echanger tout ou une partie de sa main\n"
           "contre differentes tuiles de la reserve, et passer son tour( sans joueur de tuiles)\n"
           "Quand vous creez une ligne, vous marquez 1 point pour chque tuile presente dans la ligne.\n"
           "Quand vous ajoutez une tuile a une ligne existante, vous marquez 1 point pour chaque tuile de cette ligne\n"
           "y compris les tuiles qui se trouvaient au prealable sur cette ligne.\n"
           "Une tuiles peut rapporter 2 points si elle appartient a deux lignes differentes "
           "Une ligne de six tuiles est appelee un Qwirkle (6 points supplementaire).\n"
           "Le joueur qui obtient le plus de points en fin de paties est le gagnant.\n");
}

void tableau_des_scores(Joueur joueurs[], int nb_players) {
    FILE *file = fopen("scores.txt", "a");
    for (int i = 0; i < nb_players; ++i) {
        fprintf(file, "%s %d\n", joueurs[i].nom, joueurs[i].score);
    }
    fclose(file);
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

