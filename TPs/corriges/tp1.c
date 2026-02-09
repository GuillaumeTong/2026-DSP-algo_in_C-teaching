#include "inout.h"
void f()
{
  ecrireString("Hello World\n");
}
void g() {
  ecrireInt(lireInt());
}

void ecritBonjour(){
  ecrireString("Bonjour\n");
}
void ecrit3Bonjour(){
  ecrireString("Bonjour\n");
  ecrireString("Bonjour\n");
  ecrireString("Bonjour\n");
}

 void ecritSommeDeuxlireInt() {
   ecrireInt(lireInt()+lireInt());
   ecrireString("\n");
 } 

void ecritDeuxFoislireInt(){
  int a = lireInt();
  ecrireInt(a);
  ecrireString("\n");
  ecrireInt(a);
  ecrireString("\n");
}

void ecritDeuxInt(int x, int y) {
   ecrireInt(x);
   ecrireInt(y);
   ecrireString("\n");
 }

void ecritSommeDeuxInt(int x, int y) {
  ecrireInt(x+y);
  ecrireString("\n");
} 

void ecritSommeDeuxIntBavard(int x, int y) {
  ecritDeuxInt(x,y);
  ecrireString("\n");
  ecritSommeDeuxInt(x,y);
  ecrireString("\n");
}
void ecritSommeTroisInt(int x, int y, int z){
  ecrireInt(x+y+z);
  ecrireString("\n");
}

void ecritSommeDifflireInt(){ 
  int a = lireInt();
  int b = lireInt();
  ecrireInt(a+b);
  ecrireString("\n");
  ecrireInt(a-b);
  ecrireString("\n");
}
void main ( void ) {
  f(); // Appel a la procedure f
  g();// Appel a la procedure g
  ecritBonjour();
  ecrit3Bonjour();
  ecritSommeDeuxlireInt() ;
  ecritDeuxFoislireInt() ;
  ecritDeuxInt(3, 4);
  ecritSommeDeuxInt(3, 4);
  ecritSommeDeuxIntBavard(5, 6);
  ecritSommeTroisInt(1,2,3);
  ecritSommeDifflireInt();
}

