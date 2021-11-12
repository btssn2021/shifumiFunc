#include <stdio.h>


/***********prototype***********************/
int choixSymbole(int); //choix du symbole pour chaque joueur identifié par un entier renvoir le symbole sous forme entier
void comparerSymboles(int,int);

/********************variable globales**************/
enum symboles {PIERRE=1,FEUILLE=2,CISEAU=3};

int main() {

    comparerSymboles(choixSymbole(2), choixSymbole(1));
    return 0;
}

/******************définitions*********************/
void comparerSymboles(int symbolej2, int symbolej1) {
if((symbolej1==PIERRE&&symbolej2==CISEAU)||(symbolej1==CISEAU&&symbolej2==FEUILLE)||(symbolej1==FEUILLE&&symbolej2==PIERRE))
{
    printf("Le joueur1 gagne\n");
}
else
    if((symbolej1==PIERRE&&symbolej2==FEUILLE)||(symbolej1==CISEAU&&symbolej2==PIERRE)||(symbolej1==FEUILLE&&symbolej2==CISEAU))
    {
        printf("Le joueur2 gagne\n");
    }
    else
    {
        printf("Egalité\n");
    }
}

int choixSymbole(int numerojoueur) {
    int choix=0;
    printf("Veuillez choisir un symbole joueur n°%d\n",numerojoueur);
    printf("1-Pierre\n");
    printf("2-Feuille\n");
    printf("3-Ciseau\n");
    scanf("%d",&choix);
    return choix;
}
