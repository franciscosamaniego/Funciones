#include <stdio.h>

void touppercase(char *s) {
  int i = 0;
  while(s[i] != 0) {
    if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    i++;
  }
}
int main(int argc, char *argv[]) {
  printf("%s\n", argv[1]);
  touppercase(argv[1]);
  printf("%s\n", argv[1]);
  return 0;
}
