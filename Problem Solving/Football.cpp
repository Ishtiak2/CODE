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
    map<string,int> team;
    while(n--){
        string str;
        cin >> str;
        team[str]++;
    }

    string ans;
    int max = 0;

    for(auto it: team){
        if(it.second>max){
            max = it.second;
            ans = it.first;
        }

    }

    cout << ans;

    return 0;
}