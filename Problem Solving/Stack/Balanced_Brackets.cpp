#include<bits/stdc++.h>
using namespace std;
// balanced brackets
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = false;
        string str;
        cin>>str;
        stack<char> stk;
        for(int i=0;i<str.size();i++)
        {
            if(str[0]==')' || str[0]==']' || str[0]=='}')
            {
                flag = true;
                break;
            }
            if(stk.empty() && (str[i]==')' || str[i]==']' || str[i]=='}'))
            {
                flag = true;
                break;
            }
            if(str[i]=='(' || str[i]=='[' || str[i]=='{')
            stk.push(str[i]);
            else
            {
                if(str[i]==')' && stk.top()=='(')
                stk.pop();
                else if(str[i]==']' && stk.top()=='[')
                stk.pop();
                else if(str[i]=='}' && stk.top()=='{')
                stk.pop();
                else break;
            }
        }
        if(flag)
        {
            puts("NO");
            continue;
        }
        puts(stk.empty()?"YES":"NO");
    }
    return 0;
}