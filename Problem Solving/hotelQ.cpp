#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,m;
    cin >> n >> m;

    vector<int> hotels(n);

    for(int i = 0; i < n; i++) {
        cin >> hotels[i];
    }

    for(int i = 0; i < m; i++) {
       int room;
       cin >> room;

       bool flag = false;

       for(int j = 0; j < n; j++)
       {
        if(hotels[j] >= room){
            cout << j + 1 <<" ";
            hotels[j] -= room;
            flag = true;
            break;
        }
        
       }
            

        if(!flag) {
            cout << 0 <<" ";
        }
    }

    cout << endl;

    return 0;
}