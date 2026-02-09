#include "inout.h"

int SommeTroisInt(int x, int y, int z){
  return x+y+z;
}

int max2(int x, int y){
  if (x> y)
    return x;
  else
    return y;
}
int max3(int x, int y,int z){
  if (x< y)
    {
      if (y<z)
	return z;
      else
	return y;
    }
  else
    {
      if (x<z)
	return z;
      else
	return x;
    }
}
int plusSommeProd(int z, int t){
   if (z+ t>=z*t)
     return z+t;
   else
     return z*t;
}

void main ( void ) {
  int res =  SommeTroisInt(2,3,4);
  ecrireInt(res);
  res = max2(3,1);
  ecrireInt(res);
  res = max3(5,6,7);
  ecrireInt(res);
  res = plusSommeProd(3,4);
  ecrireInt(res);
}
