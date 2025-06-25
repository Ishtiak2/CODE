#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
ll p[1000000];
int main()
{
    optimize();
    string s;
    cin>>s;
    ll n = s.length();
    vector<int> ch(n);
    
    ch[0] = 0;
    for(int i = 1; i < n;i++){
        if(s[i]==s[i-1]){
            ch[i-1]=1;
        }
        else ch[i] = 0;
    }
    
    p[0] = ch[0];
    for(int i = 1; i < n;i++){
        p[i] = p[i-1]+ch[i];
    }


    ll m;
    cin >> m;

    while(m--){
        ll l,r;
        cin >> l >> r;
        cout<<p[r-2]-p[l-2]<<endl;
    }

    return 0;
}