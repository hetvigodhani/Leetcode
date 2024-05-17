class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        }
        if(nums.size()==2)
        {
            return (nums[0]>nums[1])?0:1;
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            int pre=nums[i-1],next=nums[i+1];
            if(nums[i]>pre && nums[i]>next)
            {
                return i;
            }
        }
        if(nums[0]>nums[nums.size()-1])
            return 0;
        else
            return nums.size()-1;
    }
};