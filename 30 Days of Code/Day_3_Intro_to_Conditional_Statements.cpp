#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n&1 || (n%2==0 && n>=6 && n<=20))
    cout<<"Weird"<<endl;
    else
    cout<<"Not Weird"<<endl;
}