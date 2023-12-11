#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    str.push_back(',');
	vector<int> v;
    stringstream ss(str);
    char ch;int a;
    while(ss >> a >> ch){
        v.push_back(a);
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}