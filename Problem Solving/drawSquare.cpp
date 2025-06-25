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
        int l,r,d,u;
        cin >> l >> r >> d >> u;
        int a = l*l + u*u;
        int b= r*r + u*u;
        int c = r*r + d*d;
        int g = l*l + d*d;

        if(a == b && b == c && c == g && ((d+u) == (l+r))){
            
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}