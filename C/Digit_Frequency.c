#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// digit frequency
int main()
{
    char str[1001];
    gets(str);
    int arr[10]={0};
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        arr[str[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}