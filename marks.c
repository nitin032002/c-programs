#include<stdio.h>
void main()
{
    int a[100],fre[100];
    int n,i,j,count;
    printf("enter the size of the array :");
    scanf("%d",&n);
    printf("enter marks of student\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        fre[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count =1;
        for(j=i-1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fre[j] =0;

            }
        }
        if(fre[i]!=0)
        {
            fre[i]= count;
        }
    } 
    printf("\n number of students got same marks :");
    for(i=0;i<n;i++)
    {
        printf("%d occurs %d times\n",a[i],fre[i]);
    }
}