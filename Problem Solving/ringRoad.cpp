#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n;
    cin >> n;

    int a,b,c;
    int from[101] = {0};
    int to[101] = {0};

    int totalCost = 0;
    int cost = 0;

    while(n--){
        cin >> a >> b >> c;
        totalCost+=c;

        if(from[a] != 0 || to[b] != 0){
            from[b] = 1;
            to[a] = 1;
            cost+=c;
        }

        else{
            from[a] = 1;
            to[b] = 1;
        }
    }

    if(totalCost - cost >= cost) cout<<cost;
    else cout<<totalCost - cost;
    
    return 0;
}