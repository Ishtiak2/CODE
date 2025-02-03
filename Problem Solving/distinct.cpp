#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    int n;
    scanf("%d", &n); // Faster input using scanf

    unordered_set<ll> arr;

    for (int i = 1; i <= n; i++) {
        ll x;
        scanf("%lld", &x); // Faster input using scanf
        arr.insert(x);
    }

    printf("%d\n", (int)arr.size()); // Faster output using printf

    return 0;
}