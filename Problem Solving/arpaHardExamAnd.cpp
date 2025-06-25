#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll n;
    cin >> n;

    if(n==0){
        cout<<"1";
        return 0;
    }

    ll num = n%4;
   
    if(num == 1){
        cout<<"8";
    }
    else if(num == 2){
        cout<<"4";
    }
    else if(num == 3){
        cout<<"2";
    }
    else if(num == 0){
        cout<<"6";
    }

    return 0;
}