#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

ll f(int n, vector<ll>& a, vector<ll>& dp){
    if(n == 1 || n == 0) return 0;

    if(dp[n] != -1) return dp[n];
    
    ll left = abs(a[n] - a[n-1]) + f(n-1, a, dp);
    
    if(n == 2) return dp[n] = left;
    
    ll right = abs(a[n] - a[n-2]) + f(n-2, a, dp);

    return dp[n] = min(left,right);
}

ll fun(int n, vector<ll>& a, vector<ll>& dp) {
    dp[0] = 0;
    dp[1] = 0;

    for(ll i = 2; i <= n; i++) {
        
        ll jumpOne = abs(a[i] - a[i-1]) + dp[i-1];
        if(i == 2) {
            dp[i] = jumpOne;
            //cout <<"dp(2) = " <<dp[i] <<endl;

            continue;
        }
        
        ll jumpTwo = abs(a[i] - a[i-2]) + dp[i-2];
        //cout << "dp(" <<i <<") = min(" <<left <<" " << right <<") " << endl;

        dp[i] = min(jumpOne,jumpTwo);

    }

    return dp[n];
}

int main()
{
    optimize();
    ll n;
    cin >> n;

    vector<ll> a(n+1);
    vector<ll> dp(n+1,-1);
    
    a[0] = -1;
    
    for(ll i = 1; i <= n; i++) cin >> a[i];

    cout << fun(n,a,dp);

    return 0;
}