#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;cin>>s;
    stack<char> stk;
    for(auto x:s)
    stk.push(x);
    queue<char> q;
    for(auto x:s)
    q.push(x);
    while(!q.empty())
    {
        if(q.front()!=stk.top())
        {
            cout<<"The word, "<<s<<", is not a palindrome.";
            return 0;
        }
        stk.pop();
        q.pop();
    }
    cout<<"The word, "<<s<<", is a palindrome.";
    return 0;
}