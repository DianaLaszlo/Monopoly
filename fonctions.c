//
// Created by maxim on 08/12/2021.
//

#include "fonctions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define COLONNES 9
#define LIGNES 9
#define MIN 1
#define MAX 6
#define MAX_NOM 100
#define TAILLE_MAX 1000


/*----------------------------------------Cases----------------------------------------------*/
Cases* infoCases(){
    Cases* tabCases = (Cases*)malloc(33*sizeof(Cases));

    for(int i = 1; i <= 33; i++){
        switch(i){
            case 1:{

                tabCases[i].nbrCase = i;
                strcpy((tabCases[i]).nomCase,"Case depart");
                tabCases[i].positionX = 0;
                tabCases[i].positionY = 0;
                tabCases[i].prix = 0;
                break;}

            case 2:{
                tabCases[i].nbrCase = i;
                strcpy((tabCases[i].nomCase),"Avenue du Plateau");
                tabCases[2].positionX = 1;
                tabCases[2].positionY = 0;
                tabCases[2].nbrMaison = 0;
                tabCases[2].nbrHotel = 0;
                tabCases[2].prix = 100;
                tabCases[i].prixMaison = 50;
                break;}

            case 3:
                tabCases[3].nbrCase = i;
                strcpy((tabCases[3]).nomCase,"Taxe : payer 100");
                tabCases[3].positionX = 2;
                tabCases[3].positionY = 0;
                break;

            case 4:
                tabCases[4].nbrCase = i;
                strcpy((tabCases[4]).nomCase,"Avenue Rosa Parks");
                tabCases[4].positionX = 3;
                tabCases[4].positionY = 0;
                tabCases[4].nbrMaison = 0;
                tabCases[4].nbrHotel = 0;
                tabCases[4].prix = 150;
                tabCases[i].prixMaison = 50;
                break;

            case 5:
                tabCases[5].nbrCase = i;
                strcpy((tabCases[5]).nomCase,"Metro, allez a la case 13");
                tabCases[5].positionX = 4;
                tabCases[5].positionY = 0;
                tabCases[5].prix = 0;
                break;

            case 6:
                tabCases[6].nbrCase = i;
                strcpy((tabCases[6]).nomCase,"route de Vienne");
                tabCases[6].positionX = 5;
                tabCases[6].positionY = 0;
                tabCases[6].nbrMaison = 0;
                tabCases[6].nbrHotel = 0;
                tabCases[6].prix = 150;
                tabCases[i].prixMaison = 50;
                break;

            case 7:
                tabCases[7].nbrCase = i;
                strcpy((tabCases[7]).nomCase,"carte commu");
                tabCases[7].positionX = 6;
                tabCases[7].positionY = 0;
                break;

            case 8:
                tabCases[8].nbrCase = i;
                strcpy((tabCases[8]).nomCase,"rue de Bruxelles");
                tabCases[8].positionX = 7;
                tabCases[8].positionY = 0;
                tabCases[8].nbrMaison = 0;
                tabCases[8].nbrHotel = 0;
                tabCases[8].prix = 200;
                tabCases[i].prixMaison = 50;
                break;

            case 9:
                tabCases[9].nbrCase = i;
                strcpy((tabCases[9]).nomCase,"ZONZ");
                tabCases[9].positionX = 8;
                tabCases[9].positionY = 0;
                break;

            case 10:
                tabCases[10].nbrCase = i;
                strcpy((tabCases[10]).nomCase,"Grande rue de la Guillotière");
                tabCases[10].positionX = 8;
                tabCases[10].positionY = 1;
                tabCases[10].nbrMaison = 0;
                tabCases[10].nbrHotel = 0;
                tabCases[10].prix = 200;
                tabCases[i].prixMaison = 50;
                break;

            case 11:
                tabCases[11].nbrCase = i;
                strcpy((tabCases[11]).nomCase,"Impots : payer 100");
                tabCases[11].positionX = 8;
                tabCases[11].positionY = 2;
                break;

            case 12:
                tabCases[12].nbrCase = i;
                strcpy((tabCases[12]).nomCase,"rue de la Villette");
                tabCases[12].positionX = 8;
                tabCases[12].positionY = 3;
                tabCases[12].nbrMaison = 0;
                tabCases[12].nbrHotel = 0;
                tabCases[12].prix = 250;
                tabCases[i].prixMaison = 50;
                break;

            case 13:
                tabCases[13].nbrCase = i;
                strcpy((tabCases[13]).nomCase,"Metro : Aller a la case 21");
                tabCases[13].positionX = 8;
                tabCases[13].positionY = 4;
                break;

            case 14:
                tabCases[14].nbrCase = i;
                strcpy((tabCases[14]).nomCase,"Avenue Thiers");
                tabCases[14].positionX = 8;
                tabCases[14].positionY = 5;
                tabCases[14].nbrMaison = 0;
                tabCases[14].nbrHotel = 0;
                tabCases[14].prix = 250;
                tabCases[i].prixMaison = 50;
                break;

            case 15:
                tabCases[15].nbrCase = i;
                strcpy((tabCases[15]).nomCase,"Carte chance");
                tabCases[15].positionX = 8;
                tabCases[15].positionY = 6;
                break;

            case 16:
                tabCases[16].nbrCase = i;
                strcpy((tabCases[16]).nomCase,"Avenue Debourg");
                tabCases[16].positionX = 8;
                tabCases[16].positionY = 7;
                tabCases[16].nbrMaison = 0;
                tabCases[16].nbrHotel = 0;
                tabCases[16].prix = 300;
                tabCases[i].prixMaison = 50;
                break;

            case 17:
                tabCases[17].nbrCase = i;
                strcpy((tabCases[17]).nomCase,"Park gratuit");
                tabCases[17].positionX = 8;
                tabCases[17].positionY = 8;
                break;
            case 18:
                tabCases[18].nbrCase = i;
                strcpy((tabCases[18]).nomCase,"Boulevard des Belges");
                tabCases[18].positionX = 7;
                tabCases[18].positionY = 8;
                tabCases[18].nbrMaison = 0;
                tabCases[18].nbrHotel = 0;
                tabCases[18].prix = 300;
                tabCases[i].prixMaison = 50;
                break;
            case 19:
                tabCases[19].nbrCase = i;
                strcpy((tabCases[19]).nomCase,"Taxe : payer 200");
                tabCases[19].positionX = 6;
                tabCases[19].positionY = 8;
                break;
            case 20:
                tabCases[20].nbrCase = i;
                strcpy((tabCases[20]).nomCase,"rue de l universite");
                tabCases[20].positionX = 5;
                tabCases[20].positionY = 8;
                tabCases[20].nbrMaison = 0;
                tabCases[20].nbrHotel = 0;
                tabCases[20].prix = 350;
                tabCases[i].prixMaison = 50;
                break;
            case 21:
                tabCases[21].nbrCase = i;
                strcpy((tabCases[21]).nomCase,"Metro : Aller a la case 29");
                tabCases[21].positionX = 4;
                tabCases[21].positionY = 8;
                break;
            case 22:
                tabCases[22].nbrCase = i;
                strcpy((tabCases[22]).nomCase,"Avenue Jean Jaures");
                tabCases[22].positionX = 3;
                tabCases[22].positionY = 8;
                tabCases[22].nbrMaison = 0;
                tabCases[22].nbrHotel = 0;
                tabCases[22].prix = 350;
                tabCases[i].prixMaison = 50;
                break;
            case 23:
                tabCases[23].nbrCase = i;
                strcpy((tabCases[23]).nomCase,"Carte commu");
                tabCases[23].positionX = 2;
                tabCases[23].positionY = 8;
                break;
            case 24:
                tabCases[24].nbrCase = i;
                strcpy((tabCases[24]).nomCase,"rue de Marseille");
                tabCases[24].positionX = 1;
                tabCases[24].positionY = 8;
                tabCases[24].nbrMaison = 0;
                tabCases[24].nbrHotel = 0;
                tabCases[24].prix = 400;
                tabCases[i].prixMaison = 50;
                break;
            case 25:
                tabCases[25].nbrCase = i;
                strcpy((tabCases[25]).nomCase,"ALLER EN PRISON");
                tabCases[25].positionX = 0;
                tabCases[25].positionY = 8;
                break;
            case 26:
                tabCases[26].nbrCase = i;
                strcpy((tabCases[26]).nomCase,"place des terreaux");
                tabCases[26].positionX = 0;
                tabCases[26].positionY = 7;
                tabCases[26].nbrMaison = 0;
                tabCases[26].nbrHotel = 0;
                tabCases[26].prix = 400;
                tabCases[i].prixMaison = 50;
                break;
            case 27:
                tabCases[27].nbrCase = i;
                strcpy((tabCases[27]).nomCase,"50 balles par terre, prenez les ");
                tabCases[27].positionX = 0;
                tabCases[27].positionY = 6;
                break;
            case 28:
                tabCases[28].nbrCase = i;
                strcpy((tabCases[28]).nomCase,"place Bellecour");
                tabCases[28].positionX = 0;
                tabCases[28].positionY = 5;
                tabCases[28].nbrMaison = 0;
                tabCases[28].nbrHotel = 0;
                tabCases[28].prix = 450;
                tabCases[i].prixMaison = 50;
                break;
            case 29:
                tabCases[29].nbrCase = i;
                strcpy((tabCases[29]).nomCase,"Metro : Aller a la case 5");
                tabCases[29].positionX = 0;
                tabCases[29].positionY = 4;
                break;
            case 30:
                tabCases[30].nbrCase = i;
                strcpy((tabCases[30]).nomCase,"rue de la République");
                tabCases[30].positionX = 0;
                tabCases[30].positionY = 3;
                tabCases[30].nbrMaison = 0;
                tabCases[30].nbrHotel = 0;
                tabCases[30].prix = 450;
                tabCases[i].prixMaison = 50;
                break;
            case 31:
                tabCases[31].nbrCase = i;
                strcpy((tabCases[31]).nomCase,"Carte chance !");
                tabCases[31].positionX = 0;
                tabCases[31].positionY = 2;
                break;
            case 32:
                tabCases[32].nbrCase = i;
                strcpy((tabCases[32]).nomCase,"rue Garibaldi");
                tabCases[32].positionX = 0;
                tabCases[32].positionY = 1;
                tabCases[32].nbrMaison = 0;
                tabCases[32].nbrHotel = 0;
                tabCases[32].prix = 500;
                tabCases[i].prixMaison = 50;
                break;

            default :
                break;

        }
    }
    return tabCases;
}


