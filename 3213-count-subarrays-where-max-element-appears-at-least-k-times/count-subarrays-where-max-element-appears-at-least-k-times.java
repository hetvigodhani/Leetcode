class Solution {
    public long countSubarrays(int[] nums, int k) {
        int n=nums.length;
        int mx=0;
        for (int i = 0; i < nums.length; i++) 
            if (nums[i] > mx) 
                mx = nums[i];
        int start=0; int end=0; long cnt=0; int MaxCnt=0;
        while(end<n){
            if(nums[end]==mx){
                MaxCnt++;
            }
            while(MaxCnt==k){
                cnt+=n-end;
                if(nums[start]==mx){
                    MaxCnt--;
                    
                }
                start++;
            }
            end++;
        }
        return cnt;
    }
}