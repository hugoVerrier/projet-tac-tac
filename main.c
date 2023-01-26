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
#include <windows.h>



int main() {
    display_menu();
    Tuile plateau[12][26];
    Tuile test;
    initialiserPlateau(plateau);
    coordonnes(plateau,test);
    afficherPlateau(plateau);
    int forme = 155;
    printf(" %c",forme);

    printf("%c",4);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    printf("This text has a red background!");


    return 0;

}


