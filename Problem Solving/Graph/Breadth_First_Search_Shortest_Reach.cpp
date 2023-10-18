#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define INF INT_MAX
int n,m;
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<vector<int>> adj(n+1);
        vector<int> dis(n+1,-1);
        // graph reading
        for(int i=0,u,v;i<m;i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // BFS 
        int src ;cin >> src;
        queue<int> q;
        q.push(src);
        dis[src] = 0;
        while(!q.empty())
        {
            int current = q.front();
            q.pop();

            for(auto x : adj[current])
            {
                if(dis[x]==-1)
                {
                    q.push(x);
                    dis[x] = dis[current] + 6;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i==src)
            continue;
            cout << dis[i] << " ";
        }
        cout << endl;
    }
    return 0;
}