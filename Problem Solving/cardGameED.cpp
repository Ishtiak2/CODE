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

    while(t--) {
        ll n;
        cin >> n;
        string str;
        cin >> str;

        ll cbob = 0;
        
        for(ll i = 0; i < n; i++) {
            if(str[i] == 'B') cbob++;
        }

        bool ans = 0;
        for(ll i = 0; i < n; i++) {
            
            if(str[0] == 'A' && str[n-1] == 'A'){
                ans = 0;
                break;
            }    
            
            if(str[0] == 'B' && str[n-1] == 'B'){
                ans = 1;
                break;
            } 

            if(str[n-1] == 'B' && cbob > 1){
                ans = 1;
                break;
            }

            if(str[0] == 'B' && str[n-2] == 'B'){
                ans = 1;
                break;
            }
            
        }

        if(ans) cout <<"Bob" << endl;
        else cout <<"Alice" << endl;
    }
    return 0;
}