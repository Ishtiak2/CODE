#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    
    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }

    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }

    // Sort both arrays
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(boys[i] - girls[j]) <= 1) {
                girls[j] = 1000;  // Mark as paired (1000 is out of valid range)
                result++;
                break;  // Move to the next boy
            }
        }
    }

    cout << result << endl;
    return 0;
}
