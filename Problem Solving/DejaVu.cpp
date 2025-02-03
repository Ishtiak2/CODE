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
        vector<double> x(q+1);

        a[0] = x[0] = 0;
        
        for(ll i= 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for(ll i = 1; i <= q; i++)
        {
            cin >> x[i];
        }

        sort(x.begin(),x.end());

        for(int i = 1; i <= n; i++)
        {

            double l = log(a[i]);
            double s = log(2);
            
            if ( fmod(l,s) == 0.00) {
                
                ll y = log(a[i]) /log(2);

                if(binary_search(x.begin()+1, x.end() , y)) a[i] = a[i]+pow(2,y-1);
            }
            cout << a[i] << " ";
        }

        cout << endl;

     }


    return 0;
}
