#include <stdio.h>      // Bibliothèque standard pour les fonctions d'entrée-sortie comme printf et scanf

int a, b;                       // Déclaration des variables pour les bornes de l'intervalle
int somme_impaire = 0;          // Variable pour stocker la somme des nombres impairs
int produit = 1;                // Variable pour stocker le produit des nombres

int main()
{
    // Boucle pour s'assurer que A < B
    do
    {
        printf("Saisir A: ");
        scanf("%d", &a);        // Lire la valeur de A
        printf("Saisir B: ");
        scanf("%d", &b);        // Lire la valeur de B
        if (a > b)
        {
            printf("On veut A < B\n"); // Afficher un message si A n'est pas inférieur à B
        }
    }
    while(a > b);               // Répéter la saisie tant que A n'est pas inférieur à B

    // Boucle pour calculer la somme des nombres impairs entre A et B
    for(int i = a; i < b + 1; i++)
    {
        if(i % 2 == 1)          // Vérifier si le nombre est impair
        {
            somme_impaire = somme_impaire + i; // Ajouter le nombre impair à la somme
        }
    }

    // Afficher la somme des nombres impairs
    printf("Somme des nombres impairs compris entre %d et %d = %d\n", a, b, somme_impaire);

    // Si la somme des nombres impairs est paire
    if(somme_impaire % 2 == 0)
    {
        // Calculer le produit des nombres de A à la somme des nombres impairs
        for(int i = a; i < somme_impaire + 1; i++)
        {
            produit = produit * i;
        }
        // Afficher le produit des nombres de A à la somme des nombres impairs
        printf("Produit entre %d et %d = %d\n", a, somme_impaire, produit);
    }
    else
    {
        // Calculer le produit des nombres pairs de 
