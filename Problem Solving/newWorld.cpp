#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,k,p;

    int t;
    cin >> t;

    while(t--){
        cin >> n >> k >> p;

        k = abs(k);
        p = abs(p);

        if(k/p <= n){
            if(k%p == 0) cout<<k/p<<endl;
            else{
                if(k/p +1 >  n){
                    cout<<"-1"<<endl;
                }

                else
                    cout<< k/p + 1 <<endl;
            }

            continue;
        }

        else if(k/p >= n){
            cout<<"-1"<<endl;
            continue;
        }

        if(k <= p){
            cout<<"1"<<endl;
            continue;
        }

        if(k == 0 && p == 0){
            cout<<"0" <<endl;
            continue;
        }

        if(k == 0 || p == 0){
            cout<<"-1"<<endl;
        }

    }

    return 0;
}