#include<bits/stdc++.h>
using namespace std;
// maximizing XOR
// Time complexity : O(n^2)
int main()
{
    int l,r,temp,maxima=INT_MIN;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        for(int j=i;j<=r;j++)
        {
            temp = i^j;
            maxima = max(maxima,temp);
        }
    }
    cout<<maxima;
    return 0;
}