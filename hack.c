#include<stdio.h>
int sumofsquares(int n){
int sum=0;
while(n>0){
int digit=n%10;
sum+=digit*digit;
n/=10;
}
return sum;
}
int happynumber(int n)
{
int slow=n,fast=n;
do{
slow=sumofsquares(slow);
fast=sumofsquares(sumofsquares(fast));
}
while(slow!=fast);
return slow==1;
}
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
if(happynumber(num))
{
printf("%d is a happy number\n",num);
}
else{
printf("%d is not a happy number\n",num);}
return 0;
}


