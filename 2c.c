#include<stdio.h>
 int main()
{
    int physics,chemistry,biology,maths,computerscience;
    float percentage;
    printf("enter five subjects mark:");
    scanf("%d %d %d %d %d",&physics,&chemistry,&biology,&maths,&computerscience);
    percentage = (physics+chemistry+biology+maths+computerscience)/5.0;
    printf("percentage=%2.f\n",percentage);
    if(percentage>=90)
    {

        printf("grade A");
    }
    else if(percentage>=80)
    {

        printf("grade B");
    }
    else if(percentage>=70)
    {

        printf("grade C");
    }
     else if(percentage>=60)
    {

        printf("grade D");
    }
    else if(percentage>=50)
    {

        printf("grade E");
    }
    else
    {

        printf("fail");
    }
    return 0;
}



