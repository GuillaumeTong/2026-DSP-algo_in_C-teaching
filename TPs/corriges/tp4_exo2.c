#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

/* Affiche toutes les chaines de caracteres du tableau t, de longueur
   taille. */
void afficheTousLesLMots(char * t[], int taille){
  int i;
  for(i = 0 ; i < taille; i = i + 1) {
    ecrireString(t[i]); // la ieme case est une chaîne de caractere
    ecrireString("\n");
  }
}

/* IMPORTANT: les chaines de caracteres sont des tableaux de
   caracteres (char * ou char[]) dont la derniere case contient le
   caractere '\0' (qui n'est jamais affiches). Vous pouvez donc
   acceder au ieme element d'une chaine de caractere s en faisant
   simplement s[i] à condition que i ne soit pas plus grand que la
   taille de la chaine-1.

   Pour connaitre la longueur d'une chaine on peut utilise la fonction

   int strlen (char * s)

   qui retourne le nombre de caracteres dans la chaine s (hormis le
   '\0').

   CETTE FONCTION DE LA BIBLIOTHEQUE STANDARD EST LA SEULE AUTORISEE,
   SAUF MENTION CONTRAIRE.

   Pour parcourir une chaine de caractere vous avez donc le choix
   entre une boucle bornee par la taille de la chaine calculee
   auparavant avec strlen, ou bien une boucle while(s[i]!='\0').
*/

/* Retourne la taille du plus grand mot du tableau de mot t. 
 */
int tailleMax(char * t[], int taille) {
  int i;
  int max=strlen(t[0]);
  for (i=1; i<taille;i++)
    if (max < strlen(t[i]))
      max =strlen(t[i]);
  return max;
}


/* Affiche les mots de t dont la longueur est superieure ou egale à
   nbLettres. */
void affichageFiltreNbLettre(char *t[], int taille, int nbLettres) {
  int i;
  for (i=0; i<taille;i++)
    if (strlen(t[i])>=nbLettres)
      {
	  ecrireString(t[i]);
	  ecrireChar('\n');
	}
}

/* Affiche les mots de t en remplaçant toutes les occurrences du
   caractere c par des espaces (' '). Bien entendu il est interdit de
   modifier les mots du tableau. */
void affichageFiltreChar(char *t[], int taille, char c) {
  int i,j;
  for (i=0; i<taille;i++)
    {
      for (j=0;j<strlen(t[i]);j++)
      if (t[i][j]==c)
	ecrireChar(' ');
      else
	ecrireChar(t[i][j]);
      ecrireChar('\n');
    }
}

/* Retourne le nombre d'occurrences du caractere c dans les mots de
   t. */
int compteLettre(char * t[], int taille , char c){
  int i,j;
  int nb_occ=0;
  for (i=0; i<taille;i++)
    for (j=0;j<strlen(t[i]);j++)
      if (t[i][j]==c)
	nb_occ++;
  return nb_occ;
}

/* Retourne le nombre de chaines contenant le caractere c dans le
   tableau t. */
int compteMotContenant(char * t[], int taille, char c) {
  int i,j;
  int nb_mots=0;
  for (i=0; i<taille;i++)
    for (j=0;j<strlen(t[i]);j++)
      if (t[i][j]==c)
	{
	  nb_mots++;
	  break;
	}
  return nb_mots;
}

/* Modifie le tableau t en remplaçant toutes les occurrences du
   caractere c par un espace. Testez en affichant le tableau avant et
   apres. */
void effaceChar(char *t[], int taille, char c) {
  int i,j;
  for (i=0; i<taille;i++)
    for (j=0;j<strlen(t[i]);j++)
      if (t[i][j]==c)
	t[i][j]==' ';
    
}

/* Modifie le tableau t en inversant l'ordre des lettres de chaque
   mots (ex: "leve" devient "evel"). */
void renverseMots(char *t[], int taille) {
  int i,j;
  int temp;
  int size;
  
  for (i=0; i<taille;i++)
    {
      size =strlen(t[i]);
      for (j=0;j<size/2;j++)
	{
	  temp = t[i][j];
	  t[i][j]=t[i][size-1-j];
	  t[i][size-1-j]=temp;
	}
     
    }
}


int main(int argc, char*argv[]){
  /* Un tableau de chaines de caracteres, on declare un pointeur sur
     chaine ce qui revient au meme. Si on declarait un tableau on
     reserverait de la place pour rien puisque */
  char **tabMots;
  int i, nbmots = 0;
  /* Un argument au programme est-il present? */
  if (argc<2) {
    ecrireString("Il manque un argument au programme\n");
    exit(1);
  }
  /* Recuperation du nom du fichier dans la variable filename. */
  char * filename = argv[1];
  /* Creation et remplissage d'un tableau de chaines de caractere
     contenant tous les mots du fichier. On passe egalement l'adresse
     de la variable nbmots afin qu'elle contienne la taille du tableau
     retourne. */
  tabMots = lireFichierParMots(filename,&nbmots);
  ecrireString ("Mots lus:\n");
  afficheTousLesLMots(tabMots,nbmots);
  ecrireString ("Nombre de mots: ");
  ecrireInt(nbmots);
  ecrireString ("\n");

  // Mettez vos test ci-dessous, nbmots est la taille du tableau
  // tabMots. Vous pouvez tester le programme en lui passant en
  // parametre le nom du fichier texte à lire. ex: tp4 test.txt.
  ecrireString ("Filtre nb lettres\n ");
  affichageFiltreNbLettre(tabMots,nbmots,4);
  ecrireString ("\nFiltre char\n");
  affichageFiltreChar(tabMots,nbmots,'e');
  int lettre = compteLettre(tabMots,nbmots,'o');
   ecrireString ("\ncompte lettre\n");
   ecrireInt(lettre);
  int mot = compteMotContenant(tabMots,nbmots,'e');
   ecrireString ("\ncompte mots\n");
   ecrireInt(mot);
    ecrireString ("\nrenverse\n");
  renverseMots(tabMots,nbmots);
  afficheTousLesLMots(tabMots,nbmots);
    ecrireString ("\nefface\n");
  effaceChar(tabMots,nbmots, 'e');
  afficheTousLesLMots(tabMots,nbmots);
}
