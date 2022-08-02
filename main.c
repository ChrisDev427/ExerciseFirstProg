
// Exercice...
// Prototypes et fonctions dans des fichiers séparés...

// ChrisDev427 - 02-08-2022 

// main.c

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include "fonctions.c"



int main(int argc, char *argv[])
{
    // Déclaration des variables : 
    int nombreEntier1, nombreEntier2;
    double nombreDeci1 = 0.0, nombreDeci2 = 0.0, nombreDeci3;
    double longueur = 0, largeur = 0, hauteur = 0;

    switch (menu()) //Fonction "menu" : 
    {
        case 1:
        printf("Entrez le premier nombre ");
        scanf("%d", &nombreEntier1);
        printf("Entrez le deuxième nombre ");
        scanf("%d", &nombreEntier2);
        printf("\nL'addition de %d et %d est égale à %d\n\n", nombreEntier1, nombreEntier2, addition(nombreEntier1, nombreEntier2));
        break;

        case 2:
        printf("Entrez le premier nombre ");
        scanf("%d", &nombreEntier1);
        printf("Entrez le deuxième nombre ");
        scanf("%d", &nombreEntier2);
        printf("\nLa multiplication de %d et %d est égale à %d\n\n", nombreEntier1, nombreEntier2, multiplication(nombreEntier1, nombreEntier2));
        break;
        
        case 3:
        printf("Entrez le premier nombre ");
        scanf("%d", &nombreEntier1);
        printf("Entrez le deuxième nombre ");
        scanf("%d", &nombreEntier2);
        printf("\nLa soustraction de %d et %d est égale à %d\n\n", nombreEntier1, nombreEntier2, soustraction(nombreEntier1, nombreEntier2));
        break;

        case 4:
        printf("Entrez le premier nombre ");
        scanf("%lf", &nombreDeci1);
        printf("Entrez le deuxième nombre ");
        scanf("%lf", &nombreDeci2);
        printf("La division de  %lf et %lf est égale à %lf\n\n", nombreDeci1, nombreDeci2, division(nombreDeci1, nombreDeci2));
        break;

        case 5:
        printf("Entrez un nombre ");
        scanf("%d", &nombreEntier1);
        printf("\nLa racine carrée de %d est égale à %d\n\n", nombreEntier1, carre(nombreEntier1));
        break;

        case 6:
        printf("Entrez une largeur ");
        scanf("%lf", &nombreDeci1);
        printf("Entrez une longueur ");
        scanf("%lf", &nombreDeci2);
        printf("La surface est de %lf m2\n\n", surface(nombreDeci1, nombreDeci2));
        break;

        case 7:
        printf("Entrez largeur ");
        scanf("%lf", &nombreDeci1);
        printf("Entrez longueur ");
        scanf("%lf", &nombreDeci2);
        printf("Entrez hauteur ");
        scanf("%lf", &nombreDeci3);
        printf("Le volume est de %lf m3\n\n", volume(nombreDeci1, nombreDeci2, nombreDeci3));
        break;
        

    }


 return 0;
} 




