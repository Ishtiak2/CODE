#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,t;
    cin >>  n >> t;
    int x;

    unordered_map<int,int> line(n);
    line[0] = 0;

    for(int i = 1; i <= n-1; i++){
        cin >> x;
        line[i] = i+x;
    }

    int i = 1;
    while(i != n){
        if(line[i] == t){
            //cout<<"i: "<<i <<endl;
            cout <<"YES";
            return 0;
        }
        else{
            //cout<<"i: "<<i <<endl;
            i = line[i];
        }
    }
    //cout<<i<<endl;

    if(t==n && i == n)cout<<"YES";
    else
        cout <<"NO";

    return 0;
}