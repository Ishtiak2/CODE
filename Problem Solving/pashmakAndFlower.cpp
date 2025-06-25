#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
    
    ll min = arr[0];
    ll max = arr[n-1];

    ll minCount,maxCount;
    minCount = maxCount = 0;

    for(ll i = 0; i < n; i++){
        if(arr[i] == min) minCount++;
        if(arr[i] == max) maxCount++;
    }

    if(max == min){
        cout<< max - min <<" " << minCount*(minCount-1)/2;
    }
    else
        cout<< max - min <<" " << maxCount*minCount;    
    
    return 0;
}