void afficherCases( Cases* tabCases, int position){

    if (tabCases[position].nbrCase == position){

        printf("Cette case represente : %s\n",tabCases[position].nomCase);
        printf("Cette case porte le numero %d\n",tabCases[position].nbrCase);
        printf("Il y a %d maison(s) et %d hotel(s) sur cette case\n",tabCases[position].nbrMaison,tabCases[position].nbrHotel);
    }
    return;
}

/* Fin de tour */

void finDeTour(Joueurs){
    Joueurs joueur;
    Joueurs* list = NULL;
    list->next = NULL;
    list->next = (Joueurs*)malloc(sizeof(joueur));
}

/*-------------------------------------Boucle Partie----------------------------------------*/

void bouclepartie(int nombreJoueur){
    int i=0;
    Banque banque;
    Joueurs joueur;
    prop p;
    Cases cases;
    int choix=0;
    int d1=0;
    int d2=0;
    int random=0;
    int *pD1=0;
    int *pD2=0;
    int *posX=0;
    int *posY=0;
    while(nombreJoueur>1){
        printf("***********Joueur************\nA toi de jouer!");
        d1=lancerDe();
        d2=lancerDe();
        deplacement(pD1,pD2,posX,posY);//deplacement de d1 et d2
        impots(cases.nbrCase,p.numeroJoueur,joueur.argent,joueur.argent);
        printf("Vous etes arrivé sur une case que voulez-vous faire ?\n(1)achetez\n(2)vendre\n(3)negiciez\n(4)case carte chance ?\n(0)ne rien faire");
        scanf("%d", &choix);
        switch (choix) {
            case 1 :
                achatProprieter(joueur.argent,cases.prixMaison,p.prix,p.cases,p.niveau,banque.argent);
                //finDeTour(joueur.numero);
                break;
            case 2 :
                venteProprieter(joueur.numero,banque.argent,p.cases,p.numeroJoueur,joueur.argent);
                //finDeTour(joueur.numero);
                break;
            case 3 :
                negociation(joueur.numero,p.numeroJoueur,joueur.argent,joueur.argent/*j'ai essayé de pendre la banque du joueur voulu*/);
                //finDeTour(joueur.numero);
                break;
            case 4 :
                random=getRandomIntegerCartes();
                tirageCartesChance(random);
                break;
            case 0 :
                printf("Bien\nJoueur suivant!");
                //finDeTour(joueur.numero);
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un bon numero :\n");

                break;
            }
        }
        if (d1==d2){
            payementBanque(joueur.argent,banque.argent,d1*100);
            d1=lancerDe();
            d2=lancerDe();
            deplacement(pD1,pD2,posX,posY);//deplacement de d1 et d2
            impots(p.cases,p.numeroJoueur,joueur.argent,banque.argent);
            printf("Vous etes arrivé sur une case que voulez-vous faire ?\n(1)achetez\n(2)vendre\n(3)negiciez\n(0)ne rien faire");
            scanf("%d", &choix);
            switch (choix) {
                case 1 :
                    achatProprieter(joueur.argent,cases.prixMaison,p.prix,p.cases,p.niveau,banque.argent);
                    //finDeTour(joueur.numero);
                    break;
                case 2 :
                    venteProprieter(joueur.numero,banque.argent,p.cases,p.numeroJoueur,joueur.argent);
                    //finDeTour(joueur.numero);
                    break;
                case 3 :
                    negociation(joueur.numero,p.numeroJoueur,joueur.argent,joueur.argent/*j'ai essayé de pendre la banque du joueur voulu*/);
                    //finDeTour(joueur.numero);
                    break;
                case 0 :
                    printf("Bien\nJoueur suivant!");
                    //finDeTour(joueur.numero);
                    break;
                default : {
                    printf("Choix Invalide ! Veuillez selectionner un bon numero :\n");

                    break;
                }
            }
            if(d1==d2){
                printf("Vous avez fait 3 double a la suite.\nVous allez en prison.");
                prison(joueur.numero,banque.numero);//mise en prion du joueur actuel + son tour passe
                //finDeTour(joueur.numero);
            }else{
                printf("Joueur suivant!\n");
                //finDeTour(joueur.numero);
            }
        }else{
            printf("Joueur suivant!\n");
            //finDeTour(joueur.numero);
        }

    }
    printf("La partie est terminé!Ne pas en relancer meme si je pense que le code n'arrivera jamais jusque la\n");
}

