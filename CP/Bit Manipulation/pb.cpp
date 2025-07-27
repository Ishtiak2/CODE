#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

void printBinary(int n) {
    for(int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main()
{
    optimize();
    printBinary(15);
    int a = 15;
    int i = 2;
    if((a & (1 << i)) != 0 ) cout <<"SET" << endl;
    else cout <<"UNSET" << endl;

    ll x = ~(1 << i);

    printBinary(a & x);
    return 0;
}