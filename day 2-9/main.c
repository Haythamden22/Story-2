#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,p,i;
    printf("enter i \n");
    scanf("%d",&i);
    for(m=1;m<=10;m++){
        p=m*i;
        printf("%d*%d=%d\n",m,i,p);
    }
    return 0;
}
