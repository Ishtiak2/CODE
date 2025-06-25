#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    ll t;
    cin >> t;

    while(t--) {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        string str;

        for(ll i = 0; i < n; i++) {
            cin >> str;
            for(ll j = 0; j < m; j++) {
                if(str[j] == '0') arr[i][j] = 0;
                else arr[i][j] = 1;
            }
        }

        bool possible = true;

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                if(arr[i][j] == 1) {
                    bool from_left = (j == 0);
                    bool from_top = (i == 0);

                    if(!from_left) {
                        from_left = true;
                        for(ll k = 0; k < j; k++) {
                            if(arr[i][k] != 1) {
                                from_left = false;
                                break;
                            }
                        }
                    }

                    if(!from_top) {
                        from_top = true;
                        for(ll k = 0; k < i; k++) {
                            if(arr[k][j] != 1) {
                                from_top = false;
                                break;
                            }
                        }
                    }

                    if(!from_left && !from_top) {
                        possible = false;
                        break;
                    }
                }
            }
            if(!possible) break;
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}