#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int s;cin >> s;
    string str[s];
    for(int i=0;i<s;i++){
        cin >> str[i];
    }
    int ans = 0,temp = 0,target,cost = 0;
    cin >> target;
    for(int i=0;i<n;i++){
        if(str[i] == "legal"){
            temp++;
        }
        cost += arr[i];
        if(temp == target){
            ans = max(ans,cost);
            cost = 0;
            temp = 0;
        }
    }
    cout << ans;
    return 0;
}