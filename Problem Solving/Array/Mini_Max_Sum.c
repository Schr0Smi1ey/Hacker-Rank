#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// mini max sum
int cmp(const void *a,const void *b);
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,5,sizeof(int),cmp);
    long long int min = 0,max = 0;
    for(int i=0;i<5;i++)
    {
        if(i!=4)
        {
            min = min + arr[i];
        }
        if(i!=0)
        {
            max = max + arr[i];
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}