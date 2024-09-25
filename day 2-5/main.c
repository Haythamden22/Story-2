#include <stdio.h>
#include <stdlib.h>

int main()
{
    const year_day=365;
    const day_hours=24;
    const min_hours=60;
    const second_min=60;
    int years,a;
    printf("entrer a");
    scanf("%d",&a);
    if(years==a)
    printf("number of months in years : %d\n",years*12);
    printf("number of day in years : %d\n",years*year_day);
    printf("number of hours in years : %d\n",years*year_day*day_hours);
    printf("number of min in years : %d\n",years*year_day*day_hours*min_hours);
    printf("number of second in years : %d\n",years*year_day*day_hours*min_hours*second_min);


    return 0;
}
