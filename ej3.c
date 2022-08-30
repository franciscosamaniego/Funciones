#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool num(int a, int b, int c) {
  if(a == b && a == c) return true;
  else return false;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if(num(a, b, c) == true) printf("True\n");
  else printf("False\n");
  return 0;
}
