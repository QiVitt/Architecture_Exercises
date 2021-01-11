//N.b Compilation via gcc main.c -o main.o -lm

#include <stdio.h>
#include <math.h>

double distance_compute(double x, double y, double x1, double y1);

int main( )
{
  double ascissa1, ascissa2, ordinata1, ordinata2;
  double distanza;

  printf("Inserire la prima ascissa: ");
  scanf("%lf", &ascissa1);
  printf("Inserire la prima ordinata: ");
  scanf("%lf", &ordinata1);
  printf("Inserire la seconda ascissa: ");
  scanf("%lf", &ascissa2);
  printf("Inserire la seconda ordinata: ");
  scanf("%lf", &ordinata2);

  distanza = distance_compute(ascissa1,ordinata1,ascissa2,ordinata2);
  printf("Il risultato e': %lf", distanza);

  return 0;
}

double distance_compute(double x, double y, double x1, double y1)
{
  double distance;
  distance = sqrt(pow(x1-x,2)+pow(y1-y,2));
//distance = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
  return distance;
}