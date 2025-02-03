#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        if(nums[ lower_bound(nums.begin(), nums.end()-1, target)] == target)
            return lower_bound(nums.begin(), nums.end()-1, target) - nums.begin();
        else return -1;    
}
int main()
{
    vector<int> vec= {1,2,3,4,5,6,7}
    cout << search(vec,4) << endl;
    return 0;
}


