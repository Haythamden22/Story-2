#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("entrer un cractere :\n");
    scanf("%c",&c);

    switch(c){
        case 'a' : printf("le caractere est voyelle");
            break;
        case 'i' : printf("le caractere est voyelle");
            break;
        case 'o' : printf("le caractere est voyelle");
            break;
        case 'u' : printf("le caractere est voyelle");
            break;
        case 'e' : printf("le caractere est voyelle");
            break;
        default : printf("n'est pas voyelle");
            break;



    }
    return 0;
}
