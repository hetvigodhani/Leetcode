class Solution {
public:
    int search(vector<int>& nums, int target) {
         int left = 0, right = nums.size() - 1;

         while (left <= right) {
            int middle = (left + right) / 2;

            if (nums[middle] == target) {
                return middle;
            }

            if (nums[left] <= nums[middle]) {
                if (nums[left] <= target && target <= nums[middle]) {
                    right = middle;
                } else {
                    left = middle + 1;
                }
            } else {
                if (target >= nums[middle] && target <= nums[right]) {
                    left = middle;
                } else {
                    right = middle - 1;
                }
            }
         }

         return -1;
        
    }
};