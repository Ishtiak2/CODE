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

    while(t--)
    {
        string s;
        cin >> s;

        ll count_1 = 0;
        ll count_0 = 0;

        for(auto c: s)
        {
            if(c == '0') count_0++;
            else count_1++;
        }

        for(int i = 0; i <= s.length(); i++)
        {
            if( i == s.length() || (s[i] == '0' && count_1 == 0) || (s[i] == '1' && count_0 == 0) )
            {
                cout << s.length() - i << endl;
                break;
            }

            if(s[i] == '0') count_1--;
            else count_0--;
        }
        
    }
    return 0;
}