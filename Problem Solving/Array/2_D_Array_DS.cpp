#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        cin>>arr[i][j];
    }
    int sum ,maxima = INT_MIN;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            sum = 0;
            sum+=(arr[i][j]+arr[i-1][j]+arr[i-1][j-1]+arr[i-1][j+1]+arr[i+1][j]+arr[i+1][j-1]+arr[i+1][j+1]);
            maxima = max(maxima,sum);
        }
    }
    cout<<maxima<<endl;
    return 0;
}