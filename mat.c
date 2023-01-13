#include<stdio.h>
void main()
{
    int a[50];
    int i,j,n;
    printf("enter the element in array");
    scanf("%d",&n);
    printf("enter array element");
    for (i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==n)
        {
            break;
        }

    }
    if(i<n)
    {
    printf("element found at index%d",i);
    }
    else
    {
    printf("element not found");
    }
}