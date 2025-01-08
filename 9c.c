#include<stdio.h>
enum direction{
    north,
    east,
    south,
    west,
};
int main()
{
    enum direction heading=north;
    if(heading=north)
    printf("you are heading north\n");
    else if(heading==east)
    printf("you are heading south\n");
    else if(heading==west)
    printf("you are heading west\n");
    return 0;
}



