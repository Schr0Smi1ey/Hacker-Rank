#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
vector<vector<int>> adj;
vector<int> cost;
vector<int> parent;
vector<int> subTreesum;
int subTreesum_cal(int node){
    subTreesum[node] = cost[node];
    for(int child : adj[node]){
        subTreesum[node] += subTreesum_cal(child);
    }
    return subTreesum[node];
}
signed main()
{
    fastio;
    int n;cin >> n;
    parent.resize(n);
    adj.resize(n);
    for(int i=0;i<n;i++){
        cin >> parent[i];
        if(i==0) continue;
        adj[parent[i]].push_back(i);
    }
    cin >> n;
    cost.resize(n);
    for(int i=0;i<n;i++){
        cin >> cost[i];
    }
    subTreesum.resize(n);
    subTreesum_cal(0);
    int total_size = subTreesum[0];
    int ans = INT_MAX;
    for(int i=1;i<n;i++){
        int complement = total_size - subTreesum[i];
        ans = min(ans,abs(complement-subTreesum[i]));
    }
    cout << ans ;
    return 0;
}
/*
    TestCase : 
    
        input : 
        6
        -1 0 0 1 1 2
        6
        1 2 2 1 1 1
        outout : 0
*/