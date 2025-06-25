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
        int n;
        cin>> n;

        int x;
        vector<int> arr(2*n+1);
        vector<bool> vis(2*n+1,false);
        vis[0] =true;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> x;
                arr[i+j] = x;
                vis[x] = true;
            }
        }

        for(int i = 0; i <= 2*n; i++){
            if(vis[i] == false){
                arr[1] = i;
                break;
            }    
        }
        
        for(int i = 1; i <= 2*n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}