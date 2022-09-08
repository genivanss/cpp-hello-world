#include "hello.h"

int main() {

  Hello helloDefault; 
  helloDefault.print();

  Hello helloSpanish("Hola Mundo");
  helloSpanish.print();
  
  Hello helloPortuguese("Ola Mundo");
  helloPortuguese.print();

  return 0;
}