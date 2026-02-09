/*@debmorpion@*/
#include<stdlib.h>
#include"inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

/* Retourne le caractère de la case n dans la grille a1...a9. Si n
   n'est pas compris entre 1 et 9 le comportement de cette fonction
   est indefini. ATTENTION: cette fonction ne permet pas de modifier
   une case. */
BOOL getCase(int n, char a1,char a2,char a3,char a4,char a5,
             char a6,char a7,char a8,char a9){
// A coder
/* SOLUTION:  return a1;  // INTENTIONNELLEMENT FAUX, a vous de l'ecrire*/
  switch(n){
  case 1: return a1;
  case 2: return a2;
  case 3: return a3;
  case 4: return a4;
  case 5: return a5;
  case 6: return a6;
  case 7: return a7;
  case 8: return a8;
  case 9: return a9;
  default: exit(1); /* Le programme s'arrete complétement */
  }
/* FIN SOLUTION */
}

/* Teste si la grille decrite par les 9 caracteres est une position gagnante. */
BOOL testpasGagne(char a1,char a2,char a3,char a4,char a5,
                  char a6,char a7,char a8,char a9){
/* SOLUTION:  return TRUE; // INTENTIONNELLEMENT FAUX, a vous de l'ecrire*/
  return
    !(a1==a2 && a2 == a3 && a3!='_'
      ||a4==a5 && a5 == a6 && a6!='_'
      ||a7==a8 && a8 == a9 && a9!='_'
      ||a1==a4 && a4 == a7 && a7!='_'
      ||a2==a5 && a5 == a8 && a8!='_'
      ||a3==a6 && a6 == a9 && a9!='_'
      ||a1==a5 && a5 == a9 && a9!='_'
      ||a3==a5 && a5 == a7 && a7!='_');
/* FIN SOLUTION */
}

/* SOLUTION (rien) */
// Tests unitaires
BOOL testTestPasGagne() {
  if (!testpasGagne('_','_','_',
                   '_','_','_',
                   '_','_','_'))
    { printf ("Echec test 1"); }

  if (testpasGagne('x','x','x',
                   'o','_','o',
                   'x','_','_'))
    { printf ("Echec test 1"); }

  if (testpasGagne('x','o','x',
                   'o','o','o',
                   'x','_','_'))
    { printf ("Echec test 2"); }

  if (testpasGagne('x','o','x',
                   'o','_','o',
                   'x','x','x'))
    { printf ("Echec test 3"); }

  if (testpasGagne('x','o','x',
                   'x','_','o',
                   'x','_','_'))
    { printf ("Echec test 4"); }

  if (testpasGagne('x','x','_',
                   'o','x','o',
                   'o','x','_'))
    { printf ("Echec test 5"); }

  if (testpasGagne('x','o','x',
                   'o','o','x',
                   'o','_','x'))
    { printf ("Echec test 6"); }

  if (testpasGagne('x','o','x',
                   'o','x','_',
                   'o','_','x'))
    { printf ("Echec test 7"); }

  if (testpasGagne('o','o','x',
                   '_','x','_',
                   'x','_','x'))
    { printf ("Echec test 8"); }

}
/* FIN SOLUTION */

/* Affiche les neufs caracteres comme une grille dans le terminal: 3 lignes de 3 caracteres */
void afficheGrille(char a1,char a2,char a3,char a4,char a5,char a6,char a7,char a8,char a9){
// A coder
/* SOLUTION (rien) */
  ecrireChar(a1);
  ecrireChar(a2);
  ecrireChar(a3);
  ecrireSautDeLigne();
  ecrireChar(a4);
  ecrireChar(a5);
  ecrireChar(a6);
  ecrireSautDeLigne();
  ecrireChar(a7);
  ecrireChar(a8);
  ecrireChar(a9);
/* FIN SOLUTION */
}

int main() {
  char c1='_', c2='_', c3='_', c4='_', c5='_', c6='_', c7='_', c8='_', c9='_';
  // contiendra le numéro désigné par le joueur qui joue
  int casecochee;
  // doit devenir faux lorsque une victoire est detectee, afin
  // d'arreter la boucle while ci-dessous
  BOOL pasgagne=TRUE;
  // Le caractere correspondant au joueur dont c'est le tour
  char coche = 'x';
  // Boucle principale: on en sort lorsqu'un jouer gagne. Amelioration
  // possible: on sort aussi lorsque toutes les cases sont cochees.
  while(pasgagne) {
    // A coder:
    // 1) afficher la grille
    afficheGrille(c1,c2,c3,c4,c5,c6,c7,c8,c9);
    // 2) lire un entier au clavier
    ecrireString("Quelle case? ("); ecrireChar(coche); ecrireString(")");
    casecochee = lireInt();
    // 3) Redemander la case jusqu'a obtenir une case existantes et vide.
    // (getCase peut etre utile ici)
    // 4) si coup gagnant metre a jour pasgagne
    // (testPasGagne peut etre utile ici)
    // 5) changer de joueur (coche devient 'x' (si 'o') et 'o' (si 'x'))
/* SOLUTION (rien) */
    while(casecochee<0 || casecochee>9
          || getCase(casecochee,c1,c2,c3,c4,c5,c6,c7,c8,c9) != '_') {
      if (casecochee<0 || casecochee>9) {
        ecrireString("Ceci n'est pas un numéro de case.");
      } else {
        ecrireString("Case interdite.");
      }
      ecrireString("recommencez");
      casecochee = lireInt();
    }
    // Maintenant (casecochee >= 0) et (casecochee<=9) et (casecochee=='_')
    switch (casecochee) {
    case 1: c1 = coche; break;
    case 2: c2 = coche; break;
    case 3: c3 = coche; break;
    case 4: c4 = coche; break;
    case 5: c5 = coche; break;
    case 6: c6 = coche; break;
    case 7: c7 = coche; break;
    case 8: c8 = coche; break;
    case 9: c9 = coche; break;
    default:
      ecrireString("Ceci ne devrait pas arriver\n");
      break;
    }
    pasgagne = testpasGagne(c1,c2,c3,c4,c5,c6,c7,c8,c9);
    if(coche=='x') { coche = 'o'; }
    else { coche = 'x'; }
/* FIN SOLUTION */
  }
  // Afficher une derniere fois la grille et sortir
/* SOLUTION */
  ecrireString("victoire!\n");
  afficheGrille(c1,c2,c3,c4,c5,c6,c7,c8,c9);
/* FIN SOLUTION */
}
