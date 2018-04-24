#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,i,j;
     printf("enter the number of rows and columns");
     scanf("%d%d",&m,&n);
     printf("enter the elements of matrix A");
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     printf("enter the elements of matrix B");
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             c[i][j]=a[i][j] -b[i][j];

         }

     }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("%d",c[i][j]);
             printf("\t");
         }
         printf("\n");
     }
    return 0;
}
