#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    
    vector<ll> arr(n+1);
    vector<ll> p(n+1);
    vector<ll> brr(n+1);

    map<ll,ll> mp;
    map<ll,ll> ans;
    
    p[0] = 0;

    for(int i=1; i<= n; i++){
        cin >> arr[i];
        brr[i] = arr[i];

        //p[i] = p[i-1]+arr[i]; //wrong here
        //cout<<"p[i] = "<< p[i] <<endl;
        mp[arr[i]]++;
    }

    sort(brr.begin(),brr.end());

    for(int i = 1; i <= n; i++){
        p[i] = p[i-1]+brr[i];
    }
    for(int i = 1; i <= n; i++){
        mp[brr[i]]--;
        //cout<<i + mp[brr[i]]<<endl;
        ans[brr[i]] = p[n] - p[i + mp[brr[i]]];
        //cout<<p[n] <<" " << p[i + mp[brr[i]]]<<" ";

    }
    
    for(int i= 1; i<= n; i++){
        cout<<ans[arr[i]] <<" ";
    }
    return 0;
}