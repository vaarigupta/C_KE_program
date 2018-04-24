#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i , val, a[20],count=0,sum;
    printf("input the total no of elements");
    scanf("%d",&n);
    printf("input the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("input the element to be searched for its position");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        { sum += count;
          count++;
          printf("%d is found at index %d\n",val,i);
        }
            else{i ++;}

    }
    if(count!=0)
    {
      printf("the %d is obtained %d times\n",val,sum);
    }
    else
    {
        printf("not found");
    }


}
