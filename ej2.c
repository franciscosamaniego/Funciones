#include <stdio.h>

void saludar(char *nombre) {
  printf("Hola, %s\n", nombre);
}

int main(int argc, char *argv[]) {
  char *nombre = argv[1];
  saludar(nombre);
  return 0;
}
