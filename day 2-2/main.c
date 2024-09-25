#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entrer nomber a : \n");
    scanf("%d",&a);
    if (a%2 == 0)
        printf("nomber pair");
    else
        printf("nomber impair");
    return 0;
}
