#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

ll getLength(ll n) {
    string str = to_string(n);
    return str.length();
}

ll getDigit(ll n, ll pos) {
    string s = to_string(n);

    return s[pos-1] - '0';
}

ll f(ll n, vector<ll>& dp) {
    if(n < 10) return dp[n] = 1;
    
    if(dp[n] != -1) return dp[n];
    
    ll len = getLength(n);
    
    ll ans = LLONG_MAX;

    for(ll i = 1; i <= len; i++) {
        ll digit = getDigit(n,i);
        
        if(digit != 0)
            ans = min(ans, f(n - digit, dp)+1);
    }

    return dp[n] = ans;
}
int main()
{
    optimize();
    ll n;
    cin >> n;

    vector<ll> dp(n+1, -1);
    
    cout << f(n, dp);

    return 0;
}