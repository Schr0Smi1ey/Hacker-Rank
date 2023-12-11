#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;cin >> n;
    map<string,string> mp;
    while(n--){
        string a,b;cin >> a >> b;
        mp[a] = b;
    }  
    string query;
    while(cin >> query){
        if(mp.find(query) != mp.end()){
            cout <<query << "=" << mp[query] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}