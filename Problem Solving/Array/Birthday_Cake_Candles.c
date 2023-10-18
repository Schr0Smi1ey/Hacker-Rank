#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// birthday cake candles
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max = arr[i];
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        count++;
    }
    printf("%d",count);
    return 0;
}