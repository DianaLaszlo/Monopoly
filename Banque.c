//
// Created by nathm on 17/11/2021.
//
#include <string.h>
#include "stdlib.h"
#include <stdio.h>


float payementBanque(float banqueJoueur,float somme){
    float argentBanque=10000000;
    printf("Le joueur doit recuperer %f\n",somme);
    banqueJoueur+=somme;
    argentBanque-=somme;
    printf("Le joueur a maintenant %f moula\n",banqueJoueur);
    return banqueJoueur;
}

float passageCaseDepart(float banqueJoueur){
     printf("Passage par la case depart : +300\n");
    payementBanque(banqueJoueur,300);
    return banqueJoueur;
}

float payementJoueur(float banqueJoueur,float somme){
    int argentBanque=100000000;
    if(banqueJoueur-somme<0){
        int n=0;
        printf("\nPas assez d'argent\nPouvez-vous vendre des proprieter ?[1] oui  [0] non.\n.\n.\n.\n");
        scanf("%d",&n);
        if(n=0){
            printf("Game over ! Le joueur est eliminé");
        } else if((n)=1){
            printf("Veuiller vendre vos proprieter !");
        }else{
            printf("Erreur");
        }

    }else{
        banqueJoueur-=somme;
        printf("Le joueur possede %f",somme);
    }
    return banqueJoueur;
}
