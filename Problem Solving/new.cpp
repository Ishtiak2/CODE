#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int z = n;

        vector<string> phone(n);

        ll min = INT_MAX;
        string str;

        for(int i = 0; i < n; i++)
        {
            cin >> phone[i];

            if(min > phone[i].length()){
                min = phone[i].length();
                str = phone[i];
            }
        }
        //cout << str <<endl;

        string c;
        bool flag = false;

        for(int i = 0; i < z; i++)
        {
            string x = phone[i];
            
            for(int j= 0; j < min; j++)
            {
                c = c + x[j];
            }
            //cout << c << endl;

            if(c == str){
                cout <<"NO" << endl;
                flag = true;
                break;
            }
        }

        if(!flag) cout <<"YES" << endl;


    }
    return 0;
}