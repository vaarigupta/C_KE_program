#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,j,k,ar[2][3][3];
   printf("enter the numbers");
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
               scanf("%d",&ar[i][j][k]) ;
            }
        }
    }
    printf("\n displaying values: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("ar[%d][%d][%d]=%d \n",i,j,k,ar[i][j][k]);
            }
        }
    }
    return 0;
}


