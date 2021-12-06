//
// Created by nathm on 06/12/2021.
//
#include <stdio.h>
#include <stdlib.h>


int payementJoueur(int joueur,int banque){
    return 0;
}

int lancerDe() {
    int d=0;
    printf("Lancement du de\n");
    d=rand()%(7-1)+1;
    return d;
}
int deplacement(int D1){
    return D1;
}

int prison(int joueur,int banque) {
    int n=0;
    int D1=0;
    int D2=0;
    printf("**Siflet** Vous etes en prison maintenant!\n Que voulez vous faire ?(1)Payer (2)Lancer les des ?\n");
    scanf("%d",&n);
    if (n==1 && joueur>300000){
        payementJoueur(joueur,300000);
        printf("Transfert de 300000 a la banque");
        printf("Vous avez payer.\nVeuillez lancer les des ! ");
        D1=lancerDe();
        D2=lancerDe();
        printf("%d %d\n",D1,D2);
        printf("Vous vous deplacer de %d",D1+D2);
    }else if(n==2 || joueur<300000){
        D1=lancerDe();
        D2=lancerDe();
        printf("%d %d\n",D1,D2);
        if(D1==D2){
            printf("Vous pouvez sortir de prison");
            deplacement(D1);
            deplacement(D1);
        }else{
            printf("Reessayer au prochain tour =)");
        }
    }
    return 0;
}

