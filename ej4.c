#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c) {
  if(a + b > c && b +c > a && c + a > b) return true;
  else return false;
}
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if(is_triangle(a, b, c) == true) printf("True\n");
  else printf("False\n");
  return 0;
}
