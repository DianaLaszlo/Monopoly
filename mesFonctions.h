//
// Created by maxim on 08/12/2021.
//

#ifndef TEST_MONOPOLY_FONCTIONS_H
#define TEST_MONOPOLY_FONCTIONS_H

typedef struct{
    int nbrCase ;
    int positionX;
    int positionY;
    char* nomCase[100];
    int prix;
    int nbrMaison;
    int nbrHotel;
}Cases;

typedef struct{
    char* nomJoueur[100];
    int argentJoueur;
    int numeroJoueur;
    int propriete;
    int caseJoueur;
}Joueurs;


void afficherCases( Cases* tabCases, int posotion);

Cases* infoCases();


#endif //TEST_MONOPOLY_FONCTIONS_H
