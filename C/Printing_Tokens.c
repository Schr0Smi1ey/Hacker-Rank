#include<stdio.h>
int main()
{
    char str[1001];
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        printf("\n");
        else
        printf("%c",str[i]);
        i++;
    }
    return 0;
}