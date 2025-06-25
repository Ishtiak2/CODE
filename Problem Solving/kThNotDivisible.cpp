#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int t;
    cin >> t;

    ll n,k;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            if(i%n==0){
                k=k+1;
            }
            //else cout<<i <<" ";
        }

        cout <<k<<endl;
    }
    return 0;
}