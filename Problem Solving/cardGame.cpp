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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        ll count = 0;

        if((a > c && b > d) || (a > c && b == d) || (a == c && b > d)) count++;
        if((a > d && b > c) || (a > d && b == c) || (a == d && b > c)) count++;
        if((b > c && a > d) || (b > c && a == d) || (b == c && a > d)) count++;
        if((b > d && a > c) || (b > d && a == c) || (b == d && a > c)) count++;

        cout << count << endl;

    }
    return 0;
}