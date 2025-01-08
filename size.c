#include<stdio.h>
int main()
{
    short int a;
    long int b;
    long long int c;
    long double d;
    printf("size of short = %d bytes\n",sizeof (a));
    printf("size of long = %d bytes\n",sizeof (b));
    printf("size of long long = %d bytes\n",sizeof (c));
    printf("size of double long = %d bytes\n",sizeof (d));
    return 0;
}

