//
// Created by Laszlo Diana on 17/11/2021.
//

#include "mesFonctions.h"

#include "stdio.h"

void debutDePartie(){
    int demarrerUnePartie=0;
    printf("Voulez vous démarrer une partie de Monopoly ? Si oui tapez 1, si non tapez 0 :) \n");
    scanf("%d",&demarrerUnePartie);
    if (demarrerUnePartie==0){
        printf("Merci, au revoir !");
    }
    else{
        printf("-----Bienvenu au Monopoly !-----\n\n");
    }
    return;
}