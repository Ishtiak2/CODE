#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;
        
        if(mp[str] == 0)
        {
            cout <<"OK" << endl;
            mp[str]++;
        }

        else if(mp[str] > 0) {
            cout<< str << mp[str] << endl;
            mp[str]++;

        }
        
        
    }
    return 0;
}