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

    int n;

    while(t--) {
        cin >> n;

        string str;
        cin >> str;
        int ans = n-1;

        for(int i = 1; i+1 < n; i++)
        {
            if(str[i-1] == str[i+1]) ans--;
        }

        cout << ans << endl;

    }
    return 0;
}