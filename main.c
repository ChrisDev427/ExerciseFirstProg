#include <stdio.h>
#include <stdlib.h>


// Prototypes des fonctions : 
int menu();
int addition(int a, int b);
int multiplication(int a, int b);
int soustraction(int a, int b);
int carre(int a);
double division(double a, double b);
double surface(double a, double b);
double volume(double a, double b, double c);



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
        printf("Entrez une largeur ");
        scanf("%lf", &nombreDeci1);
        printf("Entrez une longueur ");
        scanf("%lf", &nombreDeci2);
        printf("Entrez un hauteur");
        scanf("%lf", &nombreDeci3);
        printf("Le volume est de %lf m3\n\n", volume(nombreDeci1, nombreDeci2, nombreDeci3));
        break;

       



        
    }


 return 0;
} 


//  Fonctions menu :

int menu()
{
    int choix = 0;

    while (choix < 1 || choix > 7)
    {
        printf("===Que voulez-vous calculer ?===\n");
        printf("Une addition ? tapez 1\n");
        printf("Une multiplication ? tapez 2\n");
        printf("Une soustraction ? tapez 3\n");
        printf("Une division ? tapez 4\n");
        printf("Une racine carré ? tapez 5\n");
        printf("Une surface ? tapez 6\n");
        printf("Un volume ? tapez 7\n");
        printf("Votre choix ? ");
        scanf("%d", &choix);
    }
    return choix;
}




//  Fonctions des opérations : 

int addition(int a, int b)
{
    return a + b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int soustraction(int a, int b)
{
    return a - b;
}

int carre(int a)
{
    return a * a;
}

double division(double a, double b)
{
    return a / b;
}

double surface(double a, double b)
{
    return a * b;
}

double volume(double a, double b, double c)
{
    return a * b * c;
}



