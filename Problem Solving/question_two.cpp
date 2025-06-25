#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll N,Q;
    cin >> N >> Q;

    vector<ll> arr(N+2);

    for(ll i = 1; i <= N; i++){
        cin >> arr[i];
    }

    while(Q--){
        ll L,R;
        cin >> L >> R;
        map<int,int> freq;
        
        for(ll i =L; i <= R; i++){
            ll val = arr[i];
            freq[val]++;
        }
        ll max = -1;

        for(ll i =L; i <= R; i++){
            ll val = arr[i];
            if(freq[val] >= max){
                max = arr[i];
            }
        }

        cout<<max<<endl;
        freq.clear();
    }
    return 0;
}