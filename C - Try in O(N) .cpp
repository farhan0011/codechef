#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[i]=arr[i];
        }
    sort(brr,brr+n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]=i;
        int c=0;
    for(int i=0;i<n;i++)
    {
        if(mp[brr[i]]!=i)
        {
            mp[arr[i]]=mp[brr[i]];
            arr[mp[brr[i]]]=arr[i];
            arr[i]=brr[i];
            mp[brr[i]]=i;
            c++;
        }
    }
    cout<<"Case "<<k<<": "<<c<<endl;
    }
}
