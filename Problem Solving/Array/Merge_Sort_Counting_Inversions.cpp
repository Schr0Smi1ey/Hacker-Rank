#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
ll merge(ll *arr,ll low,ll mid,ll high)
{
    ll len1=mid-low+1,len2 = high-mid,count=0,i,j,k;
    ll first[len1],second[len2];
    for(int i=0;i<len1;i++)
    {
        first[i] = arr[low+i];
    }
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mid+1+i];
    }
    i=0,j=0,k=low;
    while(i<len1 && j<len2)
    {
        if(first[i]<=second[j])
        {
            arr[low++]=first[i++];
            k++;
        }
        else
        {
            count+=(mid-k+1);
            arr[low++]=second[j++];
        }
    }
    while(i<len1)
    {
        arr[low++]=first[i++];
    }
    while(j<len2)
    {
        arr[low++]=second[j++];
    }
    return count;
}
ll merge_sort(ll *arr,ll low,ll high)
{
    ll count=0,mid=low+(high-low)/2;
    if(low<high)
    {
        count+=merge_sort(arr,low,mid);
        count+=merge_sort(arr,mid+1,high);
        count+=merge(arr,low,mid,high);
    }
    return count;
}
ll getinversion(ll *arr,ll n)
{
    return merge_sort(arr,0,n-1);
}
void solution()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<getinversion(arr,n)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}