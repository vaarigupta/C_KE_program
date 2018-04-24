#include<stdio.h>
#include<conio.h>
void main()
{
    int n ,i,val, a[20], s, e,mid;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&val);
    s =0;
    e =n-1;
    while(s<=e)
    {
        mid= s+e/2;
        if(a[mid]==val)
        {
            printf("hence found at index %d ",mid+1);
            break;
        }
        else if(val<a[mid])
        {
            e = mid-1;
        }
        else
        {
            s = mid +1;
        }
    }
    if(s>e&&(a[mid]!=val))
    {
        printf("%d not found ",val);
    }

}
