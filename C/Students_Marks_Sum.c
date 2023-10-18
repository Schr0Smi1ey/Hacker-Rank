#include<stdio.h>
int studentsmarks(int *arr,int n,char gender);
int main()
{
    int n;
    char gender;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("\n");
    scanf("%c",&gender);
    printf("%d",studentsmarks(arr,n,gender));

    return 0;
}
int studentsmarks(int *arr,int n,char gender)
{
    int sum=0;
    if(gender=='b')
    for(int i=0;i<n;i+=2)
    {
        sum=sum+*(arr+i);
    }
    else
    {
        for(int i=1;i<n;i+=2)
        {
            sum=sum+*(arr+i);
        }
    }

    return sum;
}