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

    //int x = n / m;
    int count = n/m;

    int i = n+1;

    while(count >0){
        if(i%m != 0){
            count--;
        }

        //if(count == 0) break;

        i++;
    }
    cout<<i-1;

    return 0;
}