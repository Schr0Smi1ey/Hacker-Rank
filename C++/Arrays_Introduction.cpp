#include <cmath>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse(arr,arr+n);
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}