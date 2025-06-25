#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const ll mod=1e9+7;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    map<int,int> m;
    
    for(int i =0; i < 10; i++){
        m[i] = 0;
    }
    int mx = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(mx < arr[i]) mx = arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 2; j <=mx; j++){
            if(arr[i] % j == 0) m[j]++;
        }
    }


    int max = 0;
    int ans = 1;
    for(int i = 2; i <= mx; i++){
        if(m[i] >= max) {
            max = m[i];
            ans = i;
        }
    }

    

    cout << ans ;

}

