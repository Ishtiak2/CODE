#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int n,m;
    cin >> n >> m;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }

    sort(arr, arr+n);

    int money = 0;

    for(int i = 0; i < m; i++){
        if(arr[i] <0){
            money += -arr[i];
        }
    }

    cout <<money;

    return 0;
}