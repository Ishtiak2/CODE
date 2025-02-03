#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        //int lCase = -1;
        //int upCase = -1;

        vector<int> upper;
        vector<int> lower;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != 'b' && s[i] > 96) lower.push_back(i);
            else if(s[i] != 'B' && s[i] < 97) upper.push_back(i);

            else if(s[i] == 'b')
            {
                s[i] = '1';
                
                if(lower.size() > 0){
                    s[lower.back()] = '1';
                    lower.pop_back();
                }    
            }

            else if(s[i] == 'B')
            {
                s[i] = '1';
                
                if(upper.size() > 0){
                    s[upper.back()] = '1';
                    upper.pop_back();
                }
            }
            
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]!= '1') cout << s[i];
        }
        cout << endl;
    }
    return 0;
}