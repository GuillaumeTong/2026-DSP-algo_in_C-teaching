#include "inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

void affiche(int t[],int n){
  int i;
  for (i=0;i<n;i++)
      ecrireInt(t[i]);
}

BOOL estPresent (int t[],int n, int x){
  int i;
  for (i=0;i<n;i++)
    {
      if(t[i] ==x)
	return TRUE;
    }
  return FALSE;
}

int nbOccurrence(int t[],int n, int x){
  int i;
  int cpt=0;
  for (i=0;i<n;i++)
    {
      if(t[i] ==x)
	cpt++;
    }
  return cpt;
}

int minimum(int t[],int n){
  int i;
  int min =t[0];
  for (i=1;i<n;i++)
    {
      if(t[i] < min)
	min = t[i];
    }
  return min;
}

int maximum(int t[],int n){
  int i;
  int max =t[0];
  for (i=1;i<n;i++)
    {
      if(t[i] > max)
	max = t[i];
    }
  return max;
}

int moyenne(int t[],int n){
  int i;
  int moyenne =0;
  for (i=0;i<n;i++)
    {
      moyenne+= t[i];
    }
  return moyenne/n;
}

BOOL estTrie(int t[],int n){
  int i;
  for (i=0;i<n-1;i++)
    {
      if(t[i] >t[i+1])
	return FALSE;
    }
  return TRUE;
}
void decalage(int t[],int n){
  int temp=t[0];
  int i;
  for (i=0;i<n-1;i++)
    {
      t[i]=t[i+1];
    }
  t[n-1]=temp;
}



void main ( void ) {
  int t[3]={1,1,3};
  
  affiche(t,3);
  BOOL res = estPresent (t,3,1);
  ecrireInt(res);
  
  int occ =nbOccurrence(t,3,1);
  ecrireInt(occ);
  int min = minimum(t,3);
  ecrireInt(min);
  int max = maximum(t,3);
  ecrireInt(max);
  int moy = moyenne(t,3);
  ecrireInt(moy);
  res = estTrie(t,3);
  ecrireInt(res);
  decalage(t,3);
  affiche(t,3);

  
}

