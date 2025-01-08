#include<stdio.h>
int main()
{
    int age ;
    printf("Enter you age to check if you can enter this pub:");
    scanf("%d",&age);
    if (age >=20&& age<=60)
    {
        printf("you are invited .\n");
    }
    else
    {
        printf("sorry,you cannot enter.\n");
    }
    return 0;
}







