#include<bits/stdc++.h>
using namespace std;
// left rotation
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    d = d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    for(auto x : arr)
    cout<<x<<" ";
}