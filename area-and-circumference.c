#include<stdio.h>
#define PI 3.14
int main()
{
  float r,area,cir;
  printf("Enter the radius of the circle : ");
  scanf("%f",&r);
  cir=2*PI*r;
  area=PI*r*r;
  printf("Circumference of the circlr is = %f",cir);
  printf("\nArea of the circle is = %f",area);
  return 0;
}
