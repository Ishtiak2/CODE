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

    while(t--) {
        string s;
        cin >> s;

        bool flag = false;

        if(s.length() > 1) {
            for(int i = 0; i <s.length()-1; i++) {
                
                if(s[i] == s[i+1]){
                    flag = true;
                    break;
                }    
            }
        }
        
        if(flag) cout <<"1"<<endl;
        else cout << s.length() << endl;
    }
    return 0;
}