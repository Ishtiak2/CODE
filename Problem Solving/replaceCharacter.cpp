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

    while(t--){
        ll n;
        cin >> n;
        string str;
        cin >> str;

        unordered_map<char,int> mp;

        for(int i = 0; i < str.length(); i++){
            mp[str[i]]++;
        }

        char maxChar = str[0];
        int max = mp[str[0]];

        char minChar = str[0];
        int min = mp[str[0]];

        for(auto it: str){
            
            if(mp[it] > max) {
                max = mp[it];
                maxChar = it;
            }

            if(mp[it] < min){
                min = mp[it];
                minChar = it;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(maxChar == minChar){
                if(str[i] != maxChar){
                    str[i] = maxChar;
                    break;
                }
            }
            
            else if(str[i] != maxChar && str[i] == minChar ){
                str[i] = maxChar;
                break;
            }
        }

        cout<< str <<endl;

    }
    return 0;
}