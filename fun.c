#include<stdio.h>
int fun(int num);
int main()
{
    int m;
m=fun(435);
printf("%d",m);
}
int fun(int num)
{
    int count=2;
    while (num)
    { 
       
        count++;
        num>>=2;
        
        }
    return (count);
}