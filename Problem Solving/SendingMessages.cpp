#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long n,f,a,b;

    while(t--)
    {
        cin >> n >> f >> a >> b;

        vector<long long> moment(n+1);
        moment[0] = 0;

        for(long long i = 1; i <= n; i++)
        {
            cin >> moment[i];
        }

        for (long long i = 1; i <= n; i++) {
            f = f - min(a * (moment[i] - moment[i - 1]), b);
        }

        if(f > 0) cout <<"YES" << endl;
        else cout <<"NO" << endl;
        
    }
    return 0;
}