#include <stdio.h>


/***********prototype***********************/
int choixSymbole(int); //choix du symbole pour chaque joueur identifié par un entier renvoir le symbole sous forme entier
void comparerSymboles(int,int);



int main() {
    printf("%d",choixSymbole(1)); //test unitaire de choixSymbole
    return 0;
}

/******************définitions*********************/
void comparerSymboles(int symbolej1, int symbolej2) {

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
