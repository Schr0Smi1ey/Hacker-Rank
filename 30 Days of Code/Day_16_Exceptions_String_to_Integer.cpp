#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    try 
    {
     cout<<stoi(S);
    } 
    catch (exception e) 
    {
        cout<<"Bad String"<<endl;
    }
    return 0;
}
explain?
