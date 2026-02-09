/*@debmorpion@*/
#include<stdlib.h>
#include"inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ligneIdentique(char grille[], int ligne)
{
  
  if (grille[3*(ligne-1)] ==grille[3*(ligne-1)+1] &&  grille[3*(ligne-1)] ==grille[3*(ligne-1)+2] &&grille[3*(ligne-1)] !='_' )
    return TRUE;
  return FALSE;
}

BOOL colonneIdentique(char grille[], int col)
{
  if (grille[col-1] ==grille[3+col-1] &&  grille[col-1] ==grille[6+col-1] && grille[col-1]!='_')
    return TRUE;
  return FALSE;
}

BOOL diag1Identique(char grille[])
{
  if (grille[0] ==grille[4] &&  grille[0] ==grille[8] && grille[0]!='_')
    return TRUE;
  return FALSE;
}

BOOL diag2Identique(char grille[])
{
  if (grille[2] ==grille[4] &&  grille[2] ==grille[6]&& grille[2]!='_')
    return TRUE;
  return FALSE;
}

/* Teste si la grille decrite par les 9 caracteres est une position gagnante. */
BOOL testGagne(char grille[]){
/* SOLUTION:  return TRUE; // INTENTIONNELLEMENT FAUX, a vous de l'ecrire*/
  int i;
    if (diag1Identique(grille)==1)
      return TRUE;
    if (diag2Identique(grille)==1)
      return TRUE;
    for (i =1; i<=3;i++)
      {
	if (ligneIdentique(grille,i)==1)
	  return TRUE;
	if (colonneIdentique(grille,i)==1)
	  return TRUE;
      }
    return FALSE;
}


/* Affiche les neufs caracteres comme une grille dans le terminal: 3 lignes de 3 caracteres */
void afficheGrille(char grille[]){
  int i,j;
  for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
	ecrireChar(grille[i*3+j]);
      ecrireSautDeLigne();
    }
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
    afficheGrille(grille);
    // 2) lire un entier au clavier
    ecrireString("Joueur ");
    ecrireChar(joueur);
    ecrireString(" ? ");
    casecochee = lireInt();
 
    // 3) Redemander la case jusqu'a obtenir une case existantes et vide.
    if (casecochee <1 || casecochee >9 || grille[casecochee -1] != '_')
      {
	if (casecochee<0 || casecochee>9) {
	  ecrireString("\nCeci n'est pas un numéro de case.");
	}
	else {
	  ecrireString("\nCase interdite.");
	}
	ecrireString("recommencez ");
	casecochee = lireInt();
      }

    // Maintenant on peut jouer
    grille[casecochee-1]=joueur;
    nbCoupsjoues++;
    
    // 4) si coup gagnant mettre a jour pasGagne
    // (testGagne peut etre utile ici)
    if (testGagne(grille) ==1)
      pasGagne = FALSE;

    // 5) Si toutes les cases ont été jouées mettre a jour caseLibres
    if (nbCoupsjoues==9)
      caseLibres=FALSE;
    // 6) changer de joueur (joueur devient 'x' (si 'o') et 'o' (si 'x'))
    if (caseLibres ==1 && pasGagne==1)
      {
	if(joueur=='x') 
	  joueur = 'o';
	else
	  joueur = 'x';
      }
/* FIN SOLUTION */
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
