#include<bits/stdc++.h>
using namespace std;
// vector erase
int main()
{
    int n,x,a,b;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    cin>>x;
    v.erase(v.begin()+--x);
    cin>>a>>b;
    v.erase(v.begin()+--a,v.begin()+--b);
    cout<<v.size()<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}