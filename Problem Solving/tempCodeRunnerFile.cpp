#include <bits/stdc++.h>
using namespace std;

#define V_SUM_MAX 1000
#define N_MAX 100
#define W_MAX 1000000000000000LL

long long dp[V_SUM_MAX + 1][N_MAX];
bool v[V_SUM_MAX + 1][N_MAX];

long long solveDp(long long r, long long i, vector<long long>& w, vector<long long>& val,vector<vector<long long>>& dp, vector<vector<bool>>& visited, long long n)
{
    if (r <= 0)
        return 0;
    if (i == n)
        return W_MAX;
    if (visited[r][i])
        return dp[r][i];

    visited[r][i] = 1;

    long long notTake = solveDp(r, i + 1, w, val, dp, visited, n);
    long long take = W_MAX;
    if (r - val[i] >= 0)
        take = w[i] + solveDp(r - val[i], i + 1, w, val, dp, visited, n);

    dp[r][i] = min(notTake, take);
    return dp[r][i];
}

long long maxWeight(vector<long long>& w, vector<long long>& val, long long n, long long c)
{


    long long valueSum = accumulate(val.begin(), val.end(), 0LL);

    vector<vector<long long>> dp(valueSum+1, vector<long long> (n,0));
    vector<vector<bool>> visited(valueSum + 1, vector<bool>(n, false));


    for (long long i = valueSum; i >= 0; i--) {
        if (solveDp(i, 0, w, val, dp,visited, n) <= c) {
            return i;
        }
    }
    return 0;
}

int main()
{
    long long n,w;
    cin >> n >> w;

    vector<long long> val(n);
    vector<long long> wt(n);

    for(long long i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }
    cout << maxWeight(wt,val,n,w);

    return 0;
}