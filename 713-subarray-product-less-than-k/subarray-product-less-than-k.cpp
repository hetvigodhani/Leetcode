class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k<=1)
            return 0;

        int count=0,prod=1,i=0,j=0;
        int n=nums.size();
        while(j<n)
        {
            prod*=nums[j];
            while(prod>=k)
            {
                prod /=nums[i];
                i++;
            }
            count+=(j-i)+1;
            j++;
        }
        return count;
    }
};