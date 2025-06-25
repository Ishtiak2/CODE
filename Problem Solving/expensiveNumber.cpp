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
    while(t--){
        string n;
        cin >> n;

        ll countN = 0;
        ll index = -1;

        if(n.size()==1){
            cout<<"0"<<endl;
        }
        else{
            for(ll i = 0; i < n.size(); i++){
                if(n[i] != '0'){
                    countN++;
                    index = i;
                }
            }
            cout<<countN + (n.size()-index-1) - 1 <<endl;
        }
    }
    return 0;
}