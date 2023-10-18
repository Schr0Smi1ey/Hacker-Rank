#include<stdio.h>
//Funtions in c (pass by value)
int max_of_four(int a,int b,int c,int d);
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    printf("%d",ans);
}
int max_of_four(int a,int b,int c,int d)
{
    int value1,value2;
    value1=(a>b)?a:b;
    value2=(c>d)?c:d;   // ternery operator
    return (value1>value2)?value1:value2;
}