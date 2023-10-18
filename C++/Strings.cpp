#include<bits/stdc++.h>
using namespace std;
// strings
int main()
{
    string str,str2;
    cin>>str>>str2;
    cout<<str.size()<<" "<<str2.size()<<endl;
    cout<<str+str2<<endl;
    swap(str[0],str2[0]);
    cout<<str<<" "<<str2;
    return 0;
}