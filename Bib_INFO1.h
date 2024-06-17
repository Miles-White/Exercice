//===================================================================
// Librairie de gestion de la console
// 
//  Auteur : P. Viard
//  Date : 01/09/2013
//  Version : 1.0
//  Objet : Fournir quelques routines de gestion des affichages 
//          sur la console Dos en environnement Windows
//          + une fonction retournant un nombre entier aléatoire   
//
//===================================================================


// Déclarartion des fonctions prototype

void gotoXY(short x, short y);
void windows_clear_screen(void);
void windows_clear_screen_color(int T,int F);
void color(int CouleurTexte, int CouleurFond);
void Etat_Curseur(int etat);
int rand_Max(int M);

// Constantes de couleur utilisables dans les fonctions : color( , ) et windows_clear_screen_color(
#define NOIR        0
#define BLEU_FONCE  1
#define VERT        2
#define BLEU_GRIS   3
#define MARRON      4
#define POURPRE     5
#define KAKI        6
#define GRIS_CLAIR  7
#define GRIS        8
#define BLEU_CLAIR  9
#define VERT_CLAIR  10
#define CYAN        11
#define ROUGE       12
#define ROSE        13
#define JAUNE       14
#define BLANC       15

// Gestion de l'inclusion des librairies windows et time
#include <windows.h>
#include <time.h>

// Positionnement du curseur à un endroit précis sur l'écran
void gotoXY(short x, short y)
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD Pos;
     Pos.X = x;
     Pos.Y = y;
     SetConsoleCursorPosition(hConsole, Pos);
 }
 
 
// Effacement de la console 
void windows_clear_screen(void)
{
    HANDLE hConsole;
    CONSOLE_SCREEN_BUFFER_INFO Info;
    DWORD NbOctetsEcrits;
    COORD Debut = {0,0};
    
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // lecture des infos sur l'écran
    GetConsoleScreenBufferInfo(hConsole, &Info);
    
    // remplissage de l'écran avec des espaces
    FillConsoleOutputCharacter(hConsole, ' ',Info.dwSize.X*Info.dwSize.Y, Debut, &NbOctetsEcrits);
    
    // remet le curseur au debut
    SetConsoleCursorPosition(hConsole, Debut);
} 

// Effacement de la console avec un choix de couleur pour le texte et le fond
void windows_clear_screen_color(int T,int F)
{
    HANDLE hConsole;
    CONSOLE_SCREEN_BUFFER_INFO Info;
    DWORD NbOctetsEcrits;
    COORD Debut = {0,0};
    
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // lecture des infos sur l'écran
    GetConsoleScreenBufferInfo(hConsole, &Info);
    
    // remplissage de l'écran avec des espaces
    color(T,F);
    FillConsoleOutputCharacter(hConsole, ' ',Info.dwSize.X*Info.dwSize.Y, Debut, &NbOctetsEcrits);
    
    // remet le curseur au debut
    SetConsoleCursorPosition(hConsole, Debut);
} 


// Gestion de la couleur du texte et du fond
/* 
0 = Noir         8 = Gris
1 = Bleu Foncé   9 = Bleu clair
2 = Vert         10 = Vert clair
3 = Bleu-gris    11 = Cyan
4 = Marron       12 = Rouge
5 = Pourpre      13 = Rose
6 = Kaki         14 = Jaune
7 = Gris clair   15 = Blanc
*/

void color(int CouleurTexte, int CouleurFond)
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hConsole, CouleurFond*16 + CouleurTexte);
 }

// Active ou efface le curseur
void Etat_Curseur(int etat)
{
     CONSOLE_CURSOR_INFO Curseur;
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     
     GetConsoleCursorInfo(hConsole,&Curseur);
     Curseur.bVisible = etat;
     SetConsoleCursorInfo(hConsole,&Curseur); 
}

// Retourne un nombre entier aléatoire compris entre 0 et M 
// afin de rendre plus aléatoire les nombres ajouter en début de votre programme la ligne suivante
//  ->  srand((unsigned)time(NULL));   
// Attention il faut ajouter #include <time.h> dans votre code source

int rand_Max(int M)
{
       return (rand() %  (M + 1));
}
