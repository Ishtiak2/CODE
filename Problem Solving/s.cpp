#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'

#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{

     optimize();

     ll t;
     cin >> t;
     while(t--)
     {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n+1);
        set<int> x;

        a[0] = 0;
        
        for(ll i= 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for(ll i = 0; i < q; i++)
        {
            int y;
            cin >> y;
            x.insert(y) ;
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j: x)
            {
                if( fmod(a[i],pow(2,j)) == 0 ) {
                    a[i] = a[i]+pow(2,j-1);
                    break;
                }    
            }

            cout << a[i] <<" ";
        }

        cout << endl;

     }    

    return 0;
}
