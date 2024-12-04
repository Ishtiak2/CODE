#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    
    long int arr[n];

    for(long int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    long int q;
    cin >> q;

    for(long int i = 0; i < q; i++)
    {
        long int x;
        cin >> x;

        cout <<upper_bound(arr, arr+n, x) - arr <<endl;
    }


    return 0;
}


