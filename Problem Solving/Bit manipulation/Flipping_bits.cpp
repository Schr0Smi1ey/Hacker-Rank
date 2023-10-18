#include<bits/stdc++.h>
using namespace std;
// flipping bits
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        bitset<32> bs(n);
        for(int i=0;i<32;i++)
        bs[i].flip();
        cout<<bs.to_ulong()<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// flipping bits
// better approach
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<(n^((1LL<<32)-1))<<endl;
    }
    return 0;
}
