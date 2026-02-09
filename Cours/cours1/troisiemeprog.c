#include "inout.h"

int main(int nargs, char **args) {
  ecrireString("\nHello world!\n");
  pause();
  /*@\tikz \coordinate (ecrireInt);@*/ecrireInt(12);
  ecrireString("\nBye world!\n");
}
