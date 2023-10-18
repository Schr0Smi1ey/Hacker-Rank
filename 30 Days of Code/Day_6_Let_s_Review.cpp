#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string str,result1,result2;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(i&1)
            result2+=str[i];
            else
            result1+=str[i];
        }
        cout<<result1<<" "<<result2<<endl;
    }
    return 0;
}