class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        set<int> num;
        for(int i=0;i<nums.size();i++)
        {
            if(num.find(nums[i])==num.end())
                num.insert(nums[i]);
            else
                result.push_back(nums[i]);
        }
        return result;
    }
};