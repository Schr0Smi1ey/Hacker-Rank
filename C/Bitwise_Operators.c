#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// bitwise operator
void calculate_the_maximum(int n, int k);

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    calculate_the_maximum(n,k);
    return 0;
}
void calculate_the_maximum(int n, int k) 
{
    int and=0,or=0,xor=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int tempand = i&j;
            int tempor = i|j;
            int tempxor = i^j;
            if(tempand>and && tempand<k)
            and = tempand;
            if(tempor>or && tempor<k)
            or = tempor;
            if(tempxor>xor && tempxor<k)
            xor = tempxor;
        }
    }
    printf("%d\n%d\n%d\n",and,or,xor);
}