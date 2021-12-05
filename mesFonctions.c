//
// Created by Laszlo Diana on 05/12/2021.
//

#include "mesFonctions.h"
#include "mesFonctions.h"
#include "mesStructures.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

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


/*void affichageParametresJoueurs() {
    for (int i = 0; i <=);
    printf();
                }
*/

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
    printf("Voici les relges du jeu :")
}

/*
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
*/