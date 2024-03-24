class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> num;
        for(int i=0;i<nums.size();i++)
        {
            if(num.find(nums[i]) == num.end())
                num.insert(nums[i]);
            else
                return nums[i];
        }
        return -1;
    }
};