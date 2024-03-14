class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixSumCount;
        int count = 0, prefixSum = 0;

        for (int num : nums) {
            prefixSum += num;
            if (prefixSum == goal) 
                count++;
            if (prefixSumCount.count(prefixSum - goal))
                count += prefixSumCount[prefixSum - goal];
            prefixSumCount[prefixSum]++;
        }

        return count;
    }
};