#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> arr(n);

        for(int i = 0; i <n; i++){
            arr[i] = i;
        }

        if(n != x){
            arr[n-1] = x;
            arr[x] = n-1;
        }
        
        for(int i = 0; i <n; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}