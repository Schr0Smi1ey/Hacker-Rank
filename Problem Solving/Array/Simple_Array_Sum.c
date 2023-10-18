#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// simple array sum
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}