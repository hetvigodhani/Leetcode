class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // for(int j=1;j<=nums.size()+1;j++)
        // {
        //     if(find(nums.begin(),nums.end(),j)==nums.end()){
        //         return j;
        //     }
        // }
        // return -1;

        int n=nums.size();
        for (int i = 0; i < n; i++)

            while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])

                swap(nums[i], nums[nums[i] - 1]);

        for (int i = 0; i < n; ++i)

            if (nums[i] != i + 1)

                return i + 1;

        return n + 1;
    }
};