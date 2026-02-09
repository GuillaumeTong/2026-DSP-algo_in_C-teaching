#include<stdio.h>
#include "inout.h"

void q1(){
/*@q1d@*/
  int i = 0;
  while(i<5) {
    i = i + 1;
    ecrireInt(i);
    ecrireSautDeLigne();
  }
/*@q1f@*/
}

void q2(){
/*@q2d@*/
  int i = 1;
  while(i<=5) {
    ecrireInt(i);
    i = i + 1;
  }
  ecrireSautDeLigne();
/*@q2f@*/
}

void q3(){
/*@q3d@*/
  int i = 0;
  while(i<5) {
    ecrireInt(i);
    i = i + 1;
  }
/*@q3f@*/
}

void q4(){
/*@q4d@*/
  int i = 0;
  while(i<5) {
    ecrireInt(i);
    ecrireSautDeLigne();
    i = i + 1;
  }
/*@q4f@*/
}

void q5(){
/*@q5d@*/
  int i = 5;
  while(i>=1) {
    ecrireInt(i);
    ecrireSautDeLigne();
    i = i - 1;
  }
/*@q5f@*/
}

void q6(){
/*@q6d@*/
  int i = 5;
  while(i>=1) {
    ecrireInt(6-i);
    ecrireSautDeLigne();
    i = i - 1;
  }
/*@q6f@*/
}

void q7(){
  int pournepasboucler=0;
/*@q7d@*/
  int i = 1;
  while(i<=5) {
    ecrireInt(i);
    ecrireSautDeLigne();
    /*@q7xxxd@*/
    ++pournepasboucler;
    if(pournepasboucler>25) {
      i = 6;
      printf("\ni = 25: boucle inifnie?\n");
    }
    /*@q7xxxf@*/
  }
/*@q7f@*/
}

void q8(){
  int pournepasboucler=0;
/*@q8d@*/
  int i = 1;
  while(i<=5) {
    ecrireInt(i);
    /*@q8xxxd@*/
    ++pournepasboucler;
    if(pournepasboucler>25) {
      i = 6;
      printf("\ni = 25: boucle inifnie?\n");
    }
    /*@q8xxxf@*/
  }
  ecrireSautDeLigne();
/*@q8f@*/
}

void q9(){
/*@q9d@*/
  int i = 1;
  while(i<=6) {
    ecrireInt(i);
    ecrireSautDeLigne();
    i = i + 1;
  }
/*@q9f@*/
}

void q10(){
/*@q10d@*/
  int i = 2;
  while(i<=6) {
    ecrireInt(i-1);
    ecrireSautDeLigne();
    i = i + 1;
  }
/*@q10f@*/
}




void main() {
  
  void(* t[10])() = {q1 , q2, q3 , q4, q5, q6, q7, q8, q9, q10};
  int i;
  for(i = 0; i <= 9 ; i = i + 1){
    printf("Q%d: *****************\n",i+1);
    (*t[i])();
    printf("**********************\n",i+1);
  }
  
  
}
