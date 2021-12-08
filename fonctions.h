//
// Created by maxim on 08/12/2021.
//

#ifndef TEST_MONOPOLY_FONCTIONS_H
#define TEST_MONOPOLY_FONCTIONS_H

typedef struct{
    float argent;
    int nbrPropri;
    int numero;
}Banque;

typedef struct{
    int cases;
    char Nom[50];
    float prix;
    int numeroJoueur; //(0)banque (1)Joueur1 (2)Joueur2 ...ect ;
    int niveau;
}prop;

typedef struct {
    int nbrCase;
    int positionX;
    int positionY;
    char* nomCase[100];
    int prix;
    int prixMaison;
    int nbrMaison;
    int nbrHotel;
}Cases;

typedef struct {
    int numero;
    char nom[50];
    float argent;
    char proprietes[100];
    int position;
    int posX;
    int posY;
    struct Joueur* next;
} Joueurs;

/* DE */

int lancerDe();

/* Cases */

void afficherCases(Cases* tabCases, int posotion);

Cases* infoCases();

/* Boucle partie */

void bouclepartie(int nombreJoueur);

/* Banque */

float payementBanque(float banqueJoueur,float argentBanque,float somme);
float passageCaseDepart(float banqueJoueur,float somme);
float payementJoueur(float banqueJoueur,float argentBanque,float somme);

/* Deplacement */

int deplacement(const int* pDe1, const int* pDe2, int* posX, int* posY);
int lancerDe();
void saisieDesJoueurs();
int testEntier(int entier);
int getRandomIntegerCartes();
int tirageCartesChance(int random);
void afficherReglesJeu();

/* Prison */

int lancerDe();
int prison(float joueur,float banque);

/* Proprio */

void achatProprieter(float joueur,float maison,float prix,float cases,float niveau,float banque);

void venteProprieter(int joueur,float banque,int cases,int nbr,float bj);

int impots(int cases,int nJ,float joueur1,float joueur2);

/* nego */

void negociation(int numerojoueur,int maitreCases,float banqueJoueur1,float banqueJoueur2);

void finDeTour(Joueurs);

void debutDePartie();

#endif //TEST_MONOPOLY_FONCTIONS_H
