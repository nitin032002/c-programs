#include<stdio.h>
void main()
{
    int a[100],i,n,max,min;
    printf("enter number of element in array ");
    scanf("%d",&n);
    printf("enter array element ");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
max=min=a[0];
for(i=0;i<n;i++)
{
    if(min>a[i])
    min=a[i];
    if(max<a[i])
    max=a[i];
}
printf("minimum element is: %d\n",min);
printf("maximum element is: %d\n",max);
}