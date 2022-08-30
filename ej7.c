#include <stdio.h>
#include <stdlib.h>

void array(char *pal, int n) {
  int i = 0;
  while(i < n) {
    printf("%s ", pal[i]);
    i++;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  char *pal[200] = {
  "Hola como estan",
  "Yo bien"
};
  int n = atoi(argv[1]);
  array(pal, n);
  return 0;
}
