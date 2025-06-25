#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    ll t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;
        string str;
        cin >> str;

        if(n == 1){
            cout<<"NO"<<endl;
            continue;
        }

        int indexI = -1;
        int indexJ = -1;
        bool flag = false;
        char c= str[0];
        int count = 0;

        for(auto it: str){
            if(c == it) count++;
        }
        if(count == n){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i = 0, j = n - 1; j >= i; i++, j--){
            if(str[i] != str[j]){
                indexI = i;
                indexJ = j;
                flag = true;
                break;
            }
            if(str[i] == c) count++;

        }
        if(!flag && k == 0){
            cout<<"NO"<<endl;
            continue;
        }
        if(str[indexI] > str[indexJ] && k == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}