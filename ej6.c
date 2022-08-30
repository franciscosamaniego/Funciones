#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int alea(int a, int b) {
  srand(time(NULL));
  int r = (rand() % b - a) + a + 1;
  printf("%d\n", r);
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  alea(a, b);
  return 0;
}
