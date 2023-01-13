#include<stdio.h>
void main()
{
    int seen[10]={0};
    int n,rem;
    printf("enter the number ");
    scanf("%d",&n);
    while(n>0)
    {
    rem=n%10;
    if(seen[rem]==1)
    break;
    seen[rem]=1;
    n=n/10;
    }
    if(n>0)
    printf("yes");
    else
    printf("no");


}