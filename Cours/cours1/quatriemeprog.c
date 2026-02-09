#include "inout.h"

int main(int nargs, char **args) {
  ecrireString("\nHello world!\n");
  pause();
  /*@\tikz \coordinate (ecrireInt);@*/ecrireInt(/*@\tikz \coordinate (add);@*/12+5);
  ecrireString("\nBye world!\n");
}
