#include <stdio.h>

typedef struct{
    int cases;
    char Nom[50];
    float prix;
    int nJ;
    int niveau;
}prop;

int payementJoueur(float joueur,int banque){
    printf("Vous avez payé GG\n");
    return 0;
}

int payementBanque(float joueur,int banque){
    printf("La banque vous a payer GG\n");
    return 0;
}

void endGame(int nbrJoueur,float joueur){
    printf("Joueur eliminé HAHAHAHAHA try better next time :)\n");
    nbrJoueur-=1;
}

int ajoutTerrain(int cases,float joueur){
    float pterrain=100;
    prop p;
    p.prix += pterrain;
    p.niveau+=1;
    payementJoueur(joueur,100);
    printf("Vous avez payé %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

int ajoutMaison(int cases,float prix,int niveau,float joueur){
    float pMaison=50;
    prop p;
    p.prix += pMaison;
    p.niveau+=1;
    payementJoueur(joueur,50);
    printf("Vous avez payé %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

int venteMaison(int cases,float prix,int niveau,float joueur){
    float pMaison=25;
    prop p;
    p.prix -= pMaison;
    p.niveau-=1;
    payementBanque(joueur,50);
    printf("Vous avez vendu %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

int venteTerrain(int cases,float joueur){
    float pterrain=50;
    prop p;
    p.prix += pterrain;
    p.niveau-=1;
    payementJoueur(joueur,100);
    printf("Vous avez vendu %f€ pour obtenir %d maison\n",p.prix,p.niveau);
    return 0;
}

void ajoutProprieter(int cases,int nJ,int NumeroJoueur){
    prop p;
    p.nJ=NumeroJoueur;
    printf("La propriete %s a changes de proprietaire vers %d ",p.Nom,p.nJ);
}


void achatProprieter(float joueur,float maison,prop prix,prop cases,prop niveau) {
    int c=0;
    int v=0;
    int nu=0;
    float nb=0;
    prop p;
    printf("La propriete de cette case n'a pas ete encore acheter\nQue voulez-vous faire ?\n(1)Acheter la propriete ?\n(2) Ne rien faire\n");
    scanf("%d",&c);
    if (c==1 && joueur>p.prix){
        printf("Quelle niveau de propriete voulez-vous acheter ?\n(1)Terrain\n(2)Maison\n(3) 2 Maison\n(4) 3 Maison\n(5) 4 Maison\n");
        scanf("%d",&v);
        if(v==1){
            printf("Vous achetez un terrain felicitation !!\n");
            ajoutTerrain(p.cases,nb);
            ajoutProprieter(p.cases,p.nJ,nb);
        }else if (v==2 && joueur>maison){
            printf("Vous achetez une maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutProprieter(p.cases,p.nJ,nb);
        }else if(v==3 && joueur> 2*maison){
            printf("Vous achetez deux maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutProprieter(p.cases,p.nJ,nb);
        }else if (v==4 && joueur> 3*maison){
            printf("Vous achetez 3 maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutProprieter(p.cases,p.nJ,nb);
        }else if (v==4 && joueur> 4*maison) {
            printf("Vous achetez 4 maison felicitation !!\n");
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutMaison(p.cases,p.prix,p.niveau,joueur);
            ajoutProprieter(p.cases,p.nJ,nb);
        }else{
            printf("Vous n'avez pas assez d'argent pour acheter!\nFin du tour !");
        }
    }else{
        printf("Fin du tour");
    }
    return;
}

void venteProprieter(float joueur,float banque,int cases,int nbr,float bj){
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
        printf("Votre proprieté est de niveau %d.\nVous voulez vendre quelle entité ?\n(1)terrain \n(2)une maison \n(3)2 maison \n(4)3 maison \n(5)4 maison\n(6)Hotel \n (0) annuler");
        do{
            scanf("%d", &nu);
            switch (nu) {
                case 1 :
                    venteTerrain(p.cases,joueur);
                    printf("Vous avez vendu votre propriéter\n");
                    break;
                case 2 :
                    venteMaison(p.cases,p.prix,p.niveau,joueur);
                    printf("Vous avez vendu une maison\n");
                    break;
                case 3 :
                    venteMaison(p.cases,p.prix,p.niveau,joueur);
                    venteMaison(p.cases,p.prix,p.niveau,joueur);
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
                        venteTerrain(p.cases,joueur);
                        printf("Vous avez vendu votre propriéter\n");
                        break;
                    case 2 :
                        venteMaison(p.cases,p.prix,p.niveau,joueur);
                        printf("Vous avez vendu une maison a la banque\n");
                        payementBanque(joueur,100);
                        break;
                    case 3 :
                        venteMaison(p.cases,p.prix,p.niveau,joueur);
                        venteMaison(p.cases,p.prix,p.niveau,joueur);
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
int impots(int cases,int nJ,float joueur1,int joueur2){
    prop p;
    if(p.nJ<=6 && p.nJ>0){
        printf("******Dommage, it's moneyyyyy tiiimmmeee :)******\nCette case est poseder par le Joueur %d\nVous lui devez 100€ j'espere que vous pouvez ;D\n",p.nJ);
        payementJoueur(joueur1,joueur2);
        return 0;
    }else{
        return 0;
    }
}





int main(){
    float joueur1=1;
    float joueur2=1;
    float banque=300000;
    int cases=1;
    int nbr=2;
    int niveau=4;
    int bj=4500;
    //venteProprieter(joueur1,banque,cases,nbr,bj);
    impots(cases,nbr,joueur1,joueur2);
    return 0;
}


