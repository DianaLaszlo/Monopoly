//
// Created by maxim on 08/12/2021.
//

#include "fonctions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 6
#define MAX_NOM 100
#define TAILLE_MAX 1000

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
