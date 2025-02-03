#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

const int mx = 2e5+123;
ll a[mx];
ll p[mx];

int main()
{
    optimize();
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a+1, a+n+1);

    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(!binary_search(a+i+1, a+n+1, a[i])) count++;
    }

    cout << count;

    return 0;
}

