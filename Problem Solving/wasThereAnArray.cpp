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


    while(t--){
        ll n;
        cin >> n;

        vector<int> vec(n-2);

        bool flag = false;

        for(int i = 0; i < n -2; i++){
            cin >> vec[i];
        }

        for(int i = 0; i < n-2-2; i++){
            if(vec[i] == 1 && vec[i+1] == 0 && vec[i+2]==1){
                cout<<"NO" <<endl;
                flag = true;
                break;
            }
        }

        if(!flag) cout<<"YES"<<endl;
    }
    return 0;
}