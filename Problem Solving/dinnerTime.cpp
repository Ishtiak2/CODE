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
        int n,m,p,q;
        cin >> n >> m >> p >> q;

        if(n%p == 0){
            if((n/p) * q == m){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"YES"<<endl;

    }
    return 0;
}