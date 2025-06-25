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

    ll n;

    while(t--){
        cin >> n;

        bool flag = false;

        while(n>= 2020){
            if(n%2020 == 0 || n%2021 == 0){
                flag = true;
                break;
            }

            int digit = n %10;

            if(digit != 0){
                n = n-2021;
            }

            else n = n -2020;
        }

        if(!flag) cout<<"NO" <<endl;
        else cout<<"YES" <<endl;
    }
    return 0;
}