#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,k,l,m,n;
   for (i=5;i>=1;i--)
   {
       for (j=1;j<=i;j++)

          {
              printf(" ");
          }

        for (k=10;k>=((2*j)-1);k--)
           {
               printf("*");
           }


       {
           printf("\n");
       }


   }

for (l=1;l<=5;l++ )

{
    for (m=1;m<=l;m++)


    {
        printf(" ");
    }


   for(n=10;n>=((2*m)-1);n--)
   {
       printf("*");
   }


    {
        printf("\n");
    }


}

    return 0;

}
