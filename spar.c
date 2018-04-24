
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20][20],b[20][20],i,j,k,m,n;
    printf("enter the no of rows and columns");
    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {    printf("enter the elements a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]= a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
            printf("\n");
        }
    }


}
