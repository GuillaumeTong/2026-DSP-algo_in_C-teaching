#include"inout.h"

void f () {
  ecrireString("Hello World\n");
}

void g() {
  ecrireInt(lireInt());
}

void main(void) {
  f(); // Appel a la procedure f
  g(); // Appel a la procedure g
}
