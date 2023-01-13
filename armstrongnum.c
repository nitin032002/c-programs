#include<stdio.h>
#include<math.h>
void main()
{
    int n,temp1,temp2,r,c=0,s=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    temp1=n;
    temp2=n;
 while (n!=0)   
 {
     n=n/10;
    c++;
 }
 while (temp1>0)
 {
    r=temp1%10;
    s=s+(pow(r,c));
    temp1=temp1/10;

 }
 if(s==temp2)
{
    printf("i am armstrong number");

} 
else{
    printf("i am not a armstrong ");
}
}