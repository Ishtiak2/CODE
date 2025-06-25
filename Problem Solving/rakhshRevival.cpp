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
        ll n,m,k;
        cin >> n >> m >> k;
        string str;
        cin >> str;
        
        ll cnt,count;
        cnt = count = 0;
        ll f = k;

        for(ll i = 0; i <= str.length(); i++) {
            if(str[i] == '0' && f == k){
                cnt++;
            }
            
            else if(str[i] == '1' && f == k) {
                cnt = 0;
            }

            if(cnt == m && f > 0){
                f--;
            }
            
            if(f == 0){
                count++;
                cnt = 0;
                f = k;
            }
                
        }
        if(f != k) count ++;
        
        cnt = 0;

        
        
        cout << count << endl;
    }

    return 0;
}