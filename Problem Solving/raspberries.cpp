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
        ll n,k;
        cin >> n >> k;
        ll x;
        ll ans = k-1;
        ll product = 1;
        ll c9,c5;
        c9=c5=0;
        bool flag1,flag2;
        flag1 = flag2 =false;
        bool flag0 = false;
        ll odd = 0;
        for(ll i = 1; i <= n; i++) {
            cin >> x;
            
            if(x % k == 0) {
                ans = 0;
                flag0 = true;
            }

            else if(x < k) {
                ans = min(ans, k-x);
            }
            else if(x > k) {
                ll r = (x/k) + 1;
                ans = min(ans,r*k - x);
            }

            if(x == 9) c9++;
            if(x == 5) c5++;

            product = product * x;
            
            if(k == 4 && x % 2 == 0) {
                flag1 = true;
            }
            if(k== 4 && x % 2 != 0){
                flag2 = true;
                odd++;
            }
            
        }

        

        if(product % k == 0){
            cout <<"0" << endl;
            continue;
        }
        
        if(flag1 && flag2 && !flag0){
            cout <<"1" << endl;
            continue;
        }
        //cout <<c9 <<"-"<<c5 <<endl;
        if(!flag0 && k == 4 && (c9 >= 2 || c5 >= 2)){
            cout << "2" << endl;
            continue;
        }
        
        if(!flag0 && k == 4 && odd >1){
            cout <<"1" <<endl;
            continue;
        }
        cout << ans << endl;
    }
    return 0;
}