/*--------------------------------Banque------------------------------------------- */

float payementBanque(float banqueJoueur,float argentBanque,float somme){
    printf("Le joueur doit recuperer %f\n a l'autre entité",somme);
    banqueJoueur+=somme;
    argentBanque-=somme;
    printf("Le joueur a maintenant %f moula\n",banqueJoueur);
    return banqueJoueur,argentBanque;
}

float passageCaseDepart(float joueur,float banque){
    printf("Passage par la case depart : +300\n");
    payementBanque(joueur,banque,300);
    return joueur;
}

float payementJoueur(float banqueJoueur,float argentBanque,float somme){
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
        payementBanque(banqueJoueur,argentBanque,somme);
        printf("Banque joueur donnant %f\nBanque joueur receveur %f",banqueJoueur,argentBanque);
    }
    return banqueJoueur;
}

/*--------------------------Deplacement----------------------------------*/

int deplacement(const int* pDe1, const int* pDe2, int* posX, int* posY){
    Joueurs joueur;
    int somme = (*pDe1)+(*pDe2);
    for (int k = 0; k < somme; k++){
        if (*posY == 0 && *posX < COLONNES){
            *posX += 1;

        }
        else if (*posX == COLONNES && *posY < LIGNES){
            *posY += 1; //!!!attention a ne pas passer 2 fois dans les angles
        }
        else if (*posX > 0 && *posX <= COLONNES && *posY == LIGNES){ //!!! peut etre *posY <= LIGNES
            *posX -= 1;
        }
        else if(*posY > 0 && *posY <= LIGNES && *posX == 0){ //!!! peut etre *posY <= LIGNES
            *posY -= 1;
        }
    }printf("Le joueur se situe en %d \t %d",*posX,*posY);
    return 0;
}

