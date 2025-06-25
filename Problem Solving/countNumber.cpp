#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'

#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{

    optimize();

    int t;
    cin >> t;

    while(t--) {

    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> big(26,0);
    vector<int> small(26,0);

    for(int i = 0; i < s.length(); i++) {
        if('A' <= s[i] && 'Z' >= s[i]) big[s[i] - 'A']++;
        else small[s[i]-'a']++;
    }

    int answer = 0;

    for(int i = 0; i < 26; i++)
    {
        int pairs = min(small[i],big[i]);
        answer = answer + pairs;
        small[i] -= pairs;
        big[i] = big[i] - pairs;

        int add = min(k,max(small[i],big[i])/ 2 );
        k=k-add;
        answer = answer + add;
    }

    cout << answer << endl;

    }

    return 0;
}
