//
// Created by Laszlo Diana on 05/12/2021.
//

#ifndef PARTIEMONOP_MESSTRUCTURES_H
#define PARTIEMONOP_MESSTRUCTURES_H

typedef struct {
    int numero;
    char nom[50];
    int argent;
    char proprietes[100];
    int position;
} Joueurs;

typedef struct {
    int nbrCase;
    int positionX;
    int positionY;
    char* nomCase[100];
    int prix;
    int nbrMaison;
    int nbrHotel;
}Cases;

#endif //PARTIEMONOP_MESSTRUCTURES_H

