class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max=0,i=0,j=0,countMax=0;
        int n=nums.size();
        max=*max_element(begin(nums),end(nums));
        long long result=0;
        while(j<n)
        {
            if(nums[j]==max)
                countMax++;
            while(countMax>=k)
            {
                result+=n-j;
                if(nums[i]==max)
                    countMax--;
                i++;
            }
            j++;
        }
        return result;
    }
};
