#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    char a;
    cin >> a;
    string s;
    cin >> s;

    string str = "1234567890qwertyuiop[]asdfghjkl;'zxcvbnm,./";

    if(a == 'R'){
        for(int i = 0; i < s.length(); i++){
            for(int j= 0; j < str.length(); j++){
                if(s[i] == str[j]){
                    s[i] = str[j-1];
                }
            }
        }
    }

    if(a == 'L'){
        for(int i = 0; i < s.length(); i++){
            for(int j= 0; j < str.length(); j++){
                if(s[i] == str[j]){
                    s[i] = str[j+1];
                }
            }
        }
    }

    cout<< s;

    return 0;
}