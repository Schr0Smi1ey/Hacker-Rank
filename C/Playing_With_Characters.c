#include<stdio.h>
int main()
{
    char ch;
    char s[1000];
    char sen[1000];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");    // we can also use getchar() instead of this
    scanf("%[^\n]",sen);
    printf("%c\n",ch);
    puts(s);
    puts(sen);
    return 0;
}