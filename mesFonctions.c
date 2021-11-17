//
// Created by Laszlo Diana on 17/11/2021.
//

#include "mesFonctions.h"
#include "mesStructures.h"
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

void saisieDesJoueurs(){
    int nbDeJoueurs=0;
    int flush=0;
    Joueurs unJoueur;
    printf("Combien de joueurs vont jouer cette partie ? \n");
    scanf("%d",&nbDeJoueurs);
    for (int i=1; i<=nbDeJoueurs; i++){
        printf("Saisissez le NOM du joueur %d \n",i);
        scanf("%d",&flush);
        scanf("%s",&unJoueur.nom);
        printf("%s vous aurez le numéro %d ! \n\n",unJoueur.nom,i);
        unJoueur.numero=i;
    }
    return;
}

void affichageParametresJoueurs(){
    for (int i=0; i<=);
    printf();
