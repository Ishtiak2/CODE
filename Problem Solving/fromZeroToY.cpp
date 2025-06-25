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
        ll x,y;
        cin >> x >> y;

        double a = log(y/x);
        ll p = a;

        ll k = 0;
        ll count = 0;

        while(k < y && p >= 0){
            if(k + x*pow(10,p) > y){
                p--;
                continue;
            }
            double s = (y-k)/(x*pow(10,p));
            
            k = k + x*pow(10,p)*(int)s;
            
            count+=(int)s;
            p--;
        }

        count+= y-k;
        cout<<count<<endl;
    }
    return 0;
}