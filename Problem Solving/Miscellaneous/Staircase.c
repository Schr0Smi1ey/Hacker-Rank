#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// staircase
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    int hash = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=hash;k++)
        {
            printf("#");
        }
        space--;
        hash++;
        printf("\n");
    }
    return 0;
}