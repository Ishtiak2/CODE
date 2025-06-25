#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();

    ll x;
    cin >> x;

    if(x==1) {
        cout <<"1";
        return 0;
    }

    ll y = log(x)/log(2);
    
    if(pow(2,y) == x) cout <<"1" << endl;
    else {
        ll z = x - pow(2,y);
        ll s = log(z) / log(2);
        
        if(pow(2,s) == z){
            cout <<"2";
        }

        else cout <<"3";
    }

    return 0;
}