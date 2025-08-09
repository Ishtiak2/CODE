#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio (0) ; cin.tie (0) ; cout.tie (0) ;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp[0] = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > temp.back()) temp.push_back(nums[i]);
            else {
                temp[lower_bound(temp.begin(),temp.end(), nums[i]) - temp.begin()] = nums[i];
            }
        }

        return temp.size(); 
    }
};

int main()
{
    optimize();
    Solution.s;
    return 0;
}