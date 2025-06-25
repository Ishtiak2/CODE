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

        string str;
        cin >> str;

        string s;
        char prev = tolower(str[0]); //cout << "Prev: " << prev << endl;
        s = s+prev;
        bool flag = false;

        for(int i = 1; i <n; i++) {
            str[i] = tolower(str[i]); //cout <<"Str: " << str[i] << endl;

            if( (str[i] == ('m') ) || (str[i] == ('e') ) || (str[i] == ('o') ) || (str[i] == ('w') ) ) {
                if(prev != str[i]) {
                    s = s+str[i];
                    prev = str[i];
                }
            }

            else{
                //cout <<"NO" << endl;
                flag = true;
                break;
            }
        }
        
        if(!flag && s == "meow"){
            cout <<"YES" << endl;
            continue;
        }

        else cout <<"NO" << endl; 

    }
    return 0;
}