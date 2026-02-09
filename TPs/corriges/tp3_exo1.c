#include "inout.h"

void carre(int n){
  int i,j;
  for (i=0;i<n;i++)
    {
      for (j=0;j<n;j++)
	ecrireString("*");
      ecrireString("\n");
    }
}

void triangle(int n){
  int i,j;
  for (i=0;i<n;i++)
    {
      for (j=0;j<=i;j++)
	ecrireString("*");
      ecrireString("\n");
    }
}

void triangleInverse(int n){
  int i,j;
  for (i=0;i<n;i++)
    {
      for (j=0;j<n-i;j++)
	ecrireString("*");
      ecrireString("\n");
    }
}

void triangleInverse2(int n){
  int i,j;
  for (i=0;i<n;i++)
    {
      for (j=0;j<n;j++)
	if (j<i)
	  ecrireString(" ");
	else
	  ecrireString("*");
      ecrireString("\n");
    }
}

void main ( void ) {
  ecrireString("Entrez la largeur du carré\n");
  int n= lireInt();
  carre(n);
  ecrireString("Entrez la largeur du triangle\n");
  n= lireInt();
  triangle(n);
  ecrireString("Entrez la largeur du triangle\n");
  n= lireInt();
  triangleInverse(n);
  ecrireString("Entrez la largeur du triangle\n");
  n= lireInt();
  triangleInverse2(n);

  
}

