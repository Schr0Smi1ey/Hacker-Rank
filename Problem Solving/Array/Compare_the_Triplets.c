#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// compare the triplets
int main()
{
    int arr[3],arr2[3];
    int alice = 0,bob = 0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]>arr2[i])
        alice++;
        else if(arr2[i]>arr[i])
        bob++;
    }

    printf("%d %d",alice,bob);
    return 0;
}
