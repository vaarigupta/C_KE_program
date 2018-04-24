#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10],c[10][10],i,j,m,n;
    printf("enter the number of rows and columns");
    scanf("%d%d",&m,&n);
    printf("enter the elements of matrix of A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix of B");

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
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
