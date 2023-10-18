#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double x;
    double a,b;
    cin>>x>>a>>b;
    cout<<round(x+(x*(a/100)+(x*(b/100))));
    return 0;
}