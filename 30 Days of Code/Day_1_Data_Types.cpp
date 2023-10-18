#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    double d = 4.0;
    string temp ="HackerRank ";
    string s;
    int q;
    double t;
    cin>>q>>t;
    cin.ignore();
    getline(cin,s);
    cout<<(n+q)<<endl;
    cout<<fixed<<setprecision(1)<<(d+t)<<endl;
    cout<<(temp+s)<<endl;
    return 0;
}
