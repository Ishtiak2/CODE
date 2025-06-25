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
        ll n;
        cin >> n;
        string str;

        for(int i = 0 ; i< n; i++) str = str +'3';

        if(n == 1 || n == 3) {
            cout << "-1" << endl;
            continue;
        }
        if(n == 2){
            cout<<"66"<<endl;
            continue;
        }

        str[n-1] = '6';
        str[n-2] = '6';
        str[n-3] = '3';
        if(n % 2 == 0) str[n-4] = '3';
        else str[n-4] = '6';

        for(int i = 0; i < n; i++ )cout<<str[i];
        cout<<endl;        
    }
    return 0;
}