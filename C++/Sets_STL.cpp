#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;cin >> q;
    set<int> st;
    while(q--){
        int x,y;cin >> x >> y;
        if(x == 1){
            st.insert(y);
        }
        else if(x == 2){
            if(st.count(y)){
                st.erase(y);
            }
        }
        else{
            if(st.find(y) != st.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }  
    return 0;
}