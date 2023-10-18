#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// diagonal difference
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int primary = 0,secodary = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                primary = primary + arr[i][j];
            }
            if(i+j == (n-1))
            {
                secodary = secodary + arr[i][j];
            }
        }
    }
    int result = abs(primary - secodary);
    printf("%d",result);
}