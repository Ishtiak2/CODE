#include<bits/stdc++.h>
using namespace std;
//Not working code
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

int main()
{
    optimize();
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n+1][n+1];

        int f,g;
        if(n%2==1){
            f=(n+1)/2;
            g= (n+1)/2;
        }

        else{
            f=(n/2)+1;
            g= n/2;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> arr[i][j];
            }
        }

        int x =1;
        int k = 0;

        int h,a;

        while(f!=h && a != g){
            for(int i = x,j = x; j <=n-x;j++){
                cout<<arr[i][j]<<" ";
            }

            for(int i = x,j = n-k; i<= n-k; i++){
                cout<<arr[i][j]<<" ";
            }

            for(int i = n-k,j = n-x; j >= x; j--){
                cout<<arr[i][j]<<" ";
            }

            for(int i = n-x,j = x; i >= x+1; i--){
                cout<<arr[i][j] <<" ";
                h = i;
                a= j;

            }

            x++;
            k++;
        }

        cout<<arr[f][g];
    }

    return 0;
}