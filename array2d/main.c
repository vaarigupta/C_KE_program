#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[2][2],i,j,m,n;
   printf("enter the rows and columns of matrix");
   scanf("%d%d",&m,&n);
   printf("enter the numbers");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);

       }

   }
   for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
        printf("\t");
    }
    printf("\n");
}
    return 0;
}
