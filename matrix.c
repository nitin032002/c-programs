#include<stdio.h>
void main()
{
    int a[3][4]={{7,8,3,2},{2,6,1},{6,3,4}};
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j =0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
}