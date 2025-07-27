#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        long long odd_count = 0;
        for (int i = 0; i < 26; i++)
            if (freq[i] % 2 != 0)
                odd_count++;

        long long remaining_length = n - k;

        if (remaining_length < 0) {
            cout << "NO\n"; // cannot remove more than n
            continue;
        }

        if (remaining_length % 2 == 0) {
            // After deletion, the length is even → all characters must be even
            if (odd_count <= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            // After deletion, the length is odd → at most 1 odd allowed
            if (odd_count <= k + 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
