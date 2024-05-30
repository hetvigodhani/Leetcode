class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minp=-1,maxp=-1,cul=-1;
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<minK || nums[i]>maxK)
                cul=i;
            if(nums[i]==minK)
                minp=i;
            if(nums[i]==maxK)
                maxp=i;
            long long small=min(maxp,minp);
            long long temp=small-cul;
            ans+=(temp<=0)?0:temp;
        }
        return ans;
    }
};