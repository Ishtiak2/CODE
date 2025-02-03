#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mp;

    int n;
    cin >> n;

    int x;
    int count = 0;

    while(n--)
    {
        cin >> x;
        mp[x]++;

    }

    count = count + mp[4];
    
    count = count+ mp[3];
    
    if(mp[1] > mp[3]) mp[1] = mp[1] - mp[3];
    else mp[1] = 0;

    count = count + (mp[2]/2);

    if(( mp[2] % 2) != 0) {
        count ++;
        mp[1] = mp[1] - 2;
    }

    if(mp[1] > 0)
    {
        count = count + mp[1]/4;
        if((mp[1]% 4 != 0)) count++;
    }

    cout << count << endl;

    return 0;
}