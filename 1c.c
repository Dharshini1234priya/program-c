#include<stdio.h>
#include<math.h>
int main()
{

    float principle,rate,year,si,ci;
    printf("enter the principlr amount:");
    scanf("%f",&principle);
    printf("enter the number of years:");
    scanf("%f",&year);
    printf("enter the rate of interest:");
    scanf("%f",&rate);
    si=(principle*year*rate)/100;
    printf("simple intrest = %f\nu",si);
    ci=principle*(pow((1+rate/100),year));
    printf("compound intrest = %f",ci);
    return 0;
}


