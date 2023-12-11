#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,q;cin >> n >> q;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        int x;cin >> x;
        while(x--){
            int y;cin >> y;
            v[i].push_back(y);
        }
    }   
    while(q--){
        int i,j;cin >> i >> j;
        cout << v[i][j] << endl;
    }
    return 0;
}