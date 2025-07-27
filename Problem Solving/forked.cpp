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
        ll a,b,k1,k2,q1,q2;
        cin >> a >> b;
        cin >> k1 >> k2;
        cin >> q1 >> q2;

        ll c = 0;
        set<pair<ll,ll>> v = {{k1+a, k2+b}, {k1+a, k2-b}, {k1-a, k2-b},{k1-a, k2+b},{k1+b, k2+a}, {k1+b, k2 -a}, {k1-b, k2-a}, {k1-b, k2+a}};
        set<pair<ll,ll>> x = {{q1+a, q2+b}, {q1+a, q2-b}, {q1-a, q2-b},{q1-a, q2+b},{q1+b, q2+a}, {q1+b, q2 -a}, {q1-b, q2-a}, {q1-b, q2+a}};

        for(auto it: v) {

            for(auto j: x) {
                if(it.first == j.first && it.second == j.second) {
                    c++;
                    //cout<<it.first <<"," << it.second <<" ";
                }
            }
        }

        cout << c << endl;
    }
    return 0;
}