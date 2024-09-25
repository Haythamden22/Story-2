#include <stdio.h>
#include <stdlib.h>

int main()
{
     int k;
    float P,i;
    printf("entrer k");
    scanf("%d",&k);
    if(k<0)
        printf("veuiller entrer un nomber pisitif");
        else
            if(k==0)
            printf("la factoreille est 1");
        else
            P=0;
        for(i=1;i<=k;i++)
         P = P + i;
        printf("la factoreille de %d est : %.2f",k,P);
    return 0;
}
