#include "inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

void affiche(int t[][3], int nblignes){
  int i,j;
  for (i=0;i<nblignes;i++)
    {
      for (j=0;j<3;j++)
	ecrireInt(t[i][j]);
      ecrireString("\n");
    }
  ecrireString("\n");
}

void afficheTranspose(int t[][3], int nblignes){
  int i,j;
  for (j=0;j<3;j++)
    {
      for (i=0;i<nblignes;i++)
	ecrireInt(t[i][j]);
      ecrireString("\n");
    }
  ecrireString("\n");
}



void afficheDiag(int t[][3], int nblignes){
  int i;
  for (i=0;i<nblignes;i++)
    ecrireInt(t[i][i]);
  ecrireString("\n");
}

void afficheDiag2(int t[][3], int nblignes){
  int i;
  for (i=0;i<nblignes;i++)
    ecrireInt(t[i][2-i]);
  ecrireString("\n");
}

void afficheColonne(int t[][3], int nblignes, int ncol){
  int i;
  for (i=0;i<nblignes;i++)
    {
      ecrireInt(t[i][ncol]);
      ecrireString("\n");
    }
  ecrireString("\n");
}

BOOL estPresent(int t[][3],int nblignes, int x){
  int i,j;
  for (i=0;i<nblignes;i++)
    {
      for (j=0;j<3;j++)
	 if(t[i][j] ==x)
	return TRUE;
    }
  return FALSE;
}

BOOL testColonneZeros(int t[][3], int nblignes, int ncol){
  int i;
  for (i=0;i<nblignes;i++)
    {
      if(t[i][ncol] != 0)
	return FALSE;
    }
  return TRUE;
}

int sommeColonne(int t[][3], int nblignes, int ncol){
  int i;
  int somme = t[0][ncol];
  for (i=1;i<nblignes;i++)
    {
       somme += t[i][ncol];
     
    }
  return somme;
}




void main ( void ) {
  int t[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  affiche(t,3);
  afficheTranspose(t,3);
  afficheDiag(t,3);
  afficheDiag2(t,3);
  afficheColonne(t,3,1);
  BOOL res = estPresent (t,3,1);
  ecrireInt(res);
  ecrireString("\n");
  res = testColonneZeros(t,3,1);
  ecrireInt(res);
  ecrireString("\n");
  int somme = sommeColonne(t,3,1);
  ecrireInt(somme);
  ecrireString("\n");
}

