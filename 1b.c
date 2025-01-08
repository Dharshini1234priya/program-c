#include<stdio.h>
int main()
{

    int days=365,years,weeks,hours;
    printf("enter the number of days:");
    scanf("%d",&days);
    hours=days*24;
    years=(days/365);
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("number of hours:%d\n",hours);
    printf("number of years:%d\n",years);
    printf("number of weeks:%d\n",weeks);
    printf("number of days:%d\n",days);
    return 0;
}

