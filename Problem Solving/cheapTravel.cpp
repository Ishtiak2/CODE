#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    if(n < m) {
        cout <<min(n*a,b);
    }
    else if(n%m == 0){
        cout <<min((n/m)*b, n*a);
    }
    else {
        cout <<min({ ((n/m)+1)*b , (n/m)*b + (n - ((n/m)*m))*a, n*a});
    }

    return 0;
}