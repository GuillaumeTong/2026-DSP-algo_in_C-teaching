#include "inout.h"
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL testPlusGrand(int x, int y){
  if (x >= y)
    return TRUE;
  else
    return FALSE;
}
BOOL testPlusPetit(int x, int y){
  if (x <= y)
    return TRUE;
  else
    return FALSE;
}
BOOL testTrie3(int x, int y, int z){
  if (x<= y && y <= z)
    return TRUE;
  else
    return FALSE;
}

BOOL testDeuxEgaux(int x, int y,int z, int t){
  if (x== y || x==z || x== t || y==z || y==t || z== t)
    return TRUE;
  else
     return FALSE;
}
void main ( void ) {
  BOOL res =  testPlusGrand(2,3);
  ecrireInt(res);
  res = testPlusPetit(2,3);
  ecrireInt(res);
  res = testTrie3(5,6,7);
  ecrireInt(res);
  res = testDeuxEgaux(3,5,3,4);
  ecrireInt(res);
}

