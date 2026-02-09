#include "inout.h"

void ecritMax(int x, int y){
  if (x> y)
    {
      ecrireInt(x);
      ecrireString("\n");
    }
  else
     {
      ecrireInt(y);
      ecrireString("\n");
    }
}
void ecritTestPlusGrandEq(int x, int y){
  if (x> y)
    {
      ecrireInt(x);
      ecrireString(" plus grand que ");
      ecrireInt(y);
      ecrireString("\n");
    }
  else
    {
      ecrireInt(y);
      ecrireString(" plus grand que ");
      ecrireInt(x);
      ecrireString("\n");
    }
}
void ecritTestPlusPetit(int x, int y){
  if (x< y)
    {
      ecrireInt(x);
      ecrireString(" plus petit que ");
      ecrireInt(y);
      ecrireString("\n");
    }
  else
    {
      ecrireInt(y);
      ecrireString(" plus petit que ");
      ecrireInt(x);
      ecrireString("\n");
    }
}

void ecritTrie3(int x, int y, int z){
  if (x<= y && y <= z)
    ecrireString("<X>, <Y>, <Z> triés\n");
  else
    ecrireString("<X>, <Y>, <Z> pas triés\n");
}

void ecritMax3(int x, int y,int z){
  if (x< y)
    {
      if (y<z)
	ecrireInt(z);
      else
	ecrireInt(y);
    }
  else
    {
      if (x<z)
	ecrireInt(z);
      else
	ecrireInt(x);
    }
}

void ecritTestDeuxEgaux(int x, int y,int z, int t){
  if (x== y || x==z || x== t || y==z || y==t || z== t)
    ecrireString("2 paramètres égaux\n");
  else
    ecrireString("aucun paramètres égaux\n");
}
void ecritPlusSommeProd(int z, int t){
   if (z+ t>=z*t)
	ecrireInt(z+t);
      else
	ecrireInt(z*t);
}
void main ( void ) {
  ecritMax(2,3);
  ecritTestPlusGrandEq(2,3);
  ecritTestPlusPetit(2,3);
  ecritTrie3(2,3,4);
  ecritMax3(2,3,4);
  ecritTestDeuxEgaux(2,3,4,3);
  ecritPlusSommeProd(2,3);

  
}

