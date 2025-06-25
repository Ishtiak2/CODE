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

        ll arr[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }

        ll k = 0;
        ll a = 0;
        ll count = 0;
    
        for(int i = 0; i < n; i++){
            k = 0;
            int j = a;
            a++;
            ll max = INT_MIN;

            while(k < n && j < n){
                if(max < abs(arr[k][j]) && arr[k][j] < 0){
                    max = abs(arr[k][j]);
                }
                k++;
                j++;
            }
            if(max != INT_MIN) count+= max;

        }
        k = 0;
        a = 1;    
        
        for(int i = 1; i < n; i++){
            int j = 0;
            k = a;
            a++;
            ll max = INT_MIN;

            while(k < n && j < n){
                if(max < abs(arr[k][j]) && arr[k][j] < 0){
                    max = abs(arr[k][j]);
                }
                k++;
                j++;
            }
            if(max != INT_MIN) count+= max;

        }
        cout<< count << endl;
    }
    return 0;
}