#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int randomnumber,guess;
    srand(time(0));
    randomnumber=(rand()%20)+1;
    printf("guess the random number(between 1 and 20):\n");
    while(1){
        printf("enter your guess:");
        scanf("%d",&guess);
        if(guess==randomnumber){
            printf("congratulations!you guessed the correct number:%d \n",randomnumber);
            break;
        }else if(guess<randomnumber){
        printf("too low !try agaiin.\n");
        }else{
       printf("too high!try again.\n");
        }
    }
  return 0;
}





