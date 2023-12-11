#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;cin >> q;
    map<string,int> mp;
    while(q--){
        string str;int t,x;cin >> t;
        if(t == 1){
            cin >> str >> x;
            mp[str] += x;
        }
        else if(t == 2){
            cin >> str;
            mp.erase(str);
        }
        else{
            cin >> str;
            if(mp.find(str) != mp.end()){
                cout << mp[str] << endl;
             }
             else{
                 cout << 0 << endl;
             }
        }
    }   
    return 0;
}



