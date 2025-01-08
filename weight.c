#include<stdio.h>
int main()
{
float weight,height,bmi;
printf("Enter your weight in kilograme\n:");
scanf("%f",&weight);
printf("Enter your height in meters\n:");
scanf("%f",&height);
bmi=weight/(height*height);
if(bmi<18.5)
{
printf("you BMI is %.2f. you are underweight.\n",bmi);
}
else if (bmi>=18.5&&bmi<24.9)
{
printf("your BMI is %.2f. you have normal weight.\n",bmi);
}
else if (bmi>=25&&bmi<29.9)
{
printf("your BMI is %.2f.you are overweight.\n",bmi);
}
else
{ 
printf("your BMI is %.2f.you are obese.\n",bmi);
}
return 0;
}


