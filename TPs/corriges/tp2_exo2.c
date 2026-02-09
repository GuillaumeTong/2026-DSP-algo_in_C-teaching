#include "inout.h"
void main ( void ) {
 ecrireString("Voici les procedures disponibles, tapez le numero de 
celle que vous voulez executer:\n
1. ecritMax\n
2. ecritTestPlusGrandEq \n
3. ecritTestPlusPetit\n
4. ecritTrie3\n
5. ecritMax3\n
6. ecritTestDeuxEgaux\n
7. ecritPlusSommeProd\n");
  int numFonction = lireInt();
  ecrireString("Entrez le premier parametre\n");
  int x = lireInt();
  ecrireString("Entrez le deuxieme parametre\n");
  int y = lireInt();
  int z, t;
  if  (numFonction == 1)
    ecritMax(x,y);
  if  (numFonction == 2)
  ecritTestPlusGrandEq(x,y);
  if (numFonction == 3)
  ecritTestPlusPetit(x,y);

  if (numFonction <=0 || numFonction >7)
    {
       ecrireString("Voici les procedures disponibles, tapez le numero de 
celle que vous voulez executer:\n
1. ecritMax\n
2. ecritTestPlusGrandEq \n
3. ecritTestPlusPetit\n
4. ecritTrie3\n
5. ecritMax3\n
6. ecritTestDeuxEgaux\n
7. ecritPlusSommeProd\n");
      numFonction = lireInt();
    }
  if (numFonction == 4 || numFonction == 5 || numFonction == 6)
    {
      ecrireString("Entrez le troisieme parametre\n");
      z = lireInt();
      if (numFonction == 4)
	ecritTrie3(x,y,z);
     
      if (numFonction == 5)
	ecritMax3(x,y,z);

      if (numFonction == 6)
	{
	  ecrireString("Entrez le quatrieme parametre\n");
	  z = lireInt();
	  ecritTestDeuxEgaux(x,y,z,t);
	}
    }
  if  (numFonction == 7)
    ecritPlusSommeProd(x,y);
  
}