int lancerDe() {
    int d=0;
    printf("Lancement du de\n");
    d=rand()%(7-1)+1;
    return d;
}

void saisieDesJoueurs() {
    int nbDeJoueurs = 0;
    int flush = 0;
    Joueurs unJoueur;
    printf("Combien de joueurs vont jouer cette partie ? : ");
    scanf("%d", &nbDeJoueurs);
    if (testEntier(nbDeJoueurs) == 1) {
        for (int i = 1; i <= nbDeJoueurs; i++) {
            printf("Saisissez le NOM du joueur %d \n", i);
            scanf("%d", &flush);
            scanf("%s", &unJoueur.nom);
            printf("%s vous aurez le numéro %d ! \n\n", unJoueur.nom, i);
            unJoueur.numero = i;
        }}
    else {
        printf("Resaisir un nombre de joueurs ( entier positif svp ) :");
        scanf("%d",&flush);
        scanf("%d", &nbDeJoueurs);
        saisieDesJoueurs();
    }
    return;
}


void affichageParametresJoueurs() {
    for (int i = 0; i <=);
    printf();
                }


int testEntier(int entier) {
    if (scanf("%d", &entier) == 1) {
        printf("Test entier valide\n\n");
        return 1;
    }
    else {
        return 0;
    }

}

