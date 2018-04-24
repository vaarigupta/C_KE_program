#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,l,m,n;

    printf("FINDING UPPER AND LOWER TRIANGULAR MATRICES \n");
    printf("enter the rows and columns of matrix A");
    scanf("%d%d",&m,&n);
     printf("enter the elements in matrix A");
     for (i=0;i<m;i++)
     {
         for (j=0;j<n;j++)
         {
             if (i<=j)
             {
                 scanf("%d",a[i][j]);
             }

         }
     }
     for (i=0;i<m;i++)
     {
         for (j=0;j<n;j++)
         {
        printf("%d",a[i][j]);
        printf("\t");
         }
         printf("\n");
     }

    return 0;
}
