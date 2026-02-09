/*@debmorpion@*/
#include<stdlib.h>
#include"inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

// Renvoie TRUE si la ligne "ligne" du tableau grille est identique
BOOL ligneIdentique(char grille[], int ligne)
{
  //A completer 
  return FALSE;
}
// Renvoie TRUE si la colonne "col" du tableau grille est identique
BOOL colonneIdentique(char grille[], int col)
{
 //A completer 
  return FALSE;
}
// Renvoie TRUE si la diagonale majeure du tableau grille est identique
BOOL diag1Identique(char grille[])
{
  //A completer 
  return FALSE;
}
// Renvoie TRUE si la diagonale mineure du tableau grille est identique
BOOL diag2Identique(char grille[])
{
  //A completer 
  return FALSE;
}

/* Renvoie TRUE si le tableau grille est une position gagnante. */
BOOL testGagne(char grille[]){
 //A completer 
  return FALSE;
}


/* Affiche les neufs caracteres comme une grille dans le terminal: 3 lignes de 3 caracteres */
void afficheGrille(char grille[]){
  //A completer 
}



int main() {
  // represente la grille du jeu
  char grille[9] = {'_','_','_','_','_','_','_','_','_'};
  // contiendra le numéro désigné par le joueur qui joue
  int casecochee;
  // doit devenir faux lorsque une victoire est detectee, afin d'arreter la boucle while ci-dessous
  BOOL pasGagne=TRUE;
  //doit devenir faux quand les cases ont toutes été cochées, afin d'arreter la boucle while ci-dessous
  BOOL caseLibres=TRUE;
  // L'entier correspond au joueur dont c'est le tour
  char joueur ='x';
  // Boucle principale: on en sort lorsqu'un jouer gagne.
  int nbCoupsjoues =0;
  while(pasGagne && caseLibres) {
  
    // 1) afficher la grille
   
    // 2) lire un entier au clavier
   
    // 3) Redemander la case jusqu'a obtenir une case existantes et vide.
   
    // 4) Maintenant on peut jouer
       
    // 5) si coup gagnant mettre a jour pasGagne  (testGagne peut etre utile ici)
   
    // 6) Si toutes les cases ont été jouées mettre a jour caseLibres
  
    // 7) changer de joueur (joueur devient 'x' (si 'o') et 'o' (si 'x'))
    
  }
  // Afficher une derniere fois la grille et sortir
  if (pasGagne == 0)
    {
      ecrireString("victoire du joueur ");
      ecrireChar(joueur);
      ecrireString(" !\n");
    }
  else
    {
      ecrireString("Partie terminée, aucun vainqueur \n");
    }

  afficheGrille(grille);

}
