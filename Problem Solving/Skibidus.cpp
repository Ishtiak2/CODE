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

    string str;

    while(t--) {
        cin >> str;
        str[str.length()-2] = 'i';
        
        for(int i = 0; i <=str.length()-2;i++) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}