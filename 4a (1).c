#include<stdio.h>
#define max100
void printunique(int arr[],int n)
{
int i,j,count;
  printf("unique element are:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
{

    count=0;
    for(j=0;j<n;j++){
        if(arr[9]==arr[j]){
            count++;
        }
    }
    }
    if(count==1){
        printf("/n");
    }
}
    int main()
    {
        printf("enter the number of elements in the array:");
        scanf("%d",&n);
        printf("enter the element of the array:/n");
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printunique(arr,n);
    return 0;
    }



