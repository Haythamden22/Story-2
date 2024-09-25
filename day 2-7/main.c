#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c;
   printf("enter c");
   scanf("%c",&c);
   if(65<=c && c<=90)
    printf("alphabet majuscule");
    else
        printf("n'est pas majuscule");

    return 0;
}
