//
// fonctions.c
// header
//


#include "fonctions.h" 



// Fonction menu

int menu()
{
    int choix = 0;

    while (choix < 1 || choix > 7)
    {
        printf("\n===Que voulez-vous calculer ?===\n\n");
        printf("Une addition ? tapez 1\n");
        printf("Une multiplication ? tapez 2\n");
        printf("Une soustraction ? tapez 3\n");
        printf("Une division ? tapez 4\n");
        printf("Une racine carré ? tapez 5\n");
        printf("Une surface ? tapez 6\n");
        printf("Un volume ? tapez 7\n\n");
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



