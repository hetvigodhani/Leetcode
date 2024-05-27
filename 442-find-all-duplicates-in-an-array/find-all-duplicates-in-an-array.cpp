class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set <int> s;
        vector <int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])==s.end())
            {
                s.insert(nums[i]);
            }
            else
                result.push_back(nums[i]);
        }
        return result;
    }
};