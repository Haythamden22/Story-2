#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,discriminant;
    printf(" b*b-4*a*c ");
    printf("entrer a");
    scanf("%f",&a);
    printf("entrer b");
    scanf("%f",&b);
    printf("entrer c");
    scanf("%f",&c);
    discriminant= b*b-4*a*c;
    if (discriminant<0)
    printf("une solution  non reelle");
    else if(discriminant==0)
        printf("une solution reelle");
    else
    printf("une solution reelle");





    return 0;
}