void afficherReglesJeu(){
    printf("Voici les relges du jeu :");
}


int getRandomIntegerCartes() {
    int random = 0, i = 0;
    srand(time(NULL));
    for (i = 0; i < 1; i++) {
        random = rand() % (10 - 1) + 1;
        printf("%d\n", random);
    }
    return random;
}

int tirageCartesChance(int random){
    char caractereActuel = 0;
    int ligne = 0;
    FILE* fichier = NULL;
    fichier = fopen("./chance.txt", "a+");
    if (fichier != NULL){
        while (ligne != random){
            ligne++;
            do{
                caractereActuel = fgetc(fichier);
                printf("%c", caractereActuel);
            }while (caractereActuel != '\n');
        }
        fclose(fichier);
    }
    else printf("Erreur!");
    return 0;
}

/*------------------------------------Prison--------------------------------------*/


int prison(float joueur,float banque) {
    int n=0;
    int D1=0;
    int D2=0;
    Joueurs joueurs;
    printf("Siflet Vous etes en prison maintenant!\n Que voulez vous faire ?(1)Payer (2)Lancer les des ?\n");
    scanf("%d",&n);
    if (n==1 && joueur>300){
        payementJoueur(joueur,banque,300);
        printf("Transfert de 300000 a la banque");
        printf("Vous avez payer.\nVeuillez lancer les des ! ");
        D1=lancerDe();
        D2=lancerDe();
        printf("%d %d\n",D1,D2);
        printf("Vous vous deplacer de %d",D1+D2);
    }else if(n==2 || joueur<300){
        D1=lancerDe();
        D2=lancerDe();
        printf("%d %d\n",D1,D2);
        if(D1==D2){
            printf("Vous pouvez sortir de prison");
            deplacement(D1,D2,joueurs.posX,joueurs.posY);
        }else{
            printf("Reessayer au prochain tour =)");
        }
    }
    return 0;
}

/*-------------------------Proprio------------------------------------*/

void endGame(int nbrJoueur,float joueur){
    printf("Joueur eliminé HAHAHAHAHA try better next time :)\n");
    nbrJoueur-=1;
}

