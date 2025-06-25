#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--) {
        int n,a,b;
        cin >> n >> a >> b;

        string str;
        cin >> str;
        int x,y;
        x = y = 0;
        bool flag = false;

        for(int i = 1; i < 103; i++){
            
            if(x == a && y == b){
                flag = true;  
                break;
            }    

            for(int j = 0; j < str.length(); j++){
                if(str[j] == 'N') y = y + 1;
                if(str[j] == 'E') x += 1;
                if(str[j] == 'S') y -= 1;
                if(str[j] == 'W') x -= 1;

                if(x == a && y == b){
                    flag = true;
                    break;
                }    
            }

        }

        if(!flag) cout <<"NO" << endl;
        else cout << "YES" << endl;

    }
    return 0;
}