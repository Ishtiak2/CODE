#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
void printBinary(int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}


int main()
{
    optimize();
    
    ll n = 198;
    printBinary(n);
    if(n & 1) cout <<"ODD" << endl;
    else cout <<"EVEN" << endl;

    cout << (n >> 1) << endl;
    return 0;
}