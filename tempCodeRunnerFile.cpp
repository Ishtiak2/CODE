#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    string st;
    cin >> st;

    sort(st.begin(), st.end());

    map<char,int> mp;

    int count = 0;
    for(int i = 0; i < st.size(); i++)
    {
        if(st[i] == st[i+1]) count ++;

        else {
            mp[st[i]] = count+1;
            count = 0;
        }
    }

    for(auto u: mp) cout <<"Index- " << u.first <<" : " << u.second << endl;


    
    return 0;
}