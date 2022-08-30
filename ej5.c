#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double roots(double a, double b, double c) {
  //codigo que aplica la formula de la cuadratica
  double discriminant = b*b - 4*a*c;
  double root = sqrt(discriminant);
  double x1 = (-b + root) / (2*a);
  return x1;
}
double roots2(double a, double b, double c) {
  //codigo que aplica la formula de la cuadratica
  double discriminant = b*b - 4*a*c;
  double root = sqrt(discriminant);
  double x2 = (-b - root) / (2*a);
  return x2;
}

int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[1]);
  double c = atof(argv[1]);
  printf("%.2f\n", roots(a,b,c));
  printf("%.2f\n", roots2(a,b,c));
  return 0;
}
