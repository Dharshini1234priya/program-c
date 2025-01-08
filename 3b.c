#include<stdio.h>
void decimaltooctal(int n)
{

int octaNum[50],i=0;
    if(n==0)
    {

        printf("0");
        return;
    }
    while(n!=0)
    {

        octaNum[i]=n%8;
        n=n/8;
        i++;
}
    
    printf("the octal equivalent is:");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",octaNum[j]);
    }
    printf("\n");

    }
    int main(){
    int decimal;
    printf("enter a decimal number");
    scanf("%d",&decimal);
    decimaltooctal(decimal);
    return 0;
    }




