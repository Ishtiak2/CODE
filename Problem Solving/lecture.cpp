#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    //optimize();
    int n,m;
    cin >> n >> m;

    unordered_map<string,string> mp;

    while(m--){
        string str1,str2;
        cin >> str1;
        cin >> str2;

        if(str1.length() <= str2.length()){
            mp[str2] = str1;
            mp[str1] = str1;
        }
        else{
            mp[str1] = str2;
            mp[str2] = str2;

        }
    }

    while(n--){
        string s;
        cin >> s;

        cout<< mp[s]<<" ";
    }
    
    return 0;
}