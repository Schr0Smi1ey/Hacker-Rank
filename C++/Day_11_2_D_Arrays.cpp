#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_totalLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;
int arr[6][6];
int calc(int i,int j){
    int total = 0;
    total += (arr[i][j] + arr[i][j+1] + arr[i][j+2]);
    total += arr[i+1][j+1];
    total += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
    return total;
}
void solution(){
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        cin>>arr[i][j];
    }
    int ans = calc(0,0);
    for(int i=0;i<4;i++){
        for(int j = 0 ;j<4 ;j++){
            ans = max(ans,calc(i,j));
        }
    }
    cout << ans << endl;
}
int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    while(t--){
        solution();
    }
    return 0;
}