#include<stdio.h>
int main()
{
    char op;
    float num1,num2,result=0.0f;
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("------------------------------\n");
    printf("entre [number 1][+ - *][number 2]\n");
    scanf("%f %c %f",&num1,&op,&num2);
    switch(op)
    {
    case'+':
        result=num1+num2;
        break;
    case'-':
        result=num1-num2;
        break;
    case'*':
        result=num1*num2;
        break;
    case'/':
        if(num2!=0)
        {

            result=num1/num2;
        }
        else{
            printf("error ! division by zero is not allowed.\n");
        }
        break;
    default:
        printf("invalid operator");
    }
    printf("%2.f %c %2.f = %2.f",num1,op,num2,result);
    return 0;
}



