#include "inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

void affiche(int t[3][3]){
  int i,j;
  for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
	ecrireInt(t[i][j]);
      ecrireString("\n");
    }
  ecrireString("\n");
}

 
int ligne(int t[3][3], int i){
  int j;
  int somme=0;
  for(j=0;j<3;j++)
    somme += t[i][j];
  return somme;
}
    
int colonne(int t[3][3], int j){
  int i;
  int somme=0;
  for(i=0;i<3;i++)
    somme += t[i][j];
  return somme;
}
  
int diagonale1(int t[3][3]){
  int i;
  int somme=0;
  for(i=0;i<3;i++)
    somme += t[i][i];
  return somme;
}
  
int diagonale2(int t[3][3]){
  int i;
  int somme=0;
  for(i=0;i<3;i++)
    somme += t[i][3-1-i];
  return somme;
}
   
BOOL magique(int t[3][3]){
  int i;
  int sommeCol = colonne(t,1);
  for (i=1;i<3;i++)
    if (sommeCol!= colonne(t,i))
      return FALSE;
  
  int sommeLig = ligne(t,1);
  for (i=1;i<3;i++)
    if (sommeLig!= colonne(t,i))
      return FALSE;
  if (sommeLig != sommeCol)
    return FALSE;
  
  int sommeDiag = diagonale1(t);
  int sommeDiag2 = diagonale2(t);
  if (sommeCol == sommeDiag && sommeCol == sommeDiag2)
    return TRUE;
  else
    return FALSE;
}
        
  
BOOL normal(int t[3][3]){
  int i,j;
  int h[9];
  for(i=0;i<9;i++)
    h[i]=0;
     
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      h[t[i][j]-1]++;
  
  for(i=0;i<9;i++)
    if (h[i]>1)
      return FALSE;
  return TRUE;
}
        


void main ( void ) {
  int t[3][3]={{6,7,2},{1,5,9},{8,3,4}};
  affiche(t);
  int sommeCol = colonne(t,1);
  ecrireInt(sommeCol);
  ecrireString("\n");
  int sommeLig = ligne(t,1);
  ecrireInt(sommeLig);
  ecrireString("\n");
  int sommeDiag = diagonale1(t);
  ecrireInt(sommeDiag);
  ecrireString("\n");
  int sommeDiag2 = diagonale2(t);
  ecrireInt(sommeDiag2);
  ecrireString("\n");
  ecrireString("Test carre magique\n");
  BOOL res = magique(t);
  ecrireInt(res);
  ecrireString("\n");
  res = normal(t);
  ecrireInt(res);
  ecrireString("\n");
}

