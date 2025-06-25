#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n;
    string t;
    cin >> n >> t;

    if(t.length()==2 && n==1){
        cout<<"-1";
        return 0;
    }
    
    else if(t.length()==2){
        if(n > 2){
            int k = n -2;
            while(k--){
                t=t+'0';
            }
        }
    }

    else{
        int k = n-1;
        string j = t;
        while(k--){
            
            t+=j;
        }
    }

    cout<<t;

    return 0;
}