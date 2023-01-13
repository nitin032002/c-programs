#include<stdio.h>
void main()
{
    int a[100],i,j,n,count,freq[100];
    printf("enter number of  element in array: ");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        freq[i]=-1;

    }for(i=0;i<n;i++)
    {
        count=1;
    for(j=i+1;j<n;j++)
    {
     if(a[i]==a[j])
     {
        count++;
        freq[j]=0;
     }
    }
    if(freq[i]!=0)
    {
        freq[i]=count;
    }
    }
    printf("frequency of all element\n");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],freq[i]);
        }
    }
}