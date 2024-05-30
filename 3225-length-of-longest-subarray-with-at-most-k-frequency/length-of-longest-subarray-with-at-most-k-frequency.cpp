class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i=0,j=0,result=0;
        int n=nums.size();
        while(j<n)
        {
            mp[nums[j]]++;
            while(mp[nums[j]]>k && i<j)
            {
                mp[nums[i]]--;
                i++;
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};