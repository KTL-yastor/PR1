#include<stdio.h>
#include<stdlib.h>

int main(void) {
  double *wektor_a, *wektor_b, iloczyn;
  int dlugosc, i;

  printf("Podaj długość wektorów: \n");
  scanf("%d", &dlugosc);

  wektor_a = (double *) malloc(dlugosc * sizeof(double));
  wektor_b = (double *) malloc(dlugosc * sizeof(double));

  printf("Podaj współrzędne pierwszego wektora:\n");
  for (i = 0; i < dlugosc; i++)
    scanf("%lf", wektor_a + i); /* r�wnowa�nie: &wektor_a[i] */

  printf("Podaj współrzędne drugiego wektora:\n");
  for (i = 0; i < dlugosc; i++)
    scanf("%lf", wektor_b + i); /* r�wnowa�nie: &wektor_b[i] */

  for (i = 0, iloczyn = 0; i < dlugosc; i++)
    iloczyn += wektor_a[i] * wektor_b[i];

  printf("Iloczyn skalarny wektorów wynosi: %f\n", iloczyn);

  free(wektor_a);
  free(wektor_b);

  return 0;
}
