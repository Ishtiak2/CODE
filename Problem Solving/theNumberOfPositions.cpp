#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();

    int n, a, b;
    cin >> n >> a >> b;

    // Calculate the number of valid positions
    int result = n - max(a + 1, n - b) + 1;

    // Print the result
    cout << result << endl;

    return 0;
}