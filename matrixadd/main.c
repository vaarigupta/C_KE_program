#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2] ,b[2][2], c[2][2],i,j,k,l,m,n;
    printf("ADDITION OF TWO MATRICES \n");

    printf("enter the rows and columns of the matrix A");
    scanf("%d%d",&m,&n);

    printf("enter the elements in matrix A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the rows and columns of matrix B");
    scanf("%d%d",&m,&n);
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
            c[i][j]=a[i][j] + b[i][j];
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
