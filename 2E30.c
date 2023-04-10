#include <math.h>
#include <stdio.h>

/*30. Faça um programa que receba três números e mostre-os em ordem crescente.*/

int main() {
  int x, y, z;
  printf("Apresente 3 numeros distintos: \n");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  if(x < y && x < z && y < z){
    printf ("%d, %d, %d\n", x, y, z);
  }if (x < y && x < z && y > z){
    printf ("%d, %d, %d\n", x, z, y);
  }if (x > y && x < z && y < z){
    printf ("%d, %d, %d\n", y, x, z);
  }if (x < y && x > z && y > z){
    printf ("%d, %d, %d\n", z, x, y);
  }if (x > y && x > z && y < z){
    printf ("%d, %d, %d\n", y, z, x);
  }if (x > y && x > z && y > z){
    printf ("%d, %d, %d\n", z, y, x);
  }
  return 0;
} 
