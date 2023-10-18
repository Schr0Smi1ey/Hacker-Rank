#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// a very big sum
long long int averybigsum(long long int *arr,int n);
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    printf("%lld",averybigsum(arr,n));
    return 0;
}
long long int averybigsum(long long int *arr,int n)
{
    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
