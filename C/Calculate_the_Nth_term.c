#include<stdio.h>
int sum(int n,int a,int b,int c);
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",sum(n,a,b,c));
    return 0;
}

int sum(int n,int a,int b,int c)
{
    if(n < 1) return 0;
    if(n == 1) return a;
    if(n == 2) return b;
    if(n == 3) return c;
    return (sum(n-1,a,b,c) + sum (n-2,a,b,c) + sum(n-3,a,b,c));
}