#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
/*
class Solution {
public:
    int f(int m, int n,vector<vector<int>>& dp) {
       if(m == 1 && n == 1) return 1;
       if(m == 0 || n == 0) return 0;

       if(dp[m][n] != -1) return dp[m][n];
       
       int left = f(m-1,n,dp);
       int right = f(m,n-1,dp);
       return dp[m][n] = left + right; 
    }

    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m+1,vector<int> (n+1, -1));
       return f(m,n,dp);
    }
};
*/

class Solution {
public:
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1, 0));

        dp[1][1] = 1;

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == 1 && j == 1) continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                 
            }
        }

        return dp[m][n];
    }
};

int main()
{
    optimize();
    ll m,n;
    cin >> m >> n;
    
    Solution s;

    cout << s.uniquePaths(m,n);
    return 0;
}