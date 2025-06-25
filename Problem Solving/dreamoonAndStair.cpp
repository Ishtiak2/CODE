#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll n,m;
    cin >> n >> m;

    if(n/m == 0){
        cout<<"-1";
        return 0;
    }

    ll k,ans;
    ans = 0;
    k = n/2;

    if(n%2 != 0){
        ans++;
    }

    ans+=k;

    while(k >= 0){
        if(ans % m != 0){
            ans++;
        }
        else
            break;

        k--;
    }

    cout<<ans;

    return 0;
}