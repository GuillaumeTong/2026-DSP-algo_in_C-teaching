#include"inout.h"
#include<time.h>
#include<string.h>
#include<stdlib.h>
#define BOOL int
#define TRUE 1
#define FALSE 0



int nbOccurence(char t[], int a[], char c){
  //A programmer
  return 0;
}


void affichageMotACherche(char t[], int a[]) {
  //A programmer
}


int main() {
  int nbMots;
  int nombre_aleatoire = 0;
  srand(time(NULL)); // initialisation de rand
  char **mot = lireFichierParMots("dico_pendu.txt",&nbMots);
  printf("mot 0 : %s\n",mot[0]);
  printf("mot 1 : %s\n",mot[99957]); /* le dernier */
  nombre_aleatoire = rand()%99958; /* entre 0 et 99957 */
  // Plus generalement pour tirer dans l'intervale [a,b[ (b exclu
  // donc) on fait:
  // nombre_aleatoire = rand()%(99958-a)+a; /* entre a et b-1 */
  printf("mot %d : %s\n",nombre_aleatoire,mot[nombre_aleatoire]); /* le dernier */
  // Voilà le mot est choisi vous pouvez programmer le pendu ci-dessous.
  
  int nb_coups=0;  // nombres de coups joues
  int nb_lettres = strlen(mot[nombre_aleatoire]); // nombre de lettres a trouver
  int estTrouve [nb_lettres];  // tableau 
  int i;
  for (i=0;i<nb_lettres;i++)
    {
      estTrouve[i]=0;
    }
  char lettre;
  BOOL jouer = TRUE;
  
  int nb = 0;
  affichageMotACherche(mot[nombre_aleatoire],estTrouve); 
  while (jouer)
    {
      // A programmer
  
}
}
