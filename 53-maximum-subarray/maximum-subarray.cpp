class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = -1000000007, sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = max(nums[i], nums[i] + sum);
            best = max(best, sum);
        }
        return best;
    }
};