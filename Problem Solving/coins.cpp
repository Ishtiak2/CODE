#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

bool comp(pair<char,int> &a, pair<char,int> &b){
    return a.second < b.second;
}
int main()
{
    optimize();
    //int a,b,c;

    map<char,int> coin;

    coin['A'] = coin['B'] = coin['C'] = 0;
    
    for(int i = 1; i <= 3;i++){
        string s;
        cin >> s;

        if(s[1] == '>'){
            coin[s[0]]++;
        }

        else if(s[1] == '<')
            coin[s[2]]++;

    }

    if(coin['A']==coin['B'] || coin['A']==coin['C'] || coin['B']==coin['C']){
        cout<<"Impossible";
        return 0;
    }
    
    vector<pair<char,int>> vec(3);
    int i = 0;
    for(auto it: coin){
        
        vec[i].first = it.first;
        vec[i].second = it.second;
        i++;
    }

    sort(vec.begin(),vec.end(),comp);

    for(auto it: vec){
        cout<<it.first;
    }

    return 0;
}