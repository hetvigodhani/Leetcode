class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> num;
        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            if(num.find(temp)!=num.end())
            {
                return{i,num[temp]};
            }
            else
            {
                num[nums[i]]=i;
            }
        }
        return {};
    }
};