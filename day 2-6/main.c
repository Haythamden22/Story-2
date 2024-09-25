#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a;
  printf("enter a :\n");
  scanf("%f",&a);
  if(a<0)
    printf("le nombre a est negatif ",a);
    else if(a==0)
        printf("le nombre a est egal a zero",a);
    else{
    printf("le nombre a est positif ",a);
}
    return 0;
}
