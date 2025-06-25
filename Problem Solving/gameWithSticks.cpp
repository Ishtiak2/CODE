#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,m;
    cin >> n >> m;

    if(min(n,m) % 2 == 0 ) cout <<"Malvika";
    else cout <<"Akshat";
    
    return 0;
}