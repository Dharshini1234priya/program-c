#include<stdio.h>
int main()
{
      int m,n,i,j,element,count=0;
      printf("enter the number of rows:");
      scanf("%d",&m);
      printf("enter the number of column:");
      scanf("%d",&n);
     int matrix[m][n];
     printf("enter the elements of the matrix:/n");
    for(i=0;i<m;i++)
        {
    for(j=0;j<n;j++);
      {

        printf("element[%d][%d]:",i,j);
        scanf("%d",&matrix[i][j]);
        }
        }
       printf("enter the element to count:");
       scanf("%d",&element);
       for(i=0;i<m;i++)
        {
       for(j=0;j<n;j++)
        {
            if(matrix[i][j]==element)
                {
                count++;
            }

        }
       }
       printf("the element %d appear %d times in the matrix %n",element,count);
       return 0;


    }
