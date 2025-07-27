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
        cin >> str;

        ll c= 0;
        ll c1 = 0;
        ll c0 = 0;

        for(ll i = 0; i < str.length(); i++) {
            
            if(str[i]== '0') c0++;
            if(str[i] == '1') c1++;

            if(i == 0 && str[i] == '1') c+=2;
            else if(i == 0 && str[i] == '0') c++;

            if(i > 0 && str[i] != str[i-1]) c+=2;
            else if(i > 0 && str[i] == str[i-1]) c++;
        }
        if(c0 == 0 || c1== 0) {
            cout << c << endl;
            continue;
        }

        if(c0 > 1 && c1 > 1) c-=2;
        else if(c0 > 1 && c1 <= 1) {
            if(str[0] == '0' && str[n-1] == '0') c--;
            else if(str[0] == '1' ) c--;
        }
        
        else if(c0 <= 1 && c > 1 && str[0] == '1') c-=2;
        else if(c0 <= 1 && c1 <=1 && str[0] == '1') c--;
        
        cout << c << endl;
    }
    return 0;
}