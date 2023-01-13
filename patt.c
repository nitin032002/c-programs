#include<stdio.h>
void main()
{
int i,j,n,c=1;
printf("enter the vaue of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("\n");
    for(j=1;j<=i;j++)
    {
        printf("%d\t",c);
        c++;
    }
}
}