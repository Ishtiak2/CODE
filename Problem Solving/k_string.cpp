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

    string str;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if((it -> second) % k != 0 )
        {
            cout << "-1";
            return 0;
        }

        for(int i = 0; i < (it -> second)/k ; i++)
        {
            str = str + it -> first;
        }
    }

    string strr;
    for(int i = 0; i < k ; i++)
    {
        strr = strr + str;
    }

    cout << strr;
    

    return 0;
}