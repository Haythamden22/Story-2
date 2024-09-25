#include <stdio.h>
#include <stdlib.h>

int main()
{
  float note;
  printf("entrer  la mention obtenue\n");
  scanf("%f",&note);
  if(note<10)
    printf("tu a recale");
  else if(10<=note && note<=12)
    printf("la mention passable");
  else if(12<note && note<=14)
    printf("la mention assez bien");
  else if(14<note && note<=16)
    printf(" la mention bien");
  else if(16<note)
    printf("la mention tres bien");
    return 0;
}