int ajoutTerrain(int cases,float joueur,float banque){
    float pterrain=100;
    prop p;
    p.prix += pterrain;
    p.niveau+=1;
    payementJoueur(joueur,banque,100);
    printf("Vous avez payé %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

int ajoutMaison(int cases,float prix,int niveau,float joueur,float banque){
    float pMaison=50;
    prop p;
    p.prix += pMaison;
    p.niveau+=1;
    payementJoueur(joueur,banque,50);
    printf("Vous avez payé %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

int venteMaison(int cases,float prix,int niveau,float joueur,float banque){
    float pMaison=25;
    prop p;
    p.prix -= pMaison;
    p.niveau-=1;
    payementBanque(joueur,banque,50);
    printf("Vous avez vendu %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

int venteTerrain(int cases,float joueur,float banque){
    float pterrain=50;
    prop p;
    p.prix += pterrain;
    p.niveau-=1;
    payementJoueur(joueur,banque,100);
    printf("Vous avez vendu %f€ pour enlevé 1 maison\n",p.prix);
    return 0;
}

void ajoutProprieter(int cases,int nJ,int NumeroJoueur){
    prop p;
    p.numeroJoueur=NumeroJoueur;
    printf("La propriete %s a changes de proprietaire vers %d ",p.Nom,p.numeroJoueur);
}


void achatProprieter(float joueur,float maison,float prix,float cases,float niveau,float banque) {
    int c=0;
    int v=0;
    int nu=0;
    int nb=0;
    prop p;
    printf("La propriete de cette case n'a pas ete encore acheter\nQue voulez-vous faire ?\n(1)Acheter la propriete ?\n(2) Ne rien faire\n");
    scanf("%d",&c);
    if (c==1 && joueur>p.prix){
        printf("Quelle niveau de propriete voulez-vous acheter ?\n(1)Terrain\n(2)Maison\n(3) 2 Maison\n(4) 3 Maison\n(5) 4 Maison\n");
        scanf("%d",&v);
        if(v==1){
            printf("Vous achetez un terrain felicitation !!\n");
            ajoutTerrain(p.cases,joueur,banque);
            ajoutProprieter(p.cases,p.numeroJoueur,nb);
        }else if (v==2 && joueur>maison){
            printf("Vous achetez une maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutProprieter(p.cases,p.numeroJoueur,nb);
        }else if(v==3 && joueur> 2*maison){
            printf("Vous achetez deux maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutProprieter(p.cases,p.numeroJoueur,nb);
        }else if (v==4 && joueur> 3*maison){
            printf("Vous achetez 3 maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutProprieter(p.cases,p.numeroJoueur,nb);
        }else if (v==4 && joueur> 4*maison) {
            printf("Vous achetez 4 maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur,banque);
            ajoutProprieter(p.cases,p.numeroJoueur,nb);
        }else{
            printf("Vous n'avez pas assez d'argent pour acheter!\nFin du tour !");
        }
    }else{
        printf("Fin du tour");
    }
    return;
}

void venteProprieter(int joueur,float banque,int cases,int nbr,float bj){
    int n=0;
    int c=0;
    int nu=0;
    int k=0;
    prop p;
    printf("Vous voulez vendre une proprieter ?\n(1) Oui\n (2) Non");
    scanf("%d",&n);
    if(n==1){
        printf("Vous avez choisit de vendre une proprieter !\n Veuiller selectionner quelle proprieter vous voulez vendre\n");
        scanf("%d",&c);
        // faire un switch case en fonction de la proprieté a vendre.
        printf("Votre proprieté est de niveau %d.\nVous voulez vendre quelle entité ?\n(1)terrain \n(2)une maison \n(3)2 maison \n(4)3 maison \n(5)4 maison\n(6)Hotel \n (0) annuler",p.niveau);
        do{
            scanf("%d", &nu);
            switch (nu) {
                case 1 :
                    venteTerrain(p.cases,joueur,banque);
                    printf("Vous avez vendu votre propriéter\n");
                    break;
                case 2 :
                    venteMaison(p.cases,p.prix,p.niveau,joueur,banque);
                    printf("Vous avez vendu une maison\n");
                    break;
                case 3 :
                    venteMaison(p.cases,p.prix,p.niveau,joueur,banque);
                    venteMaison(p.cases,p.prix,p.niveau,joueur,banque);
                    printf("Vous avez vendu 2 maison\n");
                    break;
                case 0 :
                    break;
                default : {
                    printf("Vous ne voulez plus vendre?\n(1) non\n(2) oui\n");
                    scanf("%d",&k);
                    if(k==1){
                        scanf("%d",&nu);
                    }else{
                        printf("------------------------------------------------------------------");
                    }
                    break;
                }
            }
        }while (nu != 0);
    }else{
        printf("Vous ne voulez pas vendre RIP...\n");
        if(bj<0){
            endGame(nbr,joueur);
        }else{
            printf("Vous DEVEZ vendre vos biens !\n");
            //meme code que au dessus
            printf("Votre proprieté est de niveau %d.\nVous voulez vendre quelle entité ?\n(1)terrain \n(2)une maison \n(3)2 maison \n(4)3 maison \n(5)4 maison\n(6)Hotel \n (0) annuler",p.niveau);
            do{
                scanf("%d", &nu);
                switch (nu) {
                    case 1 :
                        venteTerrain(p.cases,joueur,banque);
                        printf("Vous avez vendu votre propriéter\n");
                        break;
                    case 2 :
                        venteMaison(p.cases,p.prix,p.niveau,joueur,banque);
                        printf("Vous avez vendu une maison a la banque\n");
                        payementBanque(joueur,banque,100);
                        break;
                    case 3 :
                        venteMaison(p.cases,p.prix,p.niveau,joueur,banque);
                        venteMaison(p.cases,p.prix,p.niveau,joueur,banque);
                        printf("Vous avez vendu 2 maison\n");
                        break;
                    case 0 :
                        break;
                    default : {
                        printf("Vous ne voulez plus vendre?\n(1) non\n(2) oui\n");
                        scanf("%d",&k);
                        if(k==1){
                            scanf("%d",&nu);
                        }else{
                            printf("\n------------------------------------------------------------------\n");
                        }
                        break;
                    }
                }
            }while (nu != 0);
        }
    }

}

int impots(int cases,int nJ,float joueur1,float joueur2){
    prop p;
    if(p.numeroJoueur<=6 && p.numeroJoueur>0){
        printf("******Dommage, it's moneyyyyy tiiimmmeee :)******\nCette case est poseder par le Joueur %d\nVous lui devez 100€ j'espere que vous pouvez ;D\n",p.numeroJoueur);
        payementJoueur(joueur1,joueur2,100);
        return 0;
    }else{
        return 0;
    }
}


/* nego */

void negociation(int numerojoueur,int maitreCases,float banqueJoueur1,float banqueJoueur2){
    float nj;
    int k=0;
    printf("Bienvenue dans en negociation !\n Veuillez proposer un prix de rachat\n");
    do{
        scanf("%f",&nj);
        printf("Le prix de rachat que propose l'autre joueur est de %f€.\nAccepter-vous son offre ?\n(1)oui\n(2)non ",nj);
        scanf("%d",&k);
        if(k==2){
            printf("Veuillez proposer un autre prix\n");
        }
        else{
            printf("Vous avez accepté l'offre.\nVous allez recevoir l'argent d'ici peu");
            payementJoueur(banqueJoueur1,banqueJoueur2,nj);
        }
        printf("Merci de votre negiciation");
    }while(k!=1);
}

void debutDePartie() {
    int demarrerUnePartie = 0;
    int choix = 0;

    //On demande son choix à l'utilisateur
    printf("Bonjour ! Bienvenue au MonopoLyon ! Pret(e)s a jouer ?\n");
    //Pensez à afficher les choix disponibles ici
    printf("Tapes 1 pour commencer une nouvelle partie\n");
    printf("Tapez 2 pour sauvegarder la partie en cours \n");
    printf("Tapez 3 pour charger une ancienne partie \n");
    printf("Tapez 4 ppour afficher les règles du jeu \n");
    printf("Tapez 5 pour afficher les membres (merveilleux) de l'équipe projet\n");
    printf("Tapez 0 pour quitter tout de suite\n");

    do {
        scanf("%d", &choix);
        switch (choix) {
            case 1 :
                printf("-----Youpi ! Bienvenue dans une nouvelle partie de MonopoLyon !-----\n\n");
                saisieDesJoueurs();

                break;
            case 2 :;
                break;
            case 3 :;
                break;
            case 4 :
                afficherReglesJeu();
                break;
            case 5 :
                printf("Les concepteurs du jeu sont :\n ");
                printf("Maxime GROS\n");
                printf("Antoine PERNOD\n");
                printf("Nathan MICHEL\n");
                printf("Diana LASZLO \n");
                printf("Ils vous souhaite une bonne partie ! ");
                break;




            default : {
                printf("Choix Invalide ! Veuillez selectionner une autre focntionalité :\n");
                break;
            }
        }
    }
    while ( choix != 0);
}

/* Metro */

void metro(){
    int random = 0;
    Joueurs joueur;
    srand(time(NULL));
    random = rand() % (2 - 0) + 0;
    switch (random) {
        case 1:
            printf("Le T1 a rencontré un probleme. Vous ne jouerez pas le prochain tour.\n");
            //finDeTour(joueur.next);
            break;
        case 2:
            printf("Vous empruntez le metro B, rdv a la prochaine gare.");
            joueur.position += 8;
            break;
    }
    return;
}




