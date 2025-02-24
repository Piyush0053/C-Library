#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &nums, int target, int i, vector<vector<int>> &dp)
{
    if (target == 0)
        return true;
    if (target < 0 || i < 0)
        return false;

    if (dp[i][target] != -1)
    {
        return dp[i][target];
    }

    bool include = solve(nums, target - nums[i], i - 1, dp);
    bool exclude = solve(nums, target, i - 1, dp);

    dp[i][target] = (include || exclude);
    return dp[i][target];
}

int main()
{

    vector<int> nums{1,5,11,5};
    {
        int target = 0;
        for (auto i : nums)
        {
            target += i;
        }
        if (target % 2 == 0)
        {
            target /= 2;
            int i = nums.size();
            vector<vector<int>> dp(i, vector<int>(target + 1, -1));
            cout<<solve(nums, target, i - 1, dp);
        }
        else
        {
            cout<<false;
        }
    }
}
