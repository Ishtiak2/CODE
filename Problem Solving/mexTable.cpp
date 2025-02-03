#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long n,m;

    while(t--)
    {
        ios::sync_with_stdio(true);
        cin.tie(nullptr);

        cin >> n >> m;
        
        cout << max(n,m) + 1 << endl;

    }
    return 0;
}