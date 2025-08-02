#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;

ll GaussElimination(vector<vector<double>> mat(n), int n){
    for(ll i = 0; i < n; i++) {
        double pivot = mat[i][i];

        for(ll j = 0; j <= n; j++) {
            mat[i][j] = mat[i][j] /pivot;
        }

        for(int k = 0; k < n; k++) {
            if(k == i) continue;

            double factor = mat[k][i];

            for(ll i = 0; j <= n; j++) {
                mat[k][j] -= factor * mat[i][j];
            }
        }

        for(ll i = 0; i < n; i++) {
            cout <<"x= "  << i+1 <<mat[i][n] << endl;
        }
    }


}

int main()
{
    optimize();
    ll m,n;
    n=m= 3;

    vector<vector<double>> mat(n,vector<double>> (m+1));
    GaussElimination(mat,n)
    return 0;
}