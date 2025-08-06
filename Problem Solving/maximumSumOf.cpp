#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Solution {
public:
    // Bottom-up tabulation approach
    int nonAdjacent(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> dp(n); // dp[i] = max sum till index i without adjacent
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            // either take current element + dp[i-2]
            // or skip current and carry dp[i-1]
            dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        }
        return dp[n - 1];
    }

    // Top-down memoization approach
    int f(vector<int>& nums, vector<int>& dp, int n) {
        if (n == 1) return dp[n] = nums[0];
        if (n == 2) return dp[n] = max(nums[0], nums[1]);

        if (dp[n] != -1) return dp[n];

        // pick current element (index n-1 since size is 1-based in function)
        int take = nums[n - 1] + f(nums, dp, n - 2);
        // or skip current
        int skip = f(nums, dp, n - 1);

        return dp[n] = max(take, skip);
    }

    int maximumNonAdjacentSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1); // 1-based dp
        return f(nums, dp, n);
    }
};

int main() {
    optimize();
    Solution s;
    vector<int> nums = {1, 7, 16, 8};
    cout << s.nonAdjacent(nums) << endl;
    // for testing top-down as well:
    // cout << s.maximumNonAdjacentSum(nums) << endl;
    return 0;
}
