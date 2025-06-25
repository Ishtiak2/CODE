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

        if(n==1){
            cout<<"0"<<endl;
            continue;
        }

        int ans = 0;
        bool flag = false;

        for(int i = 1; i <= 1000 || n >1; i++){
            if(n % 6 == 0) {
                n = n/6;
                ans++;
                //cout<<ans<<endl;

                if(n==1){
                    cout<<ans<<endl;
                    flag = true;
                    break;
                }
        
            }

            else {
                n = n*2;
                ans++;
                //cout<<ans<<endl;
            }    
        }
        if(!flag)
        cout<<"-1"<<endl;
    }
    return 0;
}