#include <stdio.h>
#include <unistd.h>
#include "O:\INFO1\Bib_INFO1.h"


int main(int argc, char const *argv[])
{
    int i = 0;
int nbr_porte = 0;
int nbr_fenetre = 0;
float lon_piece = 0;
float lar_piece = 0;
float hau_piece = 0;
float lon_porte = 0;
float hau_porte = 0;
float lon_fenetre = 0;
float hau_fenetre = 0;
float Surface_total = 0;
float Surface_mur1 = 0;
float Surface_mur2 = 0;
float Surface_porte = 0;
float Surface_fenetre = 0;
int nbr_rouleaux = 0; 
int dim_rouleaux = 5;

        printf("Veuiller saisir la longueur de votre piece:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&lon_piece); 
            } 
            while(lon_piece < 0);
        i=0;
        printf("Veuiller saisir la largeur de la piece:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&lar_piece); 
            } 
            while(lar_piece < 0);
        i=0;
        printf("Veuiller saisir la hauteur de la piece:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&hau_piece);
            } 
            while(hau_piece < 0);
        i=0;
        printf("Veuiller saisir le nombre de port dans votre piece:" );
            do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&nbr_porte);  
            } 
            while(nbr_porte < 0);
        i=0;
        printf("Veuiller saisir le nombre de fenetre dans votre piece:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&nbr_fenetre);  
            } 
            while(nbr_fenetre < 0);
        i=0;
        printf("Veuiller saisir la longueur de la porte:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&lon_porte);
            } 
            while(lon_porte < 0);
        i=0;
        printf("Veuiller saisir la hauteur de la porte:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&hau_porte);
            } 
            while(hau_porte < 0);
        i=0;
        printf("Veuiller saisir la longueur de la fenetre:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&lon_fenetre);  
            } 
            while(lon_fenetre < 0);
        i=0;
        printf("Veuiller saisir la hauteur de la fenetre:" );
        do
            {
                if (i > 0)
                {
                    printf("Vous avez saisi un nombre negatif veuillez re-faire votre saisie: ");
                }
                i++;
                scanf("%d",&hau_fenetre);  
            } 
            while(hau_fenetre < 0);
        
        Surface_mur1 = (lon_piece * hau_piece)*2;
        Surface_mur2 = (lar_piece * hau_piece)*2;
        Surface_porte = lon_porte * hau_porte * nbr_porte;
        Surface_fenetre = lon_fenetre * hau_fenetre * nbr_fenetre;
        Surface_total = Surface_mur1 + Surface_mur2 - Surface_porte - Surface_fenetre;

    printf("La surface total de vos mur a recouvrire est de %d m2\n", Surface_total);

    nbr_rouleaux = Surface_total / dim_rouleaux;
    printf("\n Pour entierement recouvir tout vos mur, il vous faudra %d rouleaux.", ceil(nbr_rouleaux));
    sleep(5000);
    return 0;
}
