#include<bits/stdc++.h>
using namespace std;
// lonely integer
// Time complexity : O(n)
int main()
{
    int n,ans=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans^=arr[i];
    }
    cout<<ans;
    return 0;
}