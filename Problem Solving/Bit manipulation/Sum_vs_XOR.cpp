#include<bits/stdc++.h>
using namespace std;
// sum vs XOR
int main()
{
    long long int n;
    cin>>n;
    long long int unset_bit=0;
    bitset<75> bs(n); // convert the number to it's bitset
    for(int i=74;i>=0;i--) // starting from highest index as MSB(left most value) here
    // LSB(left most value) in zero index 
    {
        if(bs[i]==true)
        {
            while(true)
            {
                if(bs[i]==false)
                unset_bit++; // counting the unset in n
                i--;
                if(i<0)
                break;
            }
        }
    }
    // ans will be the 2^unset_bit
    cout<<(1LL<<unset_bit)<<endl;  // don't forget to typecasting
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
// another method
int main()
{
    long long int n;
    cin>>n;
    int unset_bit=0;
    while(n) // count number of zeros until n become zero
    {
        if((n&1)==0)
        unset_bit++;
        n>>=1;
    }
    cout<<(1LL<<unset_bit);
    return 0;
}