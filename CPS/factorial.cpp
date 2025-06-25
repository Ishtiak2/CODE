#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

map<ll,ll> f;

ll fact(int n)
{
    if(n == 0 ){
        f[0] = 0;
        return 1;
    }

    else{
        f[n] = n* fact(n-1);
    }   
    return f[n];
}


int main()
{
    optimize();
    
    cout << fact(10) << endl;

    return 0;
}

