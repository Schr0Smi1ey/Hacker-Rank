#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    bitset<32> bs(n);
    int maxima = INT_MIN;
    for(int i=31;i>=0;i--)
    {
        if(bs[i]==1)
        {
            int temp = 0;
            while(bs[i]==1)
            {  
                temp++;
                if(bs[i-1]==1)
                {
                    i--;
                }
                else
                break;
                
            }
            maxima = max(maxima,temp);
        }
    }
    cout<<maxima;
    return 0;